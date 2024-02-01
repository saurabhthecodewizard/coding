const fourSum = (arr = [], target) => {
    const result = [];
    arr.sort();
    const size = arr.length;

    for (let i = 0; i < arr.length - 3; i++) {
        if (i > 0 && arr[i] === arr[i - 1]) {
            continue;
        }
        for (let j = i + 1; j < arr.length - 2; j++) {
            if (j > i  + 1 && arr[j] === arr[j - 1]) {
                continue;
            }

            let low = j + 1;
            let high = size - 1;
            while (low < high) {
                const sum = arr[i] + arr[j] + arr[low] + arr[high];

                if (sum < target) {
                    low++;
                } else if (sum > target) {
                    high--;
                } else {
                    const combination = [arr[i], arr[j], arr[low], arr[high]];
                    result.push(combination);

                    while (low + 1 < high && arr[low] === arr[low + 1]) {
                        low++;
                    }
                    while (high - 1 > low && arr[high] === arr[high - 1]) {
                        high--;
                    }

                    low++;
                    high--;
                }
            }
        }
    }

    return result;
}

const nums1 = [1, 0, -1, 0, -2, 2];
const target1 = 0;
const result1 = fourSum(nums1, target1);
console.log("Example 1:");
result1.forEach(quadruplet => console.log(`[${quadruplet.join(', ')}]`));

const nums2 = [2, 2, 2, 2, 2];
const target2 = 8;
const result2 = fourSum(nums2, target2);
console.log("\nExample 2:");
result2.forEach(quadruplet => console.log(`[${quadruplet.join(', ')}]`));