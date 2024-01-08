function linearSearch(nums, key) {
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === key) {
            return i;
        }
    }
    return -1;
}

function print(nums) {
    console.log(nums.join(' '));
}

const nums = [1, 2, 3, 4, 5];
const key = 3;

console.log("Elements:-");
print(nums);
console.log(`The element ${key} is at index: ${linearSearch(nums, key)}`);
