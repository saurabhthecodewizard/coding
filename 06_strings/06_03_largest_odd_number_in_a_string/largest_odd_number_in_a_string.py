def largest_odd_number(num: str):
    for i in range(len(num) - 1, -1, -1):
        if num[i] in ['1', '3', '5', '7', '9']:
            return num[0:i+1]
    return ""

# Test case 1: Basic example
input1 = "52"
result1 = largest_odd_number(input1)
print(f"Test Case 1: Input: \"{input1}\", Result: \"{result1}\"")

# Test case 2: Odd number at the end
input2 = "123456789"
result2 = largest_odd_number(input2)
print(f"Test Case 2: Input: \"{input2}\", Result: \"{result2}\"")

# Test case 3: No odd number
input3 = "24686420"
result3 = largest_odd_number(input3)
print(f"Test Case 3: Input: \"{input3}\", Result: \"{result3}\"")

# Test case 4: Odd number in the middle
input4 = "24613578"
result4 = largest_odd_number(input4)
print(f"Test Case 4: Input: \"{input4}\", Result: \"{result4}\"")

# Test case 5: Empty string
input5 = ""
result5 = largest_odd_number(input5)
print(f"Test Case 5: Input: \"{input5}\", Result: \"{result5}\"")