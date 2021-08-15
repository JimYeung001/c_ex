#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * An function to sum all element in any Integer Array 
 */
int arraySum(int intArray[], const int n){
    int sum = 0;
    int *pt = NULL;
    //Defined an pointer which is constant pointing to the last element of the array, and this pointer can not change the memory address which pointing to.
    int *const ptArrayEnd = intArray + n;

    for(pt = intArray; pt < ptArrayEnd; ++pt){
        sum += *pt;
    }

    return sum;
}

/**
 * Another version of sum of the array element using ponter 
 */
int arraySumWithPonter(int *intArray, const int sizeOfArray){
    int sum = 0;
    int *const ptArrayEnd = intArray + sizeOfArray;
    for(; intArray < ptArrayEnd; ++intArray){
        sum += *intArray;
    }
    return sum;
}

void copyString(char *to, char *from){
    if(from){
        while (from && *from)
        {
            *to++ = *from++;
        }
        *to = '\0';
    }
}

/**
 * The main enter point of the application
 */
int main(){

/////////////////  pointer /////////////////
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

    int *pt = malloc(sizeof(int)); 
    
    if(pt){
        *pt = 5;
        printf("Uninitialized ponter : %d\n", *pt);
    }

    ///////////////// Void pointer /////////////////
    int i = 10;
    float f = 2.34f;
    char ch = 'K';

    void *vpt = NULL;

    vpt = &i;
    printf("Value of i = %d\n", *(int*)vpt);

    vpt = &f;
    printf("Value of f = %f\n", *(float*)vpt);

    vpt = &ch;
    printf("Value of ch = %c\n", *(char*)vpt);


    ///////////////// pointer with Array /////////////////
    // array name is not only as name but also as an pointer, which is pointing to the first element of the array
    // int *ptInt = int intArray[i], ptInt++ == intArray[1]
    int values[] = {2,4, 5,8, 9, 1, -5};
    printf("///////////////// pointer with Array ///////////////// \n");
    //Dynamically get sie of array, get whole size of array and devide one size of element
    int sizeOfValues = sizeof(values)/sizeof(values[0]);

    //call the methond at the beginning of the application to sum the element of the values array
    int result = arraySum(values, sizeOfValues);
    printf("Sum of the array Values = %d\n", result);

    //Same function using pointer 
    result = arraySumWithPonter(values, sizeOfValues);
    printf("Sum of the array Values using pointer = %d\n\n", result);
    
    char multiple[] = "a string";
    char *ptr = multiple;

    for(int i=0; i< strlen(multiple);++i){
        printf("multiple[%d] = %c ", i, multiple[i]);
        printf(" *(pt+%d) = %c ", i, *(ptr+i));
        printf(" &multiple[%d] = %p ", i, &multiple[i]);
        printf(" pt+%d = %p\n", i, ptr+i);
        
    }


    printf("\n ----------------- ** -------------------\n");
    long longArray[] = {15L, 25L, 35L, 45L};
    long *ptL = longArray;

    for(int i=0; i<sizeof(longArray)/sizeof(longArray[0]); i++){
        // printf("array memory address: %p ", &longArray[i]);
        printf("address p+%d(&longArray[%d]: ", i, i);
        printf(" %llu   *(p+%d) value: %ld\n", (unsigned long long)(ptL+i), i, *(ptL+i));
    }

    printf("\nType long occupies: %ld bytes\n", sizeof(unsigned long long));

    printf("\nCopy string to another string\n");
    char *to = NULL;
    char *from = "this is from string!";
    while (to && *to)
    {
        printf("%c", *to);
    }
    
    int stringLen = 0;
    while (from && *from)
    {
        stringLen++;
        from++;
    }
    
    from = from - stringLen;
    char newString[stringLen+1];
    to = newString;
    copyString(to, from);
    printf("\nAfter copy string, now to string is : ");
    while (to && *to)
    {
        printf("%c", *to);
        to++;
    }


    printf("\n///////////////// pointer with Array ///////////////// \n\n");


    return 0;
}


