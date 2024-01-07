def removeDuplicates(nums: list) -> int:
    j = 1
    for i in range(1, len(nums)):
        if nums[i] != nums[i - 1]:
            nums[j] = nums[i]
            j += 1
    return j


elements = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
print("Elements:-")
print(elements)
nonDuplicates = removeDuplicates(elements)
print(f"NonDuplicates: {nonDuplicates}")
for i in range(nonDuplicates):
    print(elements[i], end=" ")