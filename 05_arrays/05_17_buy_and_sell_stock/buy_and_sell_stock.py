def max_profit(arr = list):
    if not len(arr):
        return 0
    
    profit = 0
    minimum = arr[0]
    
    for i in range(1, len(arr)):
        current_profit = arr[i] - minimum
        profit = max(profit, current_profit)
        minimum = min(minimum, arr[i])
    
    return profit


arr = [7, 1, 5, 3, 6, 4]

print("Values:")
print(" ".join(map(str, arr)))
result = max_profit(arr)
print("The maximum profit is:", result)