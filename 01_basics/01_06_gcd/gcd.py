def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a%b)

x, y = 4, 8
print(f"GCD of {x} and {y} is {gcd(x, y)}")