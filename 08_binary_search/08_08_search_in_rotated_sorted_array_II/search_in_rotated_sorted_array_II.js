function search(nums, target) {
    let low = 0, high = nums.length - 1;
    while (low <= high) {
        let mid = low + Math.floor((high - low) / 2);
        if (nums[mid] === target) {
            return true;
        }
        if (nums[low] === nums[mid] && nums[mid] === nums[high]) {
            low++;
            high--;
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
    return false;
}

// Test cases
let nums1 = [2, 5, 6, 0, 0, 1, 2];
let target1 = 0;
console.log(`Test Case 1 - Array: [${nums1}]`);
console.log(`Target: ${target1}`);
console.log(`Result: ${search(nums1, target1)}`);

let nums2 = [2, 5, 6, 0, 0, 1, 2];
let target2 = 3;
console.log(`\nTest Case 2 - Array: [${nums2}]`);
console.log(`Target: ${target2}`);
console.log(`Result: ${search(nums2, target2)}`);

let nums3 = [1, 1, 1, 3, 1];
let target3 = 3;
console.log(`\nTest Case 3 - Array: [${nums3}]`);
console.log(`Target: ${target3}`);
console.log(`Result: ${search(nums3, target3)}`);

let nums4 = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1];
let target4 = 0;
console.log(`\nTest Case 4 - Array: [${nums4}]`);
console.log(`Target: ${target4}`);
console.log(`Result: ${search(nums4, target4)}`);
