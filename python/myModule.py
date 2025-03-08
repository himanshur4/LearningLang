def fac(n):
    if n == 0:
         return 1
    else:
         return n*fac(n-1)


def myFact(num):
    l1=[]
    for i in range(num):
        l1.append(fac(i))
    return l1
def issqrt(x):
    sr=x**(1/2)
    return sr.is_integer()
  
def myPsq(num):
    l2=[]
    for i in range(num):
        if(issqrt(i)==1):
            l2.append(i)
        else:
            continue
    return l2
