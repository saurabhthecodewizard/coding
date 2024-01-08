const twoSum = (arr = [], target = 0) => {
    const store = {};

    for (let i = 0; i < arr.length; i++) {
        const complement = target - arr[i];
        if (store.hasOwnProperty(complement)) {
            return [store[complement], i];
        }
        store[arr[i]] = i;
    }

    return [-1, -1];
}

const arr = [2, 6, 5, 8, 11];
const target = 14;

console.log("Elements:-");
console.log(arr.join(' '));

console.log("Target:", target);

const result = twoSum(arr, target);
console.log("This is the answer for variant 2:", result);