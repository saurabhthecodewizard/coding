def twoSum(arr: list, target: int):
    store = {}
    
    for i, v in enumerate(arr):
        complement = target - v
        if complement in store:
            return [store[complement], i]
        store[v] = i
        
    return [-1, -1]

arr = [2, 6, 5, 8, 11]
target = 14

print("Elements:-")
print(*arr)

print("Target:", target)

result = twoSum(arr, target)
print("This is the answer for variant 2:", result)