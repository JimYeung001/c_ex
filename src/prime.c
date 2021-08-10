#include <stdio.h>
#include <stdbool.h>

int main(){
    int num = 200;
    printf("all prime number are between 0 - %d : \n", num);
    for(int i = 2; i < num; i++){
        bool isPrime = true;
        for(int p = 2; p< i;p++){
            if(i%p == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            printf("%d\t", i);
        }

    }
    printf("\n\n");
}