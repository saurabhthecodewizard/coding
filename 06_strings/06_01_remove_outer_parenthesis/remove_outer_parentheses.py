def remove_outer_parentheses(s: str):
    result, opened = '', 0
    for c in s:
        if c == '(' and opened > 0:
            result += c
        if c == ')' and opened > 1:
            result += c
        opened += 1 if c == '(' else -1
    return result

# Test case 1: Basic example
input1 = "(()())"
removed1 = remove_outer_parentheses(input1)
print(f"Test Case 1: Original: {input1}, Removed: {removed1}")

# Test case 2: Nested parentheses
input2 = "(()(()))"
removed2 = remove_outer_parentheses(input2)
print(f"Test Case 2: Original: {input2}, Removed: {removed2}")

# Test case 3: No outer parentheses
input3 = "()()"
removed3 = remove_outer_parentheses(input3)
print(f"Test Case 3: Original: {input3}, Removed: {removed3}")

# Test case 4: Empty string
input4 = ""
removed4 = remove_outer_parentheses(input4)
print(f"Test Case 4: Original: {input4}, Removed: {removed4}")

# Test case 5: Only one pair of parentheses
input5 = "(())"
removed5 = remove_outer_parentheses(input5)
print(f"Test Case 5: Original: {input5}, Removed: {removed5}")