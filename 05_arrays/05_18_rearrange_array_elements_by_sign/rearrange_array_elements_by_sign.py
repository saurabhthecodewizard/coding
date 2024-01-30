def rearrange_by_sign(arr: list):
    length = len(arr)
    result = [0] * length
    positive = 0
    negative = 1
    
    for i in range(length):
        if arr[i] < 0:
            result[negative] = arr[i]
            negative += 2
        else:
            result[positive] = arr[i]
            positive += 2
            
    return result

arr = [3, 1, -2, -5, 2, -4]
n = len(arr)
print("Values:")
print(" ".join(map(str, arr)))
result = rearrange_by_sign(arr)
print("Rearranged Values:")
print(" ".join(map(str, result)))