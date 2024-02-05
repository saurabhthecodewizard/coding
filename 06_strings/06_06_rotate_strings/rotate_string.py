def rotateString(s: str, goal: str):
    return len(s) == len(goal) and goal in (s + s)

# Test case 1: Basic example
s1 = "abcde"
goal1 = "deabc"
print(f"Test Case 1: {rotateString(s1, goal1)}, Strings: \"{s1}\", \"{goal1}\"")

# Test case 2: Unequal lengths
s2 = "hello"
goal2 = "world"
print(f"Test Case 2: {rotateString(s2, goal2)}, Strings: \"{s2}\", \"{goal2}\"")

# Test case 3: Rotation with repeated characters
s3 = "aaaaab"
goal3 = "baaaaa"
print(f"Test Case 3: {rotateString(s3, goal3)}, Strings: \"{s3}\", \"{goal3}\"")

# Test case 4: Empty strings
s4 = ""
goal4 = ""
print(f"Test Case 4: {rotateString(s4, goal4)}, Strings: \"{s4}\", \"{goal4}\"")

# Test case 5: Same string
s5 = "same"
goal5 = "same"
print(f"Test Case 5: {rotateString(s5, goal5)}, Strings: \"{s5}\", \"{goal5}\"")

# Test case 6: Rotation with different characters
s6 = "abc"
goal6 = "xyz"
print(f"Test Case 6: {rotateString(s6, goal6)}, Strings: \"{s6}\", \"{goal6}\"")