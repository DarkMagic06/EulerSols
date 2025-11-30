#include<stdio.h>

int main(void) {
    long long upper_bound = 10000000, sum = 0;
    for(long long i = 1; i < upper_bound; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum +=i;
        }
    }
    printf("The sum is: %lld\n", sum);
    return 0;
}