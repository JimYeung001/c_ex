#include <stdio.h>
#include <stdlib.h>

int main(){

    long num1 = 0L;
    long num2 = 0L;
    long *pNum = NULL;

    pNum = &num1;
    *pNum = 2L;
    ++num2;
    num2 += *pNum;
    pNum = &num2;

    ++*pNum;

    printf("num1: %ld, num2 : %ld, *pNum : %ld, *pNum + num2 : %ld\n", num1, num2, *pNum, *pNum + num2);
    
}