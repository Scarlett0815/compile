# homework1

### 1.1

第十四行的`int a = 4`变成了`int a = -4`。

### 1.2

#### 区别

##### l q类

* `pushl`与`pushq`。

* `movl`与`movq`。

##### e r类

* `ebp`与`rbp`。

* `esp`与`rsp`。

##### .cfi类

* `.cfi_def_cfa_offset`后面跟随数据不一样。
* `.cfi_offset`后面跟随数据不一样。
* `.cfi_def_cfa_register`后面跟随数据不一样。
* 一个在结尾有`.cfi_restore`一个没有。
*  `.cfi_def_cfa`跟的值不一样。

##### 有无类

* `leave` 的有无。
* `popq %rbp`的有无。

#### 原因

##### l q类

`l`是双字的意思也就是32位，`q`是四边形表示64位，由于`ebp`与`esp`之类的均为32位，故而后面跟`l`，由于`rbp`以及`rsp`之类的都是属于64位故而使用`q`。

##### e r类

`bp`是基指指针，在 32 位系统中，`ebp`（Extended BP）寄存器存放的就是基指指针。在 64 位系统中，表现为`rbp`寄存器。`bp`指向栈帧的底部，一般称之为栈底指针。`sp`则是栈指针，`esp`与`rsp`的情况则同理。

##### .cfi类

###### cfi的定义

`CFI`全称是`Call Frame Instrctions`, 即调用框架指令。

###### cfa的定义

`CFA`全称为`Canonical Frame Address`是标准框架地址, 它被定义为在前一个调用框架中调用当前函数时的栈顶指针。

* 对于`.cfi_def_cfa_offset`第一种情况由于`push`进去的是`ebp`为32位，故而`esp`距离`CFA`为8，而另一种情况`push`进去的是64位的`rbp`,故而`rsp`距离`CFA`为16。
* 对于`.cfi_offset 5 -8`意思是将5号寄存器原先的值保存在离`CFA` -8的位置，意思就是将5号寄存器的值保存在栈底里面。而由于`rsp`距离`CFA`为16，而且后者存储的是6号寄存器的值，故而变为`.cfi_offset 6 -16`。
* `.cfi_def_cfa_register`后面所跟的值不一样，是因为之前所操作的值不一样。从这里开始, 使用`ebp`作为计算`CFA`的基址寄存器(前面用的是`esp`)
* 32位的在结尾通过`.cfi_restore`进行了5号寄存器的恢复。
* `.cfi_def_cfa`32位中是现在重新定义`CFA`, 它的值是第4号寄存器(`esp`)所指位置加4，就是取出旧的`ebp`的值，而64位中对应的不大一样故而是7号寄存器所指位置加8。

##### 有无类

* `leave`以及`popq %rbp`的有无。

64位中的如下操作和32位中的`leave`效果等价。

```
movl $0， %eax
popq %rbp
```

### 1-3

#### 预处理

申明里面多了很多数字，多了好几个<built-in>但是少了一条路径申明。

#### 编译得到汇编文件

32位和64位的汇编文件都发生了变化，有着各自的汇编写法。

#### 生成目标文件

##### 反汇编

反汇编后结果不一样。

##### 查看编译的详细过程

* 输出时collect的编译器不同。
* 输出时对于target的描述不一样，尽管，我怀疑就是一个东西。
* 关于candidate还有multilib之类的一些差别。

* clang链接了gcc。

### 2-1

1.`-nostdinc`指的是不搜索默认路径头文件。

2.通过`-v`的查看可以得到

```
/usr/lib/gcc/x86_64-linux-gnu/5/include
 /usr/local/include
 /usr/lib/gcc/x86_64-linux-gnu/5/include-fixed
 /usr/include/x86_64-linux-gnu
 /usr/include
```

3.可以通过直接指定路径的方法。

```
gcc -E -nostdinc sample-io.c -o sample-io.i -I /usr/local/include -I /usr/include -I /usr/lib/gcc/x86_64-linux-gnu/5/include-fixed -I /usr/include/x86_64-linux-gnu -I /usr/lib/gcc/x86_64-linux-gnu/5/include
```

