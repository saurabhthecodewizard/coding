def reverseNumber(x: int):
    sign = 1 if x > 0 else -1
    reverse = sign * int(str(abs(x))[::-1])
    return reverse if -2**31 < reverse < 2**31 else 0

number = 1234
print(f"Reverse of {number} is {reverseNumber(number)}")