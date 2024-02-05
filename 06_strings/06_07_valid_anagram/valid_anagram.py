def isAnagram(s: str, t: str):
    if len(s) != len(t):
        return False
    
    count = [0] * 26
    
    for ch in s:
        count[ord(ch) - ord('a')] += 1
    for ch in t:
        count[ord(ch) - ord('a')] -= 1
    return all(num == 0 for num in count)

# Test case 1: Basic example
s1 = "listen"
t1 = "silent"
print(f"Test Case 1: {isAnagram(s1, t1)}, Strings: \"{s1}\", \"{t1}\"")

# Test case 2: Unequal lengths
s2 = "hello"
t2 = "world"
print(f"Test Case 2: {isAnagram(s2, t2)}, Strings: \"{s2}\", \"{t2}\"")

# Test case 3: Anagram with repeated characters
s3 = "abcabc"
t3 = "bacbca"
print(f"Test Case 3: {isAnagram(s3, t3)}, Strings: \"{s3}\", \"{t3}\"")

# Test case 4: Empty strings
s4 = ""
t4 = ""
print(f"Test Case 4: {isAnagram(s4, t4)}, Strings: \"{s4}\", \"{t4}\"")

# Test case 5: Anagram with different character counts
s5 = "abcd"
t5 = "abc"
print(f"Test Case 5: {isAnagram(s5, t5)}, Strings: \"{s5}\", \"{t5}\"")

# Test case 6: Anagram with different characters
s6 = "abcd"
t6 = "efgh"
print(f"Test Case 6: {isAnagram(s6, t6)}, Strings: \"{s6}\", \"{t6}\"")