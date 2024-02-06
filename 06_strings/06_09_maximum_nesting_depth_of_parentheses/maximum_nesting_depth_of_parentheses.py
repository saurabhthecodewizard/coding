def max_depth(s: str):
    count = 0
    result = 0
    for ch in s:
        if ch == '(':
            count += 1
            result = max(count, result)
        elif ch == ')':
            count -= 1
    return result

def test_max_depth(s):
    depth = max_depth(s)
    print(f"Output: \"{s}\", Depth: {depth}")

# Test cases
test_max_depth("(a(b)c)")           # Output: "(a(b)c)", Depth: 2
test_max_depth("(a(b(c)d)e)")        # Output: "(a(b(c)d)e)", Depth: 3
test_max_depth("()")                 # Output: "()", Depth: 1
test_max_depth("((()))")             # Output: "((()))", Depth: 3
test_max_depth("()()")               # Output: "()()", Depth: 1
test_max_depth("((())())")           # Output: "((())())", Depth: 4
test_max_depth("")                   # Output: "", Depth: 0