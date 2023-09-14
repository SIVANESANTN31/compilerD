#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char op[5];
    char arg1[10];
    char arg2[10];
} Triple;
Triple createTriple(const char *op, const char *arg1, const char *arg2) {
    Triple trip;
    strcpy(trip.op, op);
    strcpy(trip.arg1, arg1);
    strcpy(trip.arg2, arg2);
    return trip;
}
int main() {
    Triple triples[100];  
    int tripleCount = 0;
    const char *expr1 = "a + b";
    const char *expr2 = "c - d";
    const char *expr3 = "e * f";
    const char *expr4 = "g / h";
    char op[2], arg1[5], arg2[5];
    sscanf(expr1, "%s %s %s", arg1, op, arg2);
    triples[tripleCount++] = createTriple(op, arg1, arg2);
    sscanf(expr2, "%s %s %s", arg1, op, arg2);
    triples[tripleCount++] = createTriple(op, arg1, arg2);
    sscanf(expr3, "%s %s %s", arg1, op, arg2);
    triples[tripleCount++] = createTriple(op, arg1, arg2);
    sscanf(expr4, "%s %s %s", arg1, op, arg2);
    triples[tripleCount++] = createTriple(op, arg1, arg2);
    printf("Generated Triples:\n");
    for (int i = 0; i < tripleCount; i++) {
        printf("(%s, %s, %s)\n", triples[i].op, triples[i].arg1, triples[i].arg2);
    }
    return 0;
}
