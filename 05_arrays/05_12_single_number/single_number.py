def singleNumber(arr: list):
    xor = 0
    for i in range(len(arr)):
        xor ^= arr[i]
    return xor

arr = [4, 1, 2, 1, 2]

print("Elements:-")
print(*arr)

result = singleNumber(arr)
print("The single element is:", result)