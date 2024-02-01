from typing import List

def merge_intervals(intervals: List[List[int]]):
    n = len(intervals)
    intervals.sort()
    if n == 0:
        return intervals
    result = []
    result.append(intervals[0])
    for i in range(n):
        current = intervals[i]
        last = result[-1]
        if current[0] <= last[1]:
            last[1] = max(last[1], current[1])
        else:
            result.append(current)
    return result

arr = [[1, 3], [8, 10], [2, 6], [15, 18]]
ans = merge_intervals(arr)
print("The merged intervals are:")
for it in ans:
    print(f"[{it[0]}, {it[1]}]", end=" ")
print()