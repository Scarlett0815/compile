#include <stdio.h>
#include <string.h>

int state0 = 10000;
int state1 = 10001;
int state2 = 10002;
int state3 = 10003;
int state4 = 10004;
int state5 = 10005;
int state6 = 10006;
int state7 = 10007;
int state8 = 10008;

int state = 10000;
int other_index = 0;
int length;
void getsym(){
    char lab_str[200];
    char character;
    while ((character = getchar()) != '\n'){
        lab_str[length] = character;
        length ++;
    }
    lab_str[length] = '\n';
    length ++;
    for (int i = 0;i < length;i ++){
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
    }
    if (other_index > 1){
        printf("(other,%d)",other_index - 1);
    }
}
int main(){
    getsym();
    return 0;
}