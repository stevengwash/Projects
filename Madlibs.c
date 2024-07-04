#include <stdio.h>
#include <string.h>
int main()
{
    char A[30] = "exclamation";
    char B[30] = "adverb";
    char C[30] = "verb";
    char D[30] = "noun";
    char E[30] = "adjective";
    printf("input words in the following category\n1(exclamation)\n ");

    scanf("%s", A);
    printf("2(adverb)\n");
    scanf("%s", B);
    printf(" 3(verb)\n ");
    scanf("%s", C);
    printf(" 4(noun)\n");
    scanf("%s", D);
    printf("5(adjective)\n");
    scanf("%s", E);

    printf("%s! he said  ", A);
    printf("%s as he ", B);
    printf("%s into his covertible ", C);
    printf("%s  and drove off with his ", D);
    printf("%s wife. \n", E);
    /*
    __'A'_! he said __'B'_ as he __'C'_ into his convertible __'D'_ and drove off with his __'E'_ wife.
    //filling in the blank spaces
    */
}