const missingNumber = (arr = []) => {
    let xor1 = 0;
    let xor2 = 0;

    for (let index = 0; index < arr.length; index++) {
        xor1 ^= arr[index];
        xor2 ^= index + 1;
    }

    return xor1 ^ xor2;
}

const nums = [9, 6, 4, 2, 3, 5, 7, 0, 1];

console.log("Elements:- ");
console.log(nums.join(' '));

const result = missingNumber(nums);
console.log("The missing number is:", result);