def roman_to_int(s):
    if not s:
        return -1

    roman_numerals = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }
    
    result = 0
    
    for i in range(len(s) - 1):
        current_value = roman_numerals[s[i]]
        next_value = roman_numerals[s[i + 1]]
        if current_value < next_value:
            result -= current_value
        else:
            result += current_value
    result += roman_numerals[s[(len(s) - 1)]]
    return result

# Test cases
print(f"Input: III -> Output: {roman_to_int('III')}")
print(f"Input: IV -> Output: {roman_to_int('IV')}")
print(f"Input: IX -> Output: {roman_to_int('IX')}")
print(f"Input: LVIII -> Output: {roman_to_int('LVIII')}")
print(f"Input: MCMXCIV -> Output: {roman_to_int('MCMXCIV')}")