const singleNumber = (arr = []) => {
    let xor = 0;
    for (const num of arr) {
        xor ^= num;
    }
    return xor;
}

const arr = [4, 1, 2, 1, 2];

console.log("Elements:-");
console.log(arr.join(' '));

const result = singleNumber(arr);
console.log("The single element is:", result);