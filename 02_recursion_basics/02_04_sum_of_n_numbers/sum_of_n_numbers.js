const totalSum = (i, sum) => {
    if (i < 1) {
        return sum;
    }

    return totalSum(i - 1, sum + i);
}

const num = 5;
console.log(`Sum of first ${num} numbers: ${totalSum(num, 0)}`);