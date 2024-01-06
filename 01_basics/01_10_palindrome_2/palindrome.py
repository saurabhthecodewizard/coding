def palindrome(s: str):
    sanitized = ''.join([char.lower() for char in s if char.isalnum()])
    return sanitized == sanitized[::-1]

st = "A man, a plan, a canal: Panama"
print(st)
print(f"Is Palindrome: {palindrome(st)}")