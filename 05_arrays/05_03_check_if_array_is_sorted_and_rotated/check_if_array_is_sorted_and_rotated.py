def check(nums: list) -> bool:
    count = 0
    for i in range(1, len(nums)):
        if (nums[i] < nums[i-1]):
            count += 1

    if nums[0] < nums[len(nums) - 1]:
        count += 1
    
    return count <= 1

arr = [3, 4, 5, 1, 2]
print("Elements:-")
print(arr)
print(f"Is sorted: {check(arr)}")