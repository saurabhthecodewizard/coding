function solve(arr) {
    const temp = arr[0];
    for (let i = 0; i < arr.length - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[arr.length - 1] = temp;
}

const arr = [1, 2, 3, 4, 5];
console.log("Elements:-");
console.log(arr);
solve(arr);
console.log("Rotated by one place:-");
console.log(arr);
