#include <iostream>
#include <stdio.h>
#include <cstring>

#include "antlr4-runtime.h"
#include "labLexer.h"

using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[])
{
    char lab_str[200];
    char character;
    int length = 0;
    memset(lab_str,0,200);
    while ((character = getchar()) != '\n'){
        lab_str[length] = character;
        length ++;
    }
    string s(lab_str);
    ANTLRInputStream input(s);
    labLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    int index;
    for (auto token : tokens.getTokens()) {
        string s1 = token->toString();
        for (int i = 0;i < s1.size();i++){
            if (s1[i] == '=') {index = i + 2;break;}
        }
        int index2 = 0;
        int flag = 0;
        char s3[] = "<EOF>";
        memset(s3,0,sizeof(s3));
        for (int i = index;i < s1.size();i ++){
            if (s1[i] == '\''){break;}
            else if (s1[i] != '>' && s1[i] != '<' && s1[i] != '='){
                index2 ++;
                s3[index2 - 1] = s1[i];
                flag = 1;
            }
            else{
                index2 ++;
                s3[index2 - 1] = s1[i];
            }
        }
        if (!flag){
            std::cout <<"(relop,"<<s3<<")";
        }
        else if (strcmp(s3,"<EOF>") != 0){
            std::cout <<"(other,"<<index2<<")";
        }
    }
    return 0;
}