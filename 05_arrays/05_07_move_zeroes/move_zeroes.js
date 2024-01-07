const moveZeroes = (arr = []) => {
    let j = 0;
    for (let index = 0; index < arr.length; index++) {
        if (arr[index] != 0) {
            [arr[index], arr[j]] = [arr[j], arr[index]];
            j++;
        }
    }
}

const array = [0, 1, 0, 3, 12]
console.log(array);
moveZeroes(array);
console.log(array);