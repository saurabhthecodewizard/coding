def reverse_words(s: str):
    array = s.strip().split()
    return ' '.join(array[::-1])

# Test case 1: Basic example
input1 = "Hello World"
reversed1 = reverse_words(input1)
print(f"Test Case 1: Original: \"{input1}\", Reversed: \"{reversed1}\"")

# Test case 2: Multiple spaces between words
input2 = "   OpenAI    GPT-3.5   "
reversed2 = reverse_words(input2)
print(f"Test Case 2: Original: \"{input2}\", Reversed: \"{reversed2}\"")

# Test case 3: Leading and trailing spaces
input3 = "   This is a test   "
reversed3 = reverse_words(input3)
print(f"Test Case 3: Original: \"{input3}\", Reversed: \"{reversed3}\"")

# Test case 4: Empty string
input4 = ""
reversed4 = reverse_words(input4)
print(f"Test Case 4: Original: \"{input4}\", Reversed: \"{reversed4}\"")

# Test case 5: Single word
input5 = "Python"
reversed5 = reverse_words(input5)
print(f"Test Case 5: Original: \"{input5}\", Reversed: \"{reversed5}\"")