#include <stdio.h>
#include <string.h>

// Define the production rules of the grammar
char productionRules[4][10] = {
    "E->TA",
    "A->+TA",
    "A->e",
    "T->i"
};

// Define the terminals and non-terminals
char terminals[] = {'+', 'i', '$'};
char nonTerminals[] = {'E', 'A', 'T'};

// Define the predictive parsing table
char parsingTable[3][3][10];

int main() {
    // Initialize the parsing table
    strcpy(parsingTable[0][0], "E->TA");
    strcpy(parsingTable[0][1], "");
    strcpy(parsingTable[0][2], "");

    strcpy(parsingTable[1][0], "");
    strcpy(parsingTable[1][1], "A->+TA");
    strcpy(parsingTable[1][2], "A->e");

    strcpy(parsingTable[2][0], "T->i");
    strcpy(parsingTable[2][1], "");
    strcpy(parsingTable[2][2], "");

    // Print the predictive parsing table
    printf("Predictive Parsing Table:\n");
    printf("    ");
    for (int j = 0; j < 3; j++) {
        printf("%c\t", terminals[j]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%c   ", nonTerminals[i]);
        for (int j = 0; j < 3; j++) {
            if (strlen(parsingTable[i][j]) > 0) {
                printf("%s\t", parsingTable[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}
