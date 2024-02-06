def beauty_sum(s: str):
    result = 0
    for i in range(len(s)):
        frequency = [0] * 26
        for j in range(i, len(s)):
            frequency[ord(s[j]) - ord('a')] += 1
            result += max(frequency) - min(x for x in frequency if x)
    return result

def test(input_str):
    result = beauty_sum(input_str)
    print(f"Input: \"{input_str}\" -> Output: {result}")

# Test cases
test("aabcb")      # Output: 5
test("aabcbaa")    # Output: 17
test("abcde")      # Output: 0
test("abcabc")     # Output: 5
test("aaaa")       # Output: 0
test("abcdabcd")   # Output: 9