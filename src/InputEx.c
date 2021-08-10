#include <stdio.h>

int main(int argc, char *argv[] ){

    int i;
    char str[100];
    printf("Please enter values : ");
    scanf("%d %s", &i, str);
    printf("\nYour endter: %d :: %s\n", i, str);
    return 0;
}