就可以了，因为这里我将其头文件的搜索路径都包括了进去，故而就可以编译通过。

### 2-2

1.`-nostdlib`指的是 不连接系统标准启动文件和标准库文件，只把指定的文件传递给连接器。

2.通过`gcc -v sample-io.c -Wl,--verbose`

```
/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/crt1.o
/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/crti.o 
/usr/lib/gcc/x86_64-linux-gnu/5/crtbegin.o
/usr/lib/gcc/x86_64-linux-gnu/5/libgcc.so 
/usr/lib/gcc/x86_64-linux-gnu/5/libgcc.a
/usr/lib/gcc/x86_64-linux-gnu/5/libgcc_s.so
/usr/lib/gcc/x86_64-linux-gnu/5/crtend.o
/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/crtn.o
/usr/lib/x86_64-linux-gnu/libc_nonshared.a
/lib/x86_64-linux-gnu/ld-linux-x86-64.so.2
```

3.通过运行了`gcc sample-io.c -v -o sample-io`以及`gcc -nostdlib sample-io.c -v -o sample-io`可以发现其在一些输出细节上有所不同，然后我将细节补入。

```
gcc -nostdlib /usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/crt1.o /usr/lib/x86_64-linux-gnu/crti.o /usr/lib/gcc/x86_64-linux-gnu/5/crtbegin.o sample-io.c  /usr/lib/gcc/x86_64-linux-gnu/5/crtend.o /usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/crtn.o -o sample-io -lc
```

就可以了，因为这里我通过`-l`添加了包含printf的lc，故而就可以编译通过。但开始的时候有报`warning: cannot find entry symbol _start; defaulting to 0000000000401000`这个问题。曾经尝试修改为`gcc -nostdlib sample-io.c -o sample-io -lc --entry main `，虽说`warning`消失，但是根本问题没有解决。

其中crt1.o包含程序的入口函数`_start` ，负责调用`__libc_start_main`，初始化libc，并且调用main函数 ，进入真正的程序主体。crti.o 包含`_init()`函数，该函数在main函数前运行。crtn.o 包含`_finit()`函数，该函数在main函数后运行。

### 3

#### -E -S -c -o -m32 -m64

##### -E

只激活预处理,这个不生成文件, 你需要把它重定向到一个输出文件里面。

##### -S

只激活预处理和编译，就是指把文件编译成为汇编代码。

##### -c

只激活预处理,编译,和汇编,也就是他只把程序做成obj文件。

##### -o

制定目标名称,。

##### -m32

编译成汇编代码的时候指定位数为32。

##### -m64

编译成汇编代码的时候指定位数为64。

##### 我编译的Makefile时候用到了

-o -S -E -m64

#### -m32以及-m64的汇编码不同

##### l q类

* `pushl`与`pushq`。

* `movl`与`movq`。

##### e r类

* `ebp`与`rbp`。

* `esp`与`rsp`。

##### .cfi类

* `.cfi_def_cfa_offset`后面跟随数据不一样。
* `.cfi_offset`后面跟随数据不一样。
* `.cfi_def_cfa_register`后面跟随数据不一样。
* 一个在结尾有`.cfi_restore`一个没有。
*  `.cfi_def_cfa`跟的值不一样。

##### 有无类

* `leave` 的有无。
* `popq %rbp`的有无。

#### 原因

##### l q类

`l`是双字的意思也就是32位，`q`是四边形表示64位，由于`ebp`与`esp`之类的均为32位，故而后面跟`l`，由于`rbp`以及`rsp`之类的都是属于64位故而使用`q`。

##### e r类

`bp`是基指指针，在 32 位系统中，`ebp`（Extended BP）寄存器存放的就是基指指针。在 64 位系统中，表现为`rbp`寄存器。`bp`指向栈帧的底部，一般称之为栈底指针。`sp`则是栈指针，`esp`与`rsp`的情况则同理。

