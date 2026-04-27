def recursion(n):
    if n == 0:
        return 0
    print('hi')
    recursion(n-1)

#print 1 to n 
def onetoN(count, n):
    if count > n:
        return
    print(count, end=' ')
    onetoN(count+1,n)

# print n to 1 
def ntoOne(n):
    if n < 1:
        return
    print(n, end=' ')
    ntoOne(n-1)


recursion(3)
onetoN(1,10)
ntoOne(6)

    