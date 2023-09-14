#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a quadruple
typedef struct {
    char op[5];
    char arg1[10];
    char arg2[10];
    char result[10];
} Quadruple;
Quadruple createQuadruple(const char *op, const char *arg1, const char *arg2, const char *result) {
    Quadruple quad;
    strcpy(quad.op, op);
    strcpy(quad.arg1, arg1);
    strcpy(quad.arg2, arg2);
    strcpy(quad.result, result);
    return quad;
}
int main() {
    Quadruple quadruples[100];  
    int quadCount = 0;
    const char *expr1 = "a + b";
    const char *expr2 = "c - d";
    const char *expr3 = "e * f";
    const char *expr4 = "g / h";
    char op[2], arg1[5], arg2[5], result[5];
    sscanf(expr1, "%s %s %s", arg1, op, arg2);
    sprintf(result, "t%d", quadCount++);
    quadruples[quadCount] = createQuadruple(op, arg1, arg2, result);
    sscanf(expr2, "%s %s %s", arg1, op, arg2);
    sprintf(result, "t%d", quadCount++);
    quadruples[quadCount] = createQuadruple(op, arg1, arg2, result);
    sscanf(expr3, "%s %s %s", arg1, op, arg2);
    sprintf(result, "t%d", quadCount++);
    quadruples[quadCount] = createQuadruple(op, arg1, arg2, result);
    sscanf(expr4, "%s %s %s", arg1, op, arg2);
    sprintf(result, "t%d", quadCount++);
    quadruples[quadCount] = createQuadruple(op, arg1, arg2, result);
    printf("Generated Quadruples:\n");
    for (int i = 0; i < quadCount; i++) {
        printf("(%s, %s, %s, %s)\n", quadruples[i].op, quadruples[i].arg1, quadruples[i].arg2, quadruples[i].result);
    }
    return 0;
}
