# labLexer-1

## 问题

* 第一次没有很好地处理<<这种情况
* 第一次对于行结束的处理不太到位

## 分析

在看到了老师给的提示图后，我意识到这是一个状态机的问题。

## 设计

我设计了一个状态机，设置了8个state，虽说最后发现有用的state只有三个。于是到最后，状态机的形式大致如下。
'''
switch (state){
    case 10000:
        if (lab_str[i] == '<'){
            state = 10001;
            if (other_index){
                printf ("(other,%d)",other_index);
            }
            other_index = 0;
        }
        else if (lab_str[i] == '='){
            state = 10000;
            if (other_index){
                printf ("(other,%d)",other_index);
            }
            other_index = 0;
            printf ("(relop,=)");
        }
        else if (lab_str[i] == '>'){
            state = 10006;
            if (other_index){
                printf ("(other,%d)",other_index);
            }
            other_index = 0;
        }
        else {
            state = 10000;
            other_index ++;
        }
    break;
    case 10001:
        if (lab_str[i] == '='){
            state = 10000;
            printf("(relop,<=)");
        }
        else if (lab_str[i] == '>'){
            state = 10000;
            printf("(relop,<>)");
        }
        else if (lab_str[i] == '<'){
            printf("(relop,<)");
            state = 10001;
        }
        else {
            printf("(relop,<)");
            state = 10000;
            other_index ++;
        }
    break;
    case 10006:
        if (lab_str[i] == '='){
            state = 10000;
            printf("(relop,>=)");
        }
        else if (lab_str[i] == '<'){
            printf("(relop,>)");
            state = 10001;
        }
        else if (lab_str[i] == '>'){
            printf("(relop,>)");
            state = 10006;
        }
        else{
            printf("(relop,>)");
            state = 10000;
            other_index ++;
        }
    break;
    default:break;
};
'''

