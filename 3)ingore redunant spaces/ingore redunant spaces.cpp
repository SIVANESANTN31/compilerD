#include<stdio.h>
#include<ctype.h>
#define SIZE 100
int main()
{
    char inputStr[SIZE];
    int i, j;
    char resultStr[SIZE] = {0};
    printf("Enter a string : ");
    gets(inputStr);
    for(i=0, j=0; inputStr[i]; i++)
    {
        if(isspace(inputStr[i]) && isspace(inputStr[i-1]))
        {
            continue;
        }
        resultStr[j++] = inputStr[i];
    }
    resultStr[j] = '\0';
    printf("Before Removing :%s(Actual string)\n", inputStr);
    printf("After  Removing :%s(Resultant string)\n", resultStr);
 
    return 0;
}
