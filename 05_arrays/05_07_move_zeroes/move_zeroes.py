def moveZeroes(nums: list):
    j = 0
    for i in  range(len(nums)):
        if nums[i] != 0:
            nums[i], nums[j] = nums[j], nums[i]
            j += 1
        
arr = [0, 1, 0, 3, 12]
print("Elements:-")
print(arr)
moveZeroes(arr)
print("Zeroes moved:-")
print(arr)