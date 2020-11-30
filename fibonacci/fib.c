#include <stdio.h>
#include <time.h>
#include <math.h>

long millis(){
    struct timespec _t;
    clock_gettime(CLOCK_REALTIME, &_t);
    return _t.tv_sec*1000 + lround(_t.tv_nsec/1.0e6);
}

int fibonacci(int n) {
  if (n < 2) {
    return n;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  long startMs = millis();
  fibonacci(40);
  long endMs = millis();

  printf("EXECUTION TIME: %lu ms\n", (endMs - startMs));
  return 0;
}
