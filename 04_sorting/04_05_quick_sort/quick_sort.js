const partition = (arr = [], low, high) => {
    let i = low + 1;
    let j = high;

    while (true) {
        while (arr[i] < arr[low]) {
            i++;
            if (i >= high) {
                break;
            }
        }
        while (arr[j] > arr[low]) {
            j--;
            if (j <= low) {
                break;
            }
        }
        if (i >= j) {
            break;
        }
        [arr[i], arr[j]] = [arr[j], arr[i]]
    }

    
    [arr[low], arr[j]] = [arr[j], arr[low]]

    return j;
}

const quickSort = (arr = [], low, high) => {
    if (low >= high) {
        return;
    }

    const j = partition(arr, low, high);
    quickSort(arr, low, j - 1);
    quickSort(arr, j + 1, high);
}

const array = [3, 2, 8, 5, 1, 4, 23]

console.log("Before:-");
console.log(array);
quickSort(array, 0, array.length - 1)
console.log("After:-");
console.log(array);