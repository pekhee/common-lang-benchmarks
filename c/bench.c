#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <time.h>

uintmax_t time_now() {
  clock_t uptime = clock() / (CLOCKS_PER_SEC / 1000);
  return (uintmax_t) uptime;
}

int main() {
  int numberOfIterations = 10000000; // 10M
  long long int sum = 0 ;
  // Iterator
  int i = 0;
  // Checkpoints for measuring elapsed time
  uintmax_t currentTime = 0;
  uintmax_t completionTime = 0;

  currentTime = time_now();
  while(i< numberOfIterations) {
    sum = sum + i;
    i++;
  }
  completionTime = time_now();

  puts("C:    Done");
  printf("%lld\n", sum);
  printf("%d\n", (int) (completionTime - currentTime));
  return 0;
}

