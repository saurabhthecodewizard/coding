function findMin(nums) {
    let low = 0;
    let high = nums.length - 1;
    let result = Infinity;
    while (low <= high) {
        let mid = low + Math.floor((high - low) / 2);
        if (nums[low] <= nums[mid]) {
            result = Math.min(result, nums[low]);
            low = mid + 1;
        } else {
            result = Math.min(result, nums[mid]);
            high = mid - 1;
        }
    }
    return result;
}

// Test cases
let nums1 = [3, 4, 5, 1, 2];
console.log(`Test Case 1 - Array: [${nums1}]`);
console.log(`Minimum Element: ${findMin(nums1)}`);

let nums2 = [4, 5, 6, 7, 0, 1, 2];
console.log(`\nTest Case 2 - Array: [${nums2}]`);
console.log(`Minimum Element: ${findMin(nums2)}`);

let nums3 = [11, 13, 15, 17];
console.log(`\nTest Case 3 - Array: [${nums3}]`);
console.log(`Minimum Element: ${findMin(nums3)}`);

let nums4 = [5, 5, 5, 5, 5];
console.log(`\nTest Case 4 - Array: [${nums4}]`);
console.log(`Minimum Element: ${findMin(nums4)}`);
