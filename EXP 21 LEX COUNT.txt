%{
int nchar, nword, nline;
%}
%%
\n { nline++; nchar++; }
[^ \t\n]+ { nword++, nchar += yyleng; }
. { nchar++; }
%%
int yywrap(void) {
return 1;
}
int main(int argc, char *argv[]) {
yyin = fopen(argv[1], "r");
yylex();
printf("Number of characters = %d\n", nchar);
printf("Number of words = %d\n", nword);
printf("Number of lines = %d\n", nline);
fclose(yyin);
}


      Input Source Program: (sample.c)
 #include <stdio.h>
 int main() 
 {    
      int number1, number2, sum;
 printf("Enter two integers: ");
 scanf("%d %d", &number1, &number2);
 sum = number1 + number2;      
      printf("%d + %d = %d", number1, number2, sum);
  return 0;
 }
