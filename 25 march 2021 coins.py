import math
def arrange_coins(n):
    c=0
    row=1
    if n==0:
        return 0
    elif n!=0:
        while n>=row:
            n=n-row
            row+=1
            c+=1

    return c
print(arrange_coins(7))