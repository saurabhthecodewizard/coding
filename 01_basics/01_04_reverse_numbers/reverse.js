const reverseNum = (x) => {
    const sign = x > 0 ? 1 : -1;
    const reverse = sign * parseInt(Math.abs(x).toString().split('').reverse().join(''));
    return (reverse < Math.pow(-2, 31) || reverse > Math.pow(2, 31) - 1) ? 0 : reverse;
}

const num = 56789

console.log("Reverse of " + num + " is " + reverseNum(num));