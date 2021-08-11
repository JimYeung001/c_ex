#include <stdio.h>
#include <string.h>

int main(){
    char myString[] = "my string is about 40 characters!!!";

    char src[50];
    char dest[10];

    // strcpy(dest, myString);
    strncpy(dest, myString, sizeof(dest)-1);
    printf("the copied string is : %s\n", dest);
    printf("the length of this string length is : %ld\n", strlen(dest));
    

    char text[] = "Every dog has his day!";
    char word[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text, word);
    printf("foudn work dog: %s\n", pFound);

    char *token = NULL;
    token = strtok(myString, " ");
    printf("Pointer size: %ld\n", sizeof(token));

    while (token != NULL)
    {
        printf("token: %s\n", token);
        printf("point: %p\n", (void*)token);
        token = strtok(NULL, " ");
    }

    printf("this is demo for git hub code repository!\n");
    
    
    return 0;
}