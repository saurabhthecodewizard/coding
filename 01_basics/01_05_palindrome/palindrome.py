def is_palindrome(n: int):
    if n < 0:
        return False
    return str(n)[::-1] == str(n)


num = 123321
print(f"Is {num} palindrome: {is_palindrome(num)}")