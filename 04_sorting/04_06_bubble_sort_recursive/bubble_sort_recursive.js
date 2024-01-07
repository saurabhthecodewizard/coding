const bubbleSortRecursive = (arr = [], n) => {
    if (n == 1) {
        return;
    }

    for (let index = 0; index < n - 1; index++) {
        if (arr[index] > arr[index + 1]) {
            [arr[index], arr[index + 1]] = [arr[index + 1], arr[index]];
        }
    }

    bubbleSortRecursive(arr, n - 1);
}

const array = [13, 46, 24, 52, 20, 9]

console.log("Before:-");
console.log(array);
bubbleSortRecursive(array, array.length)
console.log("After:-");
console.log(array);