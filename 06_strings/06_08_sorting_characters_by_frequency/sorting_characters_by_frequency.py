from collections import Counter

def frequencySort(s: str):
    count = Counter(s)
    arr = [[freq, ch] for ch, freq in count.items()]
    arr.sort(key=lambda x:-x[0])
    result = []
    for freq, ch in arr:
        result.append(ch * freq)
    return "".join(result)

# Test cases
result1 = frequencySort("tree")
print(f"Output for 'tree': {result1}")   # Output: "eetr" or "eert"

result2 = frequencySort("cccaaa")
print(f"Output for 'cccaaa': {result2}")  # Output: "aaaccc" or "cccaaa"

result3 = frequencySort("Aabb")
print(f"Output for 'Aabb': {result3}")    # Output: "bbAa" or "bbaA"