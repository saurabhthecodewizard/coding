def is_prime(n):
    for i in range(2, int(n**0.5)):
        if n % i == 0:
            return False
    return True

num = 23
print(f"Is {num} a prime number: {is_prime(num)}")