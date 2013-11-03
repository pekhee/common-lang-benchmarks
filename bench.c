#include <stdio.h>

int main() {
  int numberOfIterations = 10000000; // 10M
  long long int sum = 0 ;
  int i = 0;
  while(i< numberOfIterations) {
    sum = sum + i;
    i++;
  }
  printf("%lld\n", sum);
  return 0;
}
