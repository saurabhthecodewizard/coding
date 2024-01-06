def print_all_divisors(n):
    print(f"All divisors of {n} are: ", end="")
    for i in range(1, int(n**0.5) + 1):
        if n % i == 0:
            print(f"{i}", end=" ")
            if i != n//i:
                print(f"{n//i}", end=" ")
            
num = 36
print_all_divisors(num)