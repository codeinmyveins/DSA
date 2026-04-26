def divisors(n):
    divisors = []
    for i in range(1,n+1):
        if n % i == 0:
            divisors.append(i)
    return divisors

if __name__ == '__main__':
    n = 36
    all_divisors = divisors(n)
    print(f"The divisors of {n} are {all_divisors}")