const findMax = (arr = []) => {
    let max = arr[0];

    for (let index = 0; index < arr.length; index++) {
        if (arr[index] > max) {
            max = arr[index];
        }
    }

    return max;
}

const array = [2, 3, 5, 1, 0];
console.log("Elements:-");
console.log(array);
console.log("Max:-");
console.log(findMax(array));
