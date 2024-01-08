const sortColors = (arr = []) => {
    [red, white, blue] = [0, 0, arr.length-1];

    while (white <= blue) {
        if (arr[white] === 0) {
            [arr[white], arr[red]] = [arr[red], arr[white]];
            white++;
            red++;
        } else if (arr[white] === 1) {
            white++;
        } else {
            [arr[white], arr[blue]] = [arr[blue], arr[white]];
            blue--;
        }
    }
}

const arr = [0, 2, 1, 2, 0, 1];

console.log("Before sorting:", arr);

sortColors(arr);

console.log("After sorting:", arr);