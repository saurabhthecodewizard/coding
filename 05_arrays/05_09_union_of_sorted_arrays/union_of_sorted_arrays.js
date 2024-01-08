const findUnion = (arr1 = [], arr2 = []) => {
    let i = 0;
    let j = 0;
    const result = []

    while (i < arr1.length && j < arr2.length) {
        if (arr1[i] <= arr2[j]) {
            if (!result.length || result[result.length - 1] !== arr1[i]) {
                result.push(arr1[i]);
            }
            i++;
        } else {
            if (!result.length || result[result.length - 1] !== arr2[j]) {
                result.push(arr2[j]);
            }
            j++;
        }
    }

    while (i < arr1.length) {
        if (result[result.length - 1] !== arr1[i]) {
            result.push(arr1[i]);
        }
        i++;
    }

    while (j < arr2.length) {
        if (result[result.length - 1] !== arr2[j]) {
            result.push(arr2[j]);
        }
        j++;
    }

    return result;
}

const arr1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const arr2 = [2, 3, 4, 4, 5, 11, 12];

console.log("Array 1:-");
console.log(arr1.join(' '));

console.log("Array 2:-");
console.log(arr2.join(' '));

const result = findUnion(arr1, arr2);

console.log("Union of arr1 and arr2 is:");
console.log(result.join(' '));