def pattern1(n: int):
    print("Pattern 1:-")
    for i in range(n):
        for j in range(n):
            print("*", end=" ")
        print()
        
def pattern2(n: int):
    print()
    print("Pattern 2:-")
    for i in range(n):
        for j in range(i+1):
            print("*", end=" ")
        print()
        
def pattern3(n: int):
    print()
    print("Pattern 3:-")
    for i in range(1, n + 1):
        for j in range(1, i+1):
            print(j, end=" ")
        print()
        
def pattern4(n: int):
    print()
    print("Pattern 4:-")
    for i in range(1, n + 1):
        for j in range(1, i+1):
            print(i, end=" ")
        print()

def pattern5(n: int):
    print()
    print("Pattern 5:-")
    for i in range(n):
        for j in range(i, n):
            print("*", end=" ")
        print()
        
def pattern6(n: int):
    print()
    print("Pattern 6:-")
    for i in range(n):
        for j in range(1, n - i + 1):
            print(j, end=" ")
        print()
        
def pattern7(n: int):
    print()
    print("Pattern 7:-")
    for i in range(n):
        for j in range(n - i - 1):
            print(" ", end=" ")
        for k in range(2 * i + 1):
            print("*", end=" ")
        print()
        
def pattern8(n: int):
    print()
    print("Pattern 8:-")
    for i in range(n):
        for j in range(i):
            print(" ", end=" ")
        for k in range(2 * (n - i) - 1):
            print("*", end=" ")
        print()

def pattern9(n: int):
    print()
    print("Pattern 9:-")
    for i in range(n):
        for j in range(n - i - 1):
            print(" ", end=" ")
        for k in range(2 * i + 1):
            print("*", end=" ")
        print()
    for i in range(n):
        for j in range(i):
            print(" ", end=" ")
        for k in range(2 * (n - i) - 1):
            print("*", end=" ")
        print()

def pattern10(n: int):
    print()
    print("Pattern 10:-")
    for i in range(2 * n):
        limit = i
        if i > n:
            limit = 2 * n - i
        for j in range(limit):
            print("*", end=" ")
        print()

def pattern11(n: int):
    print()
    print("Pattern 11:-")
    for i in range(n):
        start = 0
        if i % 2 == 0:
            start = 1
        for j in range(i + 1):
            print(start, end=" ")
            start = 1 - start
        print()

def pattern12(n: int):
    print()
    print("Pattern 12:-")
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(j, end=" ")
        for j in range(1, 2 * (n - i) + 1):
            print(" ", end=" ")
        for j in range(i, 0, -1):
            print(f" {j}", end="")
        print()

def pattern13(n: int):
    print()
    print("Pattern 13:-")
    count = 1
    for i in range(n):
        for j in range(i + 1):
            print(count, end=" ")
            count = count + 1
        print()

def pattern14(n):
    print()
    print("Pattern 14:-")
    for i in range(n):
        for ch in range(ord('A'), ord('A') + i + 1):
            print(chr(ch), end=" ")
        print()

def pattern15(n):
    print()
    print("Pattern 15:-")
    for i in range(n):
        for ch in range(ord('A'), ord('A') + n - i):
            print(chr(ch), end=" ")
        print()

def pattern16(n):
    print()
    print("Pattern 16:-")
    for i in range(n):
        ch = chr(ord('A') + i)
        for j in range(i + 1):
            print(ch, end=" ")
        print()

def pattern17(n: int):
    print()
    print("Pattern 17:-")
    for i in range(n):
        for j in range(n - i - 1):
            print(" ", end=" ")
        ch = 'A'
        breakpoint = (2 * i + 1) / 2
        for k in range(2 * i + 1):
            print(ch, end=" ")
            if k <= breakpoint:
                ch = chr(ord(ch) + 1)
            else:
                ch = chr(ord(ch) - 1)
        print()
        
def pattern18(n):
    print()
    print("Pattern 18:-")
    limit = chr(ord('A') + n - 1)
    for i in range(n):
        for ch in range(ord(limit) - i, ord('E') + 1):
            print(chr(ch), end=" ")
        print()

def pattern19(n):
    print()
    print("Pattern 19:-")
    spaces = 0
    for i in range(n):
        for j in range(n - i):
            print("*", end=" ")
        for j in range(spaces):
            print(" ", end=" ")
        for j in range(n - i):
            print("*", end=" ")
        spaces += 2
        print()
    for i in range(n):
        spaces -= 2
        for j in range(i + 1):
            print("*", end=" ")
        for j in range(spaces):
            print(" ", end=" ")
        for j in range(i + 1):
            print("*", end=" ")
        print()

def pattern20(n):
    print()
    print("Pattern 20:-")
    spaces = 2 * n - 2
    for i in range(1, 2 * n):
        stars = i if i <= n else 2 * n - i
        print("* " * stars + "  " * spaces + "* " * stars)
        if i < n:
            spaces -= 2
        else:
            spaces += 2

def pattern21(n):
    print()
    print("Pattern 21:-")
    for i in range(n):
        for j in range(n):
            if i == 0 or j == 0 or i == n - 1 or j == n - 1:
                print("* ", end="")
            else:
                print("  ", end="")
        print()

def pattern22(n):
    print()
    print("Pattern 22:-")
    for i in range(2 * n - 1):
        for j in range(2 * n - 1):
            top = i
            bottom = j
            right = (2 * n - 2) - j
            left = (2 * n - 2) - i
            print(n - min(min(top, bottom), min(left, right)), end=" ")
        print()

length = 5

pattern1(length)
pattern2(length)
pattern3(length)
pattern4(length)
pattern5(length)
pattern6(length)
pattern7(length)
pattern8(length)
pattern9(length)
pattern10(length)
pattern11(length)
pattern12(length)
pattern13(length)
pattern14(length)
pattern15(length)
pattern16(length)
pattern17(length)
pattern18(length)
pattern19(length)
pattern20(length)
pattern21(length)
pattern22(length)