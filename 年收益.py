def getValue(b,r,n):
    v=b*((1+r)**n)
    return v

total=getValue(10000,0.05,5)
print(total)
