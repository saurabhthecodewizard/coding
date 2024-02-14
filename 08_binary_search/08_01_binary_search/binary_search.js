function search(arr, target) {
    let low = 0;
    let high = arr.length - 1;
    while (low <= high) {
        let mid = Math.floor((low + high) / 2);
        if (arr[mid] === target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

function printArray(arr) {
    console.log("Array:", arr);
}

// Test Case 1: Target found in the middle
let arr1 = [1, 2, 3, 4, 5, 6, 7, 8, 9];
let target1 = 5;
console.log("Test Case 1:");
printArray(arr1);
console.log("Index of", target1, ":", search(arr1, target1));  // Output should be 4

// Test Case 2: Target found at the beginning
let arr2 = [10, 20, 30, 40, 50];
let target2 = 10;
console.log("\nTest Case 2:");
printArray(arr2);
console.log("Index of", target2, ":", search(arr2, target2));  // Output should be 0

// Test Case 3: Target found at the end
let arr3 = [100, 200, 300, 400, 500];
let target3 = 500;
console.log("\nTest Case 3:");
printArray(arr3);
console.log("Index of", target3, ":", search(arr3, target3));  // Output should be 4

// Test Case 4: Target not found
let arr4 = [5, 10, 15, 20, 25];
let target4 = 12;
console.log("\nTest Case 4:");
printArray(arr4);
console.log("Index of", target4, ":", search(arr4, target4));  // Output should be -1
