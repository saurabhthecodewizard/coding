function searchInsert(nums, target) {
    let low = 0;
    let high = nums.length - 1;
    let result = nums.length;
    while (low <= high) {
        let mid = low + Math.floor((high - low) / 2);
        if (nums[mid] >= target) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

function printArray(arr) {
    console.log("Array:", arr);
}

// Test Case 1: Target found in the middle
let arr1 = [1, 3, 5, 6];
let target1 = 5;
console.log("Test Case 1:");
printArray(arr1);
console.log("Insert Position for", target1, ":", searchInsert(arr1, target1)); // Output should be 2

// Test Case 2: Target found at the beginning
let arr2 = [1, 3, 5, 6];
let target2 = 2;
console.log("\nTest Case 2:");
printArray(arr2);
console.log("Insert Position for", target2, ":", searchInsert(arr2, target2)); // Output should be 1

// Test Case 3: Target found at the end
let arr3 = [1, 3, 5, 6];
let target3 = 7;
console.log("\nTest Case 3:");
printArray(arr3);
console.log("Insert Position for", target3, ":", searchInsert(arr3, target3)); // Output should be 4

// Test Case 4: Target not found
let arr4 = [1, 3, 5, 6];
let target4 = 0;
console.log("\nTest Case 4:");
printArray(arr4);
console.log("Insert Position for", target4, ":", searchInsert(arr4, target4)); // Output should be 0
