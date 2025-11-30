#include<stdio.h>

long long main(void) {
  long long upper_bound = 1000, sum = 0;
  
  sum += (3*((upper_bound-1)/3)*(((upper_bound-1)/3)+1)/2) + (5*((upper_bound-1)/5)*(((upper_bound-1)/5)+1)/2) - (15*((upper_bound-1)/15)*(((upper_bound-1)/15)+1)/2);
  
  printf("The sum of multiples of 3 and 5 between 1 and %lld is: %lld", upper_bound-1, sum); 
}
