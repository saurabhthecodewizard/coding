function search(nums, target) {
    let low = 0, high = nums.length - 1;
    while (low <= high) {
        let mid = low + Math.floor((high - low) / 2);
        if (nums[mid] === target) {
            return mid;
        } else if (nums[low] <= nums[mid]) {
            if (nums[low] <= target && target <= nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if (nums[mid] <= target && target <= nums[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1;
}

// Test cases
let nums1 = [4, 5, 6, 7, 0, 1, 2];
let target1 = 0;
console.log(`Test Case 1 - Array: [${nums1}]`);
console.log(`Target: ${target1}`);
console.log(`Index: ${search(nums1, target1)}`);

let nums2 = [4, 5, 6, 7, 0, 1, 2];
let target2 = 3;
console.log(`\nTest Case 2 - Array: [${nums2}]`);
console.log(`Target: ${target2}`);
console.log(`Index: ${search(nums2, target2)}`);

let nums3 = [1];
let target3 = 0;
console.log(`\nTest Case 3 - Array: [${nums3}]`);
console.log(`Target: ${target3}`);
console.log(`Index: ${search(nums3, target3)}`);

let nums4 = [4, 5, 6, 7, 8, 1, 2, 3];
let target4 = 8;
console.log(`\nTest Case 4 - Array: [${nums4}]`);
console.log(`Target: ${target4}`);
console.log(`Index: ${search(nums4, target4)}`);
