const bubbleSort = (arr = []) => {
    let flag = true;
    for (let index = 0; index < arr.length - 1 && flag; index++) {
        flag = false;
        for (let j_index = 0; j_index < arr.length - index - 1; j_index++) {
            if (arr[j_index] > arr[j_index + 1]) {
                [arr[j_index], arr[j_index + 1]] = [arr[j_index + 1], arr[j_index]];
                flag = true;
            }
        }
    }
}

const array = [13, 46, 24, 52, 20, 9]

console.log("Before:-");
console.log(array);
bubbleSort(array)
console.log("After:-");
console.log(array);