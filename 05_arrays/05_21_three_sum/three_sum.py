def three_sum(nums: list):
    result = []
    nums.sort()
    
    for i in range(len(nums)):
        if i > 0 and nums[i] == nums[i-1]:
            continue
        low = i + 1
        high = len(nums) - 1
        
        while low < high:
            sumation = nums[i] + nums[low] + nums[high]
            if sumation < 0:
                low += 1
            elif sumation > 0: 
                high -= 1
            else:
                result.append([nums[i], nums[low], nums[high]])
                while low + 1 < high and nums[low] == nums[low + 1]:
                    low += 1
                while high - 1 > low and nums[high] == nums[high - 1]:
                    high -= 1
                low += 1
                high -= 1
    
    return result


print(three_sum([-1, 0, 1, 2, -1, -4]))