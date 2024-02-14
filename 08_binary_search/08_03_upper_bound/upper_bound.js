function upperBound(arr, target) {
    let low = 0;
    let high = arr.length - 1;
    let result = high;
    while (low <= high) {
        let mid = low + Math.floor((high - low) / 2);
        if (arr[mid] > target) {
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
let arr1 = [1, 2, 2, 2, 3, 4, 5];
let target1 = 2;
console.log("Test Case 1:");
printArray(arr1);
console.log("Upper Bound of", target1, ":", upperBound(arr1, target1)); // Output should be 4

// Test Case 2: Target found at the beginning
let arr2 = [5, 10, 10, 15, 20];
let target2 = 5;
console.log("\nTest Case 2:");
printArray(arr2);
console.log("Upper Bound of", target2, ":", upperBound(arr2, target2)); // Output should be 1

// Test Case 3: Target found at the end
let arr3 = [10, 20, 30, 40, 50];
let target3 = 50;
console.log("\nTest Case 3:");
printArray(arr3);
console.log("Upper Bound of", target3, ":", upperBound(arr3, target3)); // Output should be 4

// Test Case 4: Target not found
let arr4 = [5, 10, 15, 20, 25];
let target4 = 12;
console.log("\nTest Case 4:");
printArray(arr4);
console.log("Upper Bound of", target4, ":", upperBound(arr4, target4)); // Output should be 2
