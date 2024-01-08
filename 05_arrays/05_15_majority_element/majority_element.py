def majorityElement(nums: list):
    count, element = 1, nums[0]
    
    for i in range(1, len(nums)):
        if count == 0:
            count += 1
            element = nums[i]
        elif element == nums[i]:
            count += 1
        else:
            count -= 1
    
    return element

arr = [2, 2, 1, 1, 1, 2, 2]
print(*arr)
ans = majorityElement(arr)
print("The majority element is:", ans)