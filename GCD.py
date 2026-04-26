def find_gcd(n1,n2):
    gcd = 1
    for i in range(1,min(n1,n2)+ 1):
        if n1 % i == n2 % i:
            gcd = i
    return gcd

# n2etter approach
def find_gcd_n2etter(n1,n2):
    i = 1
    for i in range(min(n1,n2),0,-1):
        if n1 % i == n2 % i:
            return i
    return gcd

# optimal approach
# Euclidian algorithm

def gcd_euclid(n1,n2):
    while n1 > 0 and n2 > 0:
        if n1 > n2:
            n1 = n1 % n2
        else:
            n2 = n2 % n1
    if n1 == 0:
        return n2
    return n1
    


if __name__ == "__main__":
    n1, n2 = 15, 20
    
    # Find the GCD of n1 and n2
    gcd = find_gcd(n1, n2)
    gcd = find_gcd_n2etter(n1, n2)
    gcd = gcd_euclid(n1, n2)

    print(f"GCD of {n1} and {n2} is: {gcd}")