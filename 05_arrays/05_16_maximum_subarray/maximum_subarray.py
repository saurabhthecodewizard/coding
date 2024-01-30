def max_sub_array(arr: list):
    result = float('-inf')
    sum = 0
    
    for i in range(len(arr)):
        sum += arr[i]
        result = max(result, sum)
        if sum < 0:
            sum = 0
    
    return result


arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
print("Before sorting:")
print(" ".join(map(str, arr)))
result = max_sub_array(arr)
print("The maximum subarray sum is:", result)