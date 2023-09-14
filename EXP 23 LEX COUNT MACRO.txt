%{
int nmacro, nheader;
%}
%%
^#define { nmacro++; }
^#include { nheader++; }
.|\n {  }
%%
int yywrap(void) {
return 1;
}
int main(int argc, char *argv[]) {
yyin = fopen(argv[1], "r");
yylex();
printf("Number of macros defined = %d\n", nmacro);
printf("Number of header files included = %d\n", nheader);
fclose(yyin);
}

Input Source Program: (sample.c)
#define PI 3.14   
#include<stdio.h> 
#include<conio.h>
 void main()
{
int a,b,c = 30;
printf("hello");
}
