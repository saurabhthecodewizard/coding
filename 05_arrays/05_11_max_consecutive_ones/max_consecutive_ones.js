const maxConsecutiveOnes = (arr = []) => {
    let count = 0;
    let maxCount = 0;

    for (let index = 0; index < arr.length; index++) {
        if (!!arr[index]) {
            count++;
        } else {
            maxCount = Math.max(maxCount, count);
            count = 0;
        }
    }

    return Math.max(maxCount, count);
}

const nums = [1, 1, 0, 1, 1, 1];

console.log("Elements:-");
console.log(nums.join(' '));

console.log("The maximum consecutive 1's are:", maxConsecutiveOnes(nums));
