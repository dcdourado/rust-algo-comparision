import time

def fib(n):
  if n < 2:
    return n
  
  return fib(n - 1) + fib(n - 2)

startMs = int(round(time.time() * 1000))
fib(40)
endMs = int(round(time.time() * 1000))

print (endMs - startMs)