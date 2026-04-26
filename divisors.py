def divisors(n):
    divisors = []
    for i in range(1,n+1):
        if n % i == 0:
            divisors.append(i)
    return divisors

# optimal approach
import math
def div(n):
    res = []
    sqrt = int(math.sqrt(n)) + 1
    for i in range(1,sqrt):
        if n % i == 0:
            res.append(i)
            if i != n // i:
                res.append(n // i)
    return res


if __name__ == '__main__':
    n = 36
    # all_divisors = divisors(n)
    all_divisors = div(n)
    print(f"The divisors of {n} are {all_divisors}")