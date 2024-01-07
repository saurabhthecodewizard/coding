const reverse = (nums = [], low, high) => {
    let i = low;
    let j = high;

    while (i < j) {
        [nums[i], nums[j]] = [nums[j], nums[i]];
        i++;
        j--;
    }
}

const rotate = (nums = [], k) => {
    const length = nums.length
    k = k % length;
    if (k < 0) {
        k = k + length;
    }

    reverse(nums, 0, k - 1);
    reverse(nums, length - k, length - 1);
    reverse(nums, 0 , length - 1);
}

const array = [1, 2, 3, 4, 5, 6, 7]
const k = 3;
console.log("Elements:-");
console.log(array);
rotate(array, k);
console.log(`Rotated by ${k}:-`);
console.log(array);