#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000 
#define SIDES 6     

int main() {
    int results[13] = { 0 }; 
    int die1, die2, sum;

       srand(time(NULL));

    for (int i = 0; i < ROLLS; i++) {
        die1 = rand() % SIDES + 1; 
        die2 = rand() % SIDES + 1; 
        sum = die1 + die2;         
        results[sum]++;          
    }

    printf("點數和\t出現次數\t理論機率\t實際機率\n");
    for (int i = 2; i <= 12; i++) {
        double theoretical_prob = (i <= 7 ?i - 1 : 13 - i) / 36.0; 
        double actual_prob = (double)results[i] / ROLLS;            
        printf("%d\t%d\t\t%.4f\t\t%.4f\n", i, results[i], theoretical_prob, actual_prob);
    }

    return 0;
}
