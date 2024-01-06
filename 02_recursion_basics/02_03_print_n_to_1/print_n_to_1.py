def print_n_to_1(i, n):
    if i > n:
        return
    print_n_to_1(i + 1, n)
    print(i)
    
num = 5
print_n_to_1(1, num)