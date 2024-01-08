def maxConsecutiveOnes(arr: list):
    count = 0
    maxCount = 0
    
    for i, v in enumerate(arr):
        if v:
            count += 1
        else:
            maxCount = max(maxCount, count)
            count = 0
    
    return max(maxCount, count)


nums = [1, 1, 0, 1, 1, 1]
print("Elements:-")
print(nums)
print("The maximum  consecutive 1's are", maxConsecutiveOnes(nums))