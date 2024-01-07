const selection_sort = (arr = []) => {
    for (let index = 0; index < arr.length; index++) {
        for (let j_index = 0; j_index < arr.length; j_index++) {
            if (arr[j_index] > arr[index]) {
                [arr[j_index], arr[index]] = [arr[index], arr[j_index]]
            }
        }
    }
}

const array = [13, 46, 24, 52, 20, 9]

console.log("Before:-");
console.log(array);
selection_sort(array)
console.log("After:-");
console.log(array);