def generate(numRows: int):
    result = []
    if numRows == 0:
        return result
    
    result.append([1])
    for i in range(1, numRows):
        prevRow = result[i - 1]
        currentRow = [1] * (i + 1)
        for j in range(1, i):
            currentRow[j] = prevRow[j - 1] + prevRow[j]
        result.append(currentRow)
    
    return result


print(generate(5))