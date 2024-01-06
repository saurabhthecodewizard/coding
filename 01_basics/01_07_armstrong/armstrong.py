def armstrong(num):
    temp = num
    count = 0
    sumOfPower = 0
    while temp > 0:
        count += 1
        temp = temp // 10
    temp = num
    while temp > 0:
        digit = temp % 10
        sumOfPower += pow(digit, count)
        temp = temp // 10
    
    return sumOfPower == num


n = 163

print(f"Is {n} an Armstrong number: {armstrong(n)}")