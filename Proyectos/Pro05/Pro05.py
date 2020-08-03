from sys import stdin
def gcd(a,b):
    while(b): 
       a, b = b, a % b
    print(a)
    return a
def mod(a,b):
    r = 0
    d = 0
    while a > 0:
        a -= b
        d += 1
    if a == 0:
        r = 0
    else:
        a += b
        d -= 1
        r = a
    return r
    
def main():
    Bel = int(stdin.readline().strip())
    Ing = int(stdin.readline().strip())
    Nor = int(stdin.readline().strip())
    Irl = int(stdin.readline().strip())
    Fra = int(stdin.readline().strip())
    gcd(Bel,Ing)
    gcd(Ing,Irl)
main()
