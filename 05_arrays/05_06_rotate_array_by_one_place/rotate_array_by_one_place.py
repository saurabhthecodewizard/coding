def solve(arr, n):
    temp = arr[0]
    for i in range(n - 1):
        arr[i] = arr[i + 1]
    arr[n - 1] = temp

n = 5
arr = [1, 2, 3, 4, 5]
print("Elements:-")
print(arr)
solve(arr, n)
print("Rotated by one place:-")
print(arr)