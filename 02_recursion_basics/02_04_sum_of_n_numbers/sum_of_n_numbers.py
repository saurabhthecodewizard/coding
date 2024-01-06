def totalSum(i, sum):
    if i < 1:
        return sum
    return totalSum(i - 1, sum + i)
    
num = 5
print(f"Sum of first {num} numbers: {totalSum(num, 0)}")