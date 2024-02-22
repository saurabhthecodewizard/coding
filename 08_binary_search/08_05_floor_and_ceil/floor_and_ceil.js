function findFloor(arr, target) {
    let low = 0;
    let high = arr.length - 1;
    let result = -1;

    while (low <= high) {
        let mid = low + Math.floor((high - low) / 2);
        if (arr[mid] <= target) {
            result = arr[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

function findCeil(arr, target) {
    let low = 0;
    let high = arr.length - 1;
    let result = -1;

    while (low <= high) {
        let mid = low + Math.floor((high - low) / 2);
        if (arr[mid] >= target) {
            result = arr[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

// Test cases
let arr1 = [1, 2, 8, 10, 10, 12, 19];
let target1 = 5;
console.log("Test Case 1 - Array:", arr1);
console.log("Floor of", target1 + ":", findFloor(arr1, target1));
console.log("Ceil of", target1 + ":", findCeil(arr1, target1));

let arr2 = [1, 2, 8, 10, 10, 12, 19];
let target2 = 20;
console.log("\nTest Case 2 - Array:", arr2);
console.log("Floor of", target2 + ":", findFloor(arr2, target2));
console.log("Ceil of", target2 + ":", findCeil(arr2, target2));

let arr3 = [1, 2, 8, 10, 10, 12, 19];
let target3 = 0;
console.log("\nTest Case 3 - Array:", arr3);
console.log("Floor of", target3 + ":", findFloor(arr3, target3));
console.log("Ceil of", target3 + ":", findCeil(arr3, target3));

let arr4 = [1, 2, 8, 10, 10, 12, 19];
let target4 = 10;
console.log("\nTest Case 4 - Array:", arr4);
console.log("Floor of", target4 + ":", findFloor(arr4, target4));
console.log("Ceil of", target4 + ":", findCeil(arr4, target4));
