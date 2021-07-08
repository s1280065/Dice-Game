#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Random(int min, int max);

int main(){

    int i, num, total = 0;
    srand((unsigned int)time(NULL));

    printf(" Rolling the dice...\n");
    for(i = 0; i < 2; i++){
        num = Random(1, 6);
        printf("Dice %d: %d\n", i + 1, num);
        total += num;
    }
    printf("Total value: %d\n", total);
}

int Random(int min, int max){
    return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}