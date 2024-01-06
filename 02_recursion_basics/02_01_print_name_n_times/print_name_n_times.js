const printNameNTimes = (i, n) => {
    if (i > n) {
        return;
    }

    console.log("Name");
    printNameNTimes(i + 1, n);
}

const num = 5;
printNameNTimes(1, num);