def longest_common_prefix(args: list[str]):
    if not len(args):
        return ''
    
    args.sort()
    index = 0
    for i in range(len(args[0])):
        if args[0][i] == args[-1][i]:
            index += 1
        else:
            break
    return args[0][:index]

# Test case 1: Basic example
input1 = ["flower", "flow", "flight"]
result1 = longest_common_prefix(input1)
print(f"Test Case 1: Input: {input1}, Result: \"{result1}\"")

# Test case 2: No common prefix
input2 = ["dog", "racecar", "car"]
result2 = longest_common_prefix(input2)
print(f"Test Case 2: Input: {input2}, Result: \"{result2}\"")

# Test case 3: Common prefix at the beginning
input3 = ["apple", "apricot", "apology"]
result3 = longest_common_prefix(input3)
print(f"Test Case 3: Input: {input3}, Result: \"{result3}\"")

# Test case 4: Empty array
input4 = []
result4 = longest_common_prefix(input4)
print(f"Test Case 4: Input: {input4}, Result: \"{result4}\"")

# Test case 5: Single-word array
input5 = ["programming"]
result5 = longest_common_prefix(input5)
print(f"Test Case 5: Input: {input5}, Result: \"{result5}\"")