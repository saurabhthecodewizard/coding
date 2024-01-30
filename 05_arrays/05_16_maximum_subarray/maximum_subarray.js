const maximumSubarray = (arr = []) => {
    let result = Number.MIN_VALUE;
    let sum = 0;

    for (let i = 0; i < arr.length; i++) {
        sum += arr[i];
        result = Math.max(result, sum);
        sum = sum < 0 ? 0 : sum; 
    }

    return result;
}


let arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4];
console.log("Before sorting:");
console.log(arr.join(" "));
let result = maximumSubarray(arr);
console.log("The maximum subarray sum is:", result);