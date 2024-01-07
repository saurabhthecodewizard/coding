const insertionSortRecursive = (arr = [], n) => {
    if (n >= arr.length) {
        return;
    }
    for (let j_index = n; j_index > 0; j_index--) {
        if (arr[j_index] < arr[j_index - 1]) {
            [arr[j_index], arr[j_index - 1]] = [arr[j_index - 1], arr[j_index]];
        }
    }

    insertionSortRecursive(arr, n+1);
}

const array = [13, 46, 24, 52, 20, 9]

console.log("Before:-");
console.log(array);
insertionSortRecursive(array, 0)
console.log("After:-");
console.log(array);