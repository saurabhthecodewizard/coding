const rearrangeBySign = (arr = []) => {
    const length = arr.length;

    const result = new Array(length).fill(0);
    let positive = 0;
    let negative = 1;

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] < 0) {
            result[negative] = arr[i];
            negative += 2;
        } else {
            result[positive] = arr[i];
            positive += 2;
        }
    }

    return result;
}


const arr = [3, 1, -2, -5, 2, -4];
const n = arr.length;
console.log("Values:");
console.log(arr.join(" "));
const result = rearrangeBySign(arr);
console.log("Rearranged Values:");
console.log(result.join(" "));