const merge = (arr, low, mid, high) => {
    const aux = [];
    let left = low;
    let right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            aux.push(arr[left++]);
        } else {
            aux.push(arr[right++]);
        }
    }

    while (left <= mid) {
        aux.push(arr[left++]);
    }

    while (right <= high) {
        aux.push(arr[right++]);
    }

    for (let index = low; index <= high; index++) {
        arr[index] = aux[index - low];
    }
}

const mergeSort = (arr, low, high) => {
    if (low >= high) {
        return;
    }

    const mid = Math.floor((low + high) / 2);
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

const array = [3, 2, 8, 5, 1, 4, 23]

console.log("Before:-");
console.log(array);
mergeSort(array, 0, array.length - 1)
console.log("After:-");
console.log(array);