##### .cfi类

###### cfi的定义

`CFI`全称是`Call Frame Instrctions`, 即调用框架指令。

###### cfa的定义

`CFA`全称为`Canonical Frame Address`是标准框架地址, 它被定义为在前一个调用框架中调用当前函数时的栈顶指针。

* 对于`.cfi_def_cfa_offset`第一种情况由于`push`进去的是`ebp`为32位，故而`esp`距离`CFA`为8，而另一种情况`push`进去的是64位的`rbp`,故而`rsp`距离`CFA`为16。
* 对于`.cfi_offset 5 -8`意思是将5号寄存器原先的值保存在离`CFA` -8的位置，意思就是将5号寄存器的值保存在栈底里面。而由于`rsp`距离`CFA`为16，而且后者存储的是6号寄存器的值，故而变为`.cfi_offset 6 -16`。
* `.cfi_def_cfa_register`后面所跟的值不一样，是因为之前所操作的值不一样。从这里开始, 使用`ebp`作为计算`CFA`的基址寄存器(前面用的是`esp`)
* 32位的在结尾通过`.cfi_restore`进行了5号寄存器的恢复。
* `.cfi_def_cfa`32位中是现在重新定义`CFA`, 它的值是第4号寄存器(`esp`)所指位置加4，就是取出旧的`ebp`的值，而64位中对应的不大一样故而是7号寄存器所指位置加8。

##### 有无类

* `leave`以及`popq %rbp`的有无。

64位中的如下操作和32位中的`leave`效果等价。

```
movl $0， %eax
popq %rbp
```

#### gcc与clang异同

* 汇编代码长度有所减少。
* gcc 在`cmpl`后面用的是`jl`，clang后面用的是`jge`。
* 它们对于flag的命名不一样。
* 其对于循环的实现更为精简。
* clang版本的汇编减少了局部存储空间的使用。
* clang版本的汇编没有提前开辟局部存储空间的习惯，故而在汇编最后恢复的时候减少了很多`pop`，在开头减少了很多`push`。
* clang版本减去了`cltq`这条缩写指令的使用。
* 在生成数组方面，clang显得更为精简，

##### clang 64位版本

