def count_digits(n: int):
    x = n
    count = 0
    while x != 0:
        x = x // 10
        count += 1
    return count

num = 12345

print(f"Number of digits in {num} is {count_digits(num)}")