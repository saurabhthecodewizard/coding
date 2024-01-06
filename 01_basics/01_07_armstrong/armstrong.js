const armstrong = (n) => {
    let temp = n;
    let count = 0
    let sum = 0;

    while (temp > 0) {
        count++;
        temp = Math.floor(temp / 10);
    }

    temp = n;
    while (temp > 0) {
        const digit = temp % 10;
        sum += Math.pow(digit, count);
        temp = Math.floor(temp / 10);
    }

    return sum == n;
}

const num = 153;
console.log(`Is ${num} and Armstrong number: ${armstrong(num)}`);