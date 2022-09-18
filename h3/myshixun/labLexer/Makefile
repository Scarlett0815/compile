CC       = gcc -g
LEX      = flex -i -I 
INC      = -I../pl0/include 

all: expr exprlex

expr: src/labLexer-2.c
	$(CC)  $(INC) src/labLexer-2.c -o expr -ll

exprlex:   grammar/relop.lex
	$(LEX)  grammar/relop.lex
	$(CC)  $(INC) -DLEXERGEN lex.yy.c src/labLexer-2.c -o exprlex -ll



clean:
	rm -f *.BAK *.o core *~* *.a 
	rm -f *.tab.h *.tab.c
	rm -f expr *.out