```
        .text
        .file   "sort.c"
        .globl  sort                    # -- Begin function sort
        .p2align        4, 0x90
        .type   sort,@function
sort:                                   # @sort
        .cfi_startproc
# %bb.0:
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset %rbp, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register %rbp
        movq    %rdi, -8(%rbp)
        movl    %esi, -12(%rbp)
        movl    $0, -20(%rbp)
.LBB0_1:                                # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_3 Depth 2
        movl    -20(%rbp), %eax
        cmpl    -12(%rbp), %eax
        jge     .LBB0_10
# %bb.2:                                #   in Loop: Header=BB0_1 Depth=1
        movl    -20(%rbp), %eax
        addl    $1, %eax
        movl    %eax, -24(%rbp)
.LBB0_3:                                #   Parent Loop BB0_1 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
        movl    -24(%rbp), %eax
        cmpl    -12(%rbp), %eax
        jge     .LBB0_8
# %bb.4:                                #   in Loop: Header=BB0_3 Depth=2
        movq    -8(%rbp), %rax
        movslq  -20(%rbp), %rcx
        movl    (%rax,%rcx,4), %edx
        movq    -8(%rbp), %rax
        movslq  -24(%rbp), %rcx
        cmpl    (%rax,%rcx,4), %edx
        jle     .LBB0_6
# %bb.5:                                #   in Loop: Header=BB0_3 Depth=2
        movq    -8(%rbp), %rax
        movslq  -20(%rbp), %rcx
        movl    (%rax,%rcx,4), %edx
        movl    %edx, -16(%rbp)
        movq    -8(%rbp), %rax
        movslq  -24(%rbp), %rcx
        movl    (%rax,%rcx,4), %edx
        movq    -8(%rbp), %rax
        movslq  -20(%rbp), %rcx
        movl    %edx, (%rax,%rcx,4)
        movl    -16(%rbp), %edx
        movq    -8(%rbp), %rax
        movslq  -24(%rbp), %rcx
        movl    %edx, (%rax,%rcx,4)
.LBB0_6:                                #   in Loop: Header=BB0_3 Depth=2
        jmp     .LBB0_7
.LBB0_7:                                #   in Loop: Header=BB0_3 Depth=2
        movl    -24(%rbp), %eax
        addl    $1, %eax
        movl    %eax, -24(%rbp)
        jmp     .LBB0_3
.LBB0_8:                                #   in Loop: Header=BB0_1 Depth=1
        jmp     .LBB0_9
.LBB0_9:                                #   in Loop: Header=BB0_1 Depth=1
        movl    -20(%rbp), %eax
        addl    $1, %eax
        movl    %eax, -20(%rbp)
        jmp     .LBB0_1
.LBB0_10:
        popq    %rbp
        .cfi_def_cfa %rsp, 8
        retq
.Lfunc_end0:
        .size   sort, .Lfunc_end0-sort
        .cfi_endproc
                                        # -- End function
        .globl  main                    # -- Begin function main
        .p2align        4, 0x90
        .type   main,@function
main:                                   # @main
        .cfi_startproc
# %bb.0:
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset %rbp, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register %rbp
        subq    $48, %rsp
        movl    $0, -4(%rbp)
        movl    $.L.str, %edi
        xorl    %eax, %eax
                                        # kill: def $al killed $al killed $eax
        leaq    -8(%rbp), %rsi
        callq   __isoc99_scanf
        movl    -8(%rbp), %ecx
        movl    %ecx, %edx
        movq    %rsp, %rsi
        movq    %rsi, -16(%rbp)
        leaq    15(,%rdx,4), %rsi
        andq    $-16, %rsi
        movq    %rsp, %rdi
        subq    %rsi, %rdi
        movq    %rdi, %rsp
        movq    %rdx, -24(%rbp)
        movl    $0, -28(%rbp)
        movq    %rdi, -40(%rbp)         # 8-byte Spill
.LBB1_1:                                # =>This Inner Loop Header: Depth=1
        movl    -28(%rbp), %eax
        cmpl    -8(%rbp), %eax
        jge     .LBB1_4
# %bb.2:                                #   in Loop: Header=BB1_1 Depth=1
        movslq  -28(%rbp), %rax
        shlq    $2, %rax
        movq    -40(%rbp), %rcx         # 8-byte Reload
        addq    %rax, %rcx
        movabsq $.L.str, %rdi
        movq    %rcx, %rsi
        movb    $0, %al
        callq   __isoc99_scanf
# %bb.3:                                #   in Loop: Header=BB1_1 Depth=1
        movl    -28(%rbp), %eax
        addl    $1, %eax
        movl    %eax, -28(%rbp)
        jmp     .LBB1_1
.LBB1_4:
        movl    -8(%rbp), %esi
        movq    -40(%rbp), %rdi         # 8-byte Reload
        callq   sort
        movl    $0, -32(%rbp)
.LBB1_5:                                # =>This Inner Loop Header: Depth=1
        movl    -32(%rbp), %eax
        cmpl    -8(%rbp), %eax
        jge     .LBB1_8
# %bb.6:                                #   in Loop: Header=BB1_5 Depth=1
        movslq  -32(%rbp), %rax
        movq    -40(%rbp), %rcx         # 8-byte Reload
        movl    (%rcx,%rax,4), %esi
        movabsq $.L.str.1, %rdi
        movb    $0, %al
        callq   printf
# %bb.7:                                #   in Loop: Header=BB1_5 Depth=1
        movl    -32(%rbp), %eax
        addl    $1, %eax
        movl    %eax, -32(%rbp)
        jmp     .LBB1_5
.LBB1_8:
        movl    $0, -4(%rbp)
        movq    -16(%rbp), %rax
        movq    %rax, %rsp
        movl    -4(%rbp), %eax
        movq    %rbp, %rsp
        popq    %rbp
        .cfi_def_cfa %rsp, 8
        retq
.Lfunc_end1:
        .size   main, .Lfunc_end1-main
        .cfi_endproc
                                        # -- End function
        .type   .L.str,@object          # @.str
        .section        .rodata.str1.1,"aMS",@progbits,1
.L.str:
        .asciz  "%d"
        .size   .L.str, 3

        .type   .L.str.1,@object        # @.str.1
.L.str.1:
        .asciz  "%d "
        .size   .L.str.1, 4

        .ident  "clang version 10.0.1 "
        .section        ".note.GNU-stack","",@progbits
        .addrsig
        .addrsig_sym sort
        .addrsig_sym __isoc99_scanf
        .addrsig_sym printf
```



