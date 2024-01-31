def majority_element(arr: list):
    result = []
    counter = {}
    threshold = len(arr) // 3
    
    for i in range(len(arr)):
        counter[arr[i]] = counter.get(arr[i], 0) + 1
    
    for k, v in counter.items():
        if v > threshold:
            result.append(k)
    
    return result


print(majority_element([11, 33, 22, 11, 11, 22, 22]))