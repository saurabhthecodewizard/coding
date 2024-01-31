const majorityElement = (arr = []) => {
    const result = [];
    const map = new Map();
    const threshold = Math.floor(arr.length / 3);

    for (let i = 0; i < arr.length; i++) {
        map.set(arr[i], ((map.get(arr[i]) || 0) + 1));
    }

    console.log(map);

    for (const [key, value] of map) {
        if (value > threshold) {
            result.push(key);
        }
    }

    return result;
}


console.log(majorityElement([11, 33, 22, 11, 11, 33, 33]));