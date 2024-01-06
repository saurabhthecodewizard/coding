const reverse_array = (start, end, arr) => {
    if (start < end) {
        [arr[start], arr[end]] = [arr[end], arr[start]];
        reverse_array(start + 1, end - 1, arr);
    }
}

const array = [1, 2, 3, 4, 5, 6, 7, 8, 9]
console.log("Before:-");
console.log(array);
reverse_array(0, array.length - 1, array);
console.log();
console.log("After:-");
console.log(array);