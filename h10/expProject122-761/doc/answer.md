# 1-1

## main.cpp

### part1

```
demoDriver driver;
SyntaxTreePrinter printer;
ErrorReporter reporter(std::cerr);
```

此处申明了三个类，分别用于调用demoDriver.cpp、SyntaxTreePrinter.cpp以及ErrorReporter.cpp。

### part2

```
    std::string filename = "testcase.sy";
    for (int i = 1; i < argc; ++i) {
        if (argv[i] == std::string("-h") || argv[i] == std::string("--help")) {
        	...
        }
        else if (argv[i] == std::string("-p") || argv[i] == std::string("--trace_parsing"))
            ...
        else if (argv[i] == std::string("-s") || argv[i] == std::string("--trace_scanning"))
            ...
        else if (argv[i] == std::string("-emit-ast"))
            ...
        else {
            filename = argv[i];
        }
    }
```

其中定义了调用demo时的输入格式，其中最后一个输入表示着文件地址，其余的选项具体含义如下：

* -h：输出help。
* -p：对代码进行解析。
* -s：对代码进行扫描。
* -emit-ast：输出AST。

### part3

```
auto root = driver.parse(filename);
```

开始通过调用demoDriver类中的parse函数来分析文件。

### part4

```
if(print_ast)
	root->accept(printer);
```

如果存在输入-emit-ast，那么就会将AST输出出来。

## demoDriver.h

其中主要是申明了demoDriver这个类到最后它会生成一棵语法树。

### part1

```
demoFlexLexer lexer;
```

调用了demoFlexLexer这个类，其实也就是调用了flex。

### part2

```
void scan_begin();
void scan_end();
bool trace_scanning;
```

这几个函数主要用于支撑scanner的实现。

### part3

```
 SyntaxTree::Node* parse(const std::string& f);
```

分析函数，会生成一棵分析树，从而返回一个根节点。

### part4

```
std::string file;
bool trace_parsing;
```

`file`就是文件路径，而`trace_parsing`则是一个控制是否会进行trace-parsing的布尔值。

### part5

```
void error(const yy::location& l, const std::string& m);
void error(const std::string& m);
```

用来支撑错误分析。

### part6

```
SyntaxTree::Node* root = nullptr;
```

用来定义语法树的根并且对其进行初始化。

## demoDriver.cpp

该代码主要是对于demoDriver.h中的一些定义的函数进行了一下实现。

### SyntaxTree::Node* demoDriver::parse(const std::string &f)；

```
SyntaxTree::Node* demoDriver::parse(const std::string &f)
{
    file = f;
    
    // lexer begin
    scan_begin();
    yy::demoParser parser(*this);
    parser.set_debug_level(trace_parsing);
    // parser begin
    parser.parse();
    // lexer end
    scan_end();

    return this->root;
}
```

其中是进行了扫描树，分析树以及返回树这几步。

### void demoDriver::error(const yy::location& l, const std::string& m)；&& void demoDriver::error(const std::string& m)；

```
void demoDriver::error(const yy::location& l, const std::string& m)
{
    std::cerr << l << ": " << m << std::endl;
}

void demoDriver::error(const std::string& m)
{
    std::cerr << m << std::endl;
}
```

主要是支撑了报错机制。

### void demoDriver::scan_begin();&&void demoDriver::scan_end();

```
void demoDriver::scan_begin()
{
    lexer.set_debug(trace_scanning);

    // Try to open the file:
    instream.open(file);

    if(instream.good()) {
        lexer.switch_streams(&instream, 0);
    }
    else if(file == "-") {
        lexer.switch_streams(&std::cin, 0);
    }
    else {
        error("Cannot open file '" + file + "'.");
        exit(EXIT_FAILURE);
    }
}

void demoDriver::scan_end()
{
    instream.close();
}
```

用来支撑scanner的实现。

## 1-2

改动如下：

```
FuncDef: VOID IDENTIFIER LPARENTHESE RPARENTHESE Block{
    $$ = new SyntaxTree::FuncDef();
    $$->ret_type = SyntaxTree::Type::VOID;
    $$->name = $2;
    std::string iden = $$ -> name;
    if (iden != "main"){
      std::cout << "Error in scanner!" << '\n'; exit(1);
    }
    else if (main_index > 1){
      std::cout << "Error in scanner!" << '\n'; exit(1);
    }
    else {
      main_index = main_index + 1;
    }
    $$->body = SyntaxTree::Ptr<SyntaxTree::BlockStmt>($5);
    $$->loc = @$;
  }
  ;
```

我新增了1个全局的变量：

```
int main_index = 0;//记录main函数的个数
```

就是对识别出来的函数定义进行判别，若其中的标识符为`main`则会开始计数，然后对于它和标识符`iden`的共同判别来实现`main`的存在性和唯一性。
