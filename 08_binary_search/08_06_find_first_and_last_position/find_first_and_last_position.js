function searchRange(nums, target) {
    let result = [-1, -1];
    let low = 0, high = nums.length - 1;

    // Search for the first occurrence of the target
    while (low <= high) {
        let mid = low + Math.floor((high - low) / 2);
        if (nums[mid] >= target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }

        if (target === nums[mid]) {
            result[0] = mid;
        }
    }

    low = 0;
    high = nums.length - 1;

    // Search for the last occurrence of the target
    while (low <= high) {
        let mid = low + Math.floor((high - low) / 2);
        if (nums[mid] <= target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }

        if (target === nums[mid]) {
            result[1] = mid;
        }
    }

    return result;
}

// Test cases
let nums1 = [5, 7, 7, 8, 8, 10];
let target1 = 8;
console.log(`Test Case 1 - Array: [${nums1}]`);
console.log(`Target: ${target1}`);
console.log(`Result: [${searchRange(nums1, target1)}]`);

let nums2 = [5, 7, 7, 8, 8, 10];
let target2 = 6;
console.log(`\nTest Case 2 - Array: [${nums2}]`);
console.log(`Target: ${target2}`);
console.log(`Result: [${searchRange(nums2, target2)}]`);

let nums3 = [1];
let target3 = 1;
console.log(`\nTest Case 3 - Array: [${nums3}]`);
console.log(`Target: ${target3}`);
console.log(`Result: [${searchRange(nums3, target3)}]`);

let nums4 = [2, 2];
let target4 = 2;
console.log(`\nTest Case 4 - Array: [${nums4}]`);
console.log(`Target: ${target4}`);
console.log(`Result: [${searchRange(nums4, target4)}]`);
