const countDigits = (n) => {
    let x = n;
    let count = 0;

    while (x != 0) {
        x = Math.floor(x / 10);
        count++;
    }

    return count;
}

const num = 12345;
console.log("Number of digits in " + num + " is: " + countDigits(num));