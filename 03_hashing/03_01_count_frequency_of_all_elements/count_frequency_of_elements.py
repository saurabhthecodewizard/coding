def count_frequency_of_elements(arr: list, n: int, dictionary: dict):
    for i in range(n):
        if arr[i] in dictionary:
            dictionary[arr[i]] += 1
        else:
            dictionary[arr[i]] = 1
    for x in dictionary:
        print(x, dictionary[x])
        
        
arr = [10, 5, 10, 15, 10, 5]
n = len(arr)
result = {}
count_frequency_of_elements(arr, n, result)
print(result)