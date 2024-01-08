const majorityElement = (nums = []) => {
    [count, element] = [1, nums[0]];

    for (let i = 1; i < nums.length; i++) {
        if (count === 0) {
            element = nums[i];
            count++;
        } else if (element === nums[i]) {
            count++;
        }  else {
            count--;
        }
    }

    return element;
}

const arr = [2, 2, 1, 1, 1, 2, 2];
console.log(`Elements: ${arr}`);
const ans = majorityElement(arr);
console.log("The majority element is:", ans);