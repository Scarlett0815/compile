lexer grammar labLexer;

tokens {
    NE,
    EQ,
    GT,
    GE,
    LT,
    LE,
    OTHER
}

NE: '<>';
GE: '>=';
LE: '<=';
EQ: '=';
LT: '<';
GT: '>';
OTHER: ~[<>=]+;
