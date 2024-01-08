def findUnion(arr1: list, arr2: list):
    i = j = 0
    result = []
    
    while i < len(arr1) and j < len(arr2):
        if arr1[i] <= arr2[j]:
            if not result or result[-1] != arr1[i]:
                result.append(arr1[i])
            i += 1
        else:
            if not result or result[-1] != arr2[j]:
                result.append(arr2[j])
            j += 1
    
    while i < len(arr1):
        if result[-1] != arr1[i]:
            result.append(arr1[i])
        i += 1
            
    while j < len(arr2):
        if result[-1] != arr2[j]:
            result.append(arr2[j])
        j += 1
    
    return result

arr1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
arr2 = [2, 3, 4, 4, 5, 11, 12]

print("Array 1:-")
print(" ".join(map(str, arr1)))

print("Array 2:-")
print(" ".join(map(str, arr2)))

result = findUnion(arr1, arr2)

print("Union of arr1 and arr2 is:")
print(" ".join(map(str, result)))