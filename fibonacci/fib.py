import time

def fib(n):
  if n < 2:
    return 1
  
  return fib(n - 1) + fib(n - 2)

def getNow():
  return int(round(time.time() * 1000))

startMs = getNow()
fib(40)
endMs = getNow()

print (endMs - startMs)