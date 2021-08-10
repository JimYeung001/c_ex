#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int minutes;

    if(argc == 2){
        printf("The argument supplied argv[0]is:%s, the arg[1] is:%s\n", argv[0], argv[1]);
    } else if(argc > 2) {
        printf("Too many arguments supplied.\n");
    }else{
        printf("One argument expected.\n");
    }
    bool x = true;
    printf("value : %i\n", x);

    printf("Size of int: %ld\n", sizeof(*argv));

    printf("Please end minutes : ");
    scanf("%d", &minutes);

    int hour = minutes/60;
    printf("\n%d equal to %d hours\n", minutes, hour);

    time_t t;
    srand((unsigned) time(&t));

    printf("time:%ld\n", t);
    return 0;
}