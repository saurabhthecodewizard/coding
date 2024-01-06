def reverseNumber(n: int):
    num = n
    reverse = 0
    while num != 0:
        digit = num % 10
        reverse = reverse * 10 + digit
        num = num // 10
    return reverse

number = 1234
print(f"Reverse of {number} is {reverseNumber(number)}")