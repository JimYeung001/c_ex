#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 10;
    int *pNum = NULL;
    pNum = &num;

    *pNum +=25;

    printf("Increase num: %d\n", num);
    printf("Increase num: %d\n", *pNum);
    
}