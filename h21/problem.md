# problem

## 1（考察C中数据的存储）

### question

```
#include <stdio.h>

int main(){
	char str[20] = "Hello!";
	char *p = str;
	return 0;
}
```

请给出sizeof(str)和sizeof(p)。(64位gcc编译环境)

### answer

20      8（这个在32位编译环境下会是4）

## 2（考察正规式的构造能力）

### question

请给出满足以下描述的正规表达式。

* 可以被3整除的二进制数。

### answer

$$
0^{*}(1(0(1)^{*}0)^{*}1)0^{*}
$$

