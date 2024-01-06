const reverseNum = (n) => {
    let x = n;
    let reverse = 0

    while (x > 0) {
        reverse = reverse * 10 + (x % 10);
        x = Math.floor(x / 10);
    }
    return reverse;
}

const num = 56789

console.log("Revers of " + num + " is " + reverseNum(num));