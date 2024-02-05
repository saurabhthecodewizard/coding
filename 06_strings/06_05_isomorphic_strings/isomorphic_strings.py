def isIsomorphic(s: str, t: str):
    if len(s) != len(t):
            return False
        
    s_dict = {}
    t_dict = {}

    for i in range(len(s)):
        if s[i] not in s_dict and t[i] not in t_dict:
            s_dict[s[i]] = t[i]
            t_dict[t[i]] = s[i]
        elif s_dict.get(s[i]) != t[i] or t_dict.get(t[i]) != s[i]:
            return False
    
    return True

# Test case 1: Basic example
print("Test Case 1:", isIsomorphic("egg", "add"))

# Test case 2: Characters in s map to same character in t
print("Test Case 2:", isIsomorphic("foo", "bar"))

# Test case 3: Isomorphic strings
print("Test Case 3:", isIsomorphic("paper", "title"))