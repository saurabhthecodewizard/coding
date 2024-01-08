def missingNumber(nums: list):
    length = len(nums)
    return length * (length + 1) // 2 - sum(nums)

nums = [9, 6, 4, 2, 3, 5, 7, 0, 1]

print("Elements:- ")
print(*nums)

result = missingNumber(nums)
print("The missing number is:", result)