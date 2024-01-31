const generate = (numRows) => {
    const result = [];
    if (numRows == 0) {
        return result;
    }

    result.push([1]);
    for (let i = 1; i < numRows; i++) {
        const row = new Array(i + 1).fill(1);
        for (let j = 1; j < i; j++) {
            row[j] = result[i-1][j-1] + result[i-1][j];
        }
        result.push(row);
    }

    return result;
}

const res = generate(5);
console.log(res);