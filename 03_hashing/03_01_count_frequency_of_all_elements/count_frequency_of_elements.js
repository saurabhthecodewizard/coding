function countFrequencyOfElements(arr) {
    const dictionary = {};
    for (let i = 0; i < arr.length; i++) {
        if (dictionary[arr[i]]) {
            dictionary[arr[i]]++;
        } else {
            dictionary[arr[i]] = 1;
        }
    }
    return dictionary;
}

const arr = [10, 5, 10, 15, 10, 5];
const result = countFrequencyOfElements(arr);

for (const [key, value] of Object.entries(result)) {
    console.log(key + '-> ' + value);
}
