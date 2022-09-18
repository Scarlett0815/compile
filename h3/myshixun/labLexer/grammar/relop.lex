%{
    int num=0;
    int state = 0;

%}

%%

"<"  {
    if (num) printf("(other,%d)",num);
    num = 0;
    if (state == 0) state = 1;
    else if (state == 1) {state = 1;printf("(relop,<)");}
    else if (state == 6) {state = 1;printf("(relop,>)");}
}

">"  {
    if (num) printf("(other,%d)",num);
    num = 0;
    if (state == 0) state = 6;
    else if (state == 1){state = 0;printf ("(relop,<>)");}
    else if (state == 6){state = 6;printf("(relop,>)");}
}

"=" {
    if (num) printf("(other,%d)",num);
    num = 0;
    if (state == 0){state = 0; printf("(relop,=)");}
    else if (state == 1){state = 0; printf ("(relop,<=)");}
    else if (state == 6){state =0; printf("(relop,>=)");}
}
"\n" {
    if (num != 0) {printf ("(other,%d)",num);num = 0;}
    if (state == 1){
        printf("(relop,<)");
    }
    if (state == 6){
        printf ("(relop,>)");
    }
    state = 0;
}

[^">""<""=""\n"] {
    if (state == 1){
        printf("(relop,<)");
    }
    if (state == 6){
        printf("(relop,>)");
    }
    state = 0;
    num ++;
}

%%
int getsym()
{
    yylex();
	return 1;
}