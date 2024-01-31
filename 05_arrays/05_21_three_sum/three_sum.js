const threesum = (arr = []) => {
    arr.sort();
    const result = [];

    for (let i = 0; i < arr.length - 2; i++) {
        if (i > 0 && arr[i] === arr[i - 1]) {
            continue;
        }

        let low = i + 1;
        let high = arr.length - 1;

        while (low < high) {
            const sum = arr[i] + arr[low] + arr[high];

            if (sum < 0) {
                low++;
            } else if (sum > 0) {
                high--;
            } else {
                result.push([arr[i], arr[low], arr[high]]);

                while (low + 1 < high && arr[low] == arr[low + 1]) {
                    low++;
                }
                while (high - 1 > low && arr[high] == arr[high - 1]) {
                    high--;
                }

                low++;
                high--;
            }
        }
    }

    return result;
}

console.log(threesum([-1, 0, 1, 2, -1, -4]))