const arrayIsSortedAndRotated = (arr = []) => {
    let count = 0;

    for (let index = 1; index < arr.length; index++) {
        if (arr[index - 1] > arr[index]) {
            count++;
        }
    }

    if (arr[0] < arr[arr.length - 1]) {
        count++;
    }

    return count <= 1;
}

const array = [3, 4, 5, 1, 2];

console.log("Elements:-");
console.log(array);
console.log(`Is sorted and rotated: ${arrayIsSortedAndRotated(array)}`);