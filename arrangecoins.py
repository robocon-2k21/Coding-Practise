def arrangeCoins(n):
    l = 1
    h = n
    while l<=h:
        mid = l + (h-l)//2
        maxima = int(mid*(mid+1)/2)
        if maxima == n:
            return mid
        if maxima < n:
            l = mid + 1
        else:
            h = mid - 1
    return h
print(arrangeCoins(3))