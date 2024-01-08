def linear_search(nums, key):
    for i in range(len(nums)):
        if nums[i] == key:
            return i
    return -1

def print_nums(nums):
    print(" ".join(map(str, nums)))

nums = [1, 2, 3, 4, 5]
key = 3

print("Elements:-")
print_nums(nums)
print(f"The element {key} is at index: {linear_search(nums, key)}")