#### 注释(gcc 64位版本)

```
        .file   "sort.c"
        .text
        .globl  sort
        .type   sort, @function
sort:									# function sort	
.LFB0:
        .cfi_startproc					# sort begin
        pushq   %rbp					
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register 6
        movq    %rdi, -24(%rbp)			# -24(%rbp) = a 
        movl    %esi, -28(%rbp)			# -28(%rbp) = n
        movl    $0, -12(%rbp)			# for i in range(n) begin -12(%rbp) = i
        jmp     .L2	
.L6:
        movl    -12(%rbp), %eax			# for j in range(i, n) begin					
        addl    $1, %eax				# %eax = %eax + 1
        movl    %eax, -8(%rbp)			# -8(%rbp) = j
        jmp     .L3						
.L5:
        movl    -12(%rbp), %eax			# if (a[i] > a[j]) begin
        cltq
        leaq    0(,%rax,4), %rdx	    
        movq    -24(%rbp), %rax			
        addq    %rdx, %rax				# %rax = a + i
        movl    (%rax), %edx			# %edx = a[i]
        movl    -8(%rbp), %eax			# %eax = n
        cltq
        leaq    0(,%rax,4), %rcx	
        movq    -24(%rbp), %rax		
        addq    %rcx, %rax				# %rcx = a + j
        movl    (%rax), %eax			# %eax = a[j]
        cmpl    %eax, %edx				# if a[j] < a[i] 
        jle     .L4						# if (a[i] > a[j]) end
        movl    -12(%rbp), %eax			# temp = a[i] begin
        cltq
        leaq    0(,%rax,4), %rdx
        movq    -24(%rbp), %rax
        addq    %rdx, %rax
        movl    (%rax), %eax
        movl    %eax, -4(%rbp)			# temp = a[i] end
        movl    -12(%rbp), %eax			# a[i] = a[j] begin
        cltq
        leaq    0(,%rax,4), %rdx
        movq    -24(%rbp), %rax
        addq    %rax, %rdx
        movl    -8(%rbp), %eax
        cltq
        leaq    0(,%rax,4), %rcx
        movq    -24(%rbp), %rax
        addq    %rcx, %rax
        movl    (%rax), %eax
        movl    %eax, (%rdx)			# a[i] = a[j] end 
        movl    -8(%rbp), %eax			# a[j] = temp begin
        cltq
        leaq    0(,%rax,4), %rdx
        movq    -24(%rbp), %rax
        addq    %rax, %rdx
        movl    -4(%rbp), %eax
        movl    %eax, (%rdx)			# a[j] = temp end
.L4:
        addl    $1, -8(%rbp)			# j ++			
.L3:
        movl    -8(%rbp), %eax			# %eax = j
        cmpl    -28(%rbp), %eax			# if j < n => jump else continue
        jl      .L5						# for j in range(i, n) end
        addl    $1, -12(%rbp)			# i ++
.L2:
        movl    -12(%rbp), %eax			# %eax = i
        cmpl    -28(%rbp), %eax			# if i < n => jump else continue
        jl      .L6						# for i in range(n) end
        nop
        popq    %rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE0:
        .size   sort, .-sort
        .section        .rodata			# sort end
.LC0:
        .string "%d"
.LC1:
        .string "%d "
        .text
        .globl  main
        .type   main, @function
main:
.LFB1:
        .cfi_startproc					# main begin
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp              # 初始化栈帧指针
        .cfi_def_cfa_register 6
        pushq   %r15					# 分配局部存储空间
        pushq   %r14
        pushq   %r13
        pushq   %r12
        pushq   %rbx
        subq    $56, %rsp
        .cfi_offset 15, -24
        .cfi_offset 14, -32
        .cfi_offset 13, -40
        .cfi_offset 12, -48
        .cfi_offset 3, -56
        movq    %fs:40, %rax
        movq    %rax, -56(%rbp)
        xorl    %eax, %eax
        movq    %rsp, %rax
        movq    %rax, %rbx 		
        leaq    -84(%rbp), %rax			# scanf begin
        movq    %rax, %rsi
        movl    $.LC0, %edi
        movl    $0, %eax
        call    __isoc99_scanf			# scanf n end -84(%rbp) = n
        movl    -84(%rbp), %eax			# generate int a[n] begin
        movslq  %eax, %rdx				# %rdx = a
        subq    $1, %rdx				# %rdx = a - 1
        movq    %rdx, -72(%rbp)			
        movslq  %eax, %rdx				# %rdx = a
        movq    %rdx, %r14								
        movl    $0, %r15d
        movslq  %eax, %rdx
        movq    %rdx, %r12
        movl    $0, %r13d
        cltq
        salq    $2, %rax
        leaq    3(%rax), %rdx
        movl    $16, %eax
        subq    $1, %rax
        addq    %rdx, %rax
        movl    $16, %ecx
        movl    $0, %edx
        divq    %rcx
        imulq   $16, %rax, %rax
        subq    %rax, %rsp
        movq    %rsp, %rax
        addq    $3, %rax
        shrq    $2, %rax
        salq    $2, %rax
        movq    %rax, -64(%rbp)			# generate int a[n] end	-64(%rbp) = a
        movl    $0, -80(%rbp)			# for begin
        jmp     .L8					
.L9:
        movl    -80(%rbp), %eax			# scanf a[i] begin
        cltq
        leaq    0(,%rax,4), %rdx
        movq    -64(%rbp), %rax			
        addq    %rdx, %rax
        movq    %rax, %rsi
        movl    $.LC0, %edi
        movl    $0, %eax
        call    __isoc99_scanf			# scanf a[i] end
        addl    $1, -80(%rbp)			# i ++
.L8:
        movl    -84(%rbp), %eax			# %eax = n
        cmpl    %eax, -80(%rbp)			# if i < n jmp else continue
        jl      .L9						# for end
        movl    -84(%rbp), %edx			# sort(a,n) begin
        movq    -64(%rbp), %rax
        movl    %edx, %esi
        movq    %rax, %rdi
        call    sort					# sort(a,n) end
        movl    $0, -76(%rbp)			# for begin
        jmp     .L10
.L11:
        movq    -64(%rbp), %rax			# printf a[i] begin
        movl    -76(%rbp), %edx
        movslq  %edx, %rdx
        movl    (%rax,%rdx,4), %eax
        movl    %eax, %esi
        movl    $.LC1, %edi
        movl    $0, %eax
        call    printf					# printf a[i] end
        addl    $1, -76(%rbp)
.L10:
        movl    -84(%rbp), %eax
        cmpl    %eax, -76(%rbp)			
        jl      .L11					# for end
        movl    $0, %eax				# return begin
        movq    %rbx, %rsp				# return end
        movq    -56(%rbp), %rcx
        xorq    %fs:40, %rcx
        je      .L13
        call    __stack_chk_fail
.L13:
        leaq    -40(%rbp), %rsp
        popq    %rbx					# 释放局部存储空间
        popq    %r12
        popq    %r13
        popq    %r14
        popq    %r15
        popq    %rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE1:
        .size   main, .-main
        .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609"
        .section        .note.GNU-stack,"",@progbits
```

