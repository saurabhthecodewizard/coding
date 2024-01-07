const removeDuplicates = (arr = []) => {
    let j = 1;
    for (let index = 1; index < arr.length; index++) {
        if (arr[index]  != arr[index-1]) {
            arr[j++] = arr[index];
        }
    }
    return j;
}

const elements = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4];
console.log("Elements:-");
console.log(elements);
const nonDuplicates = removeDuplicates(elements);
console.log(`NonDuplicates: ${nonDuplicates}`);
for (let index = 0; index < nonDuplicates; index++) {
    process.stdout.write(elements[index] + " ");
}