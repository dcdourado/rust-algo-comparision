function fib(n) {
  if (n < 2) {
    return n;
  }

  return fib(n - 1) + fib(n - 2);
}

const startMs = new Date();
fib(40);
const endMs = new Date();

console.log(`EXECUTION TIME: ${endMs - startMs} ms`);
