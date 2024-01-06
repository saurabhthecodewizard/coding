def print_n_times(i, n):
    if i > n:
        return
    print("Name")
    print_n_times(i + 1, n)
    
num = 5
print_n_times(1, num)