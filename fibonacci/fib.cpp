#include <chrono>
#include <iostream>

int fibonacci(int n) {
  if (n < 2) {
    return 1;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  std::int64_t startMs = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
  fibonacci(40);
  std::int64_t endMs = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

  std::cout << "EXECUTION TIME: " << (endMs - startMs) << " ms\n";
  return 0;
}