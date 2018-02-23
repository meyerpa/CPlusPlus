def GCD(x,y):
   while x != y:
      if x > y:
         x = x-y
      else:
         y = y-x
   return x

m = int(input('enter an int: '))
n = int(input('enter an int: '))
print()
print ('the GCD of',m,'and',n,'is',GCD(m,n))
