1. bison -yd bison_yacc.y
2. flex flex_lex.l
3. gcc -lm y.tab.c -std=c99 -w
4. type example.c | .\a  
