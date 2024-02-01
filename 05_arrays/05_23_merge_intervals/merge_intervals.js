const merge = (intervals = [[]]) => {
    const size = intervals.length;
    if (size === 0) {
        return [[]];
    }
    intervals.sort((a, b) => a[0] - b[0]);
    const result = [];
    result.push(intervals[0]);
    for (let i = 1; i < size; i++) {
        const current = intervals[i];
        const last = result[result.length - 1];
        if (current[0] <= last[1]) {
            last[1] = Math.max(last[1], current[1])
        } else {
            result.push(current);
        }
    }
    return result;
}

const arr = [[1, 3], [8, 10], [2, 6], [15, 18]];
const ans = merge(arr);
console.log("The merged intervals are:");
console.log(ans);