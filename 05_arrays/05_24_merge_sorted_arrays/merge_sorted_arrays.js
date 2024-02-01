const merge = (nums1 = [], m, nums2 = [], n) => {
    let i = m - 1
    let j = n - 1
    let k = m + n - 1

    while (i >= 0 && j >= 0) {
        nums1[k--] = nums1[i] > nums2[j] ? nums1[i--] : nums2[j--]
    }
    while (j >= 0) {
        nums1[k--] = nums2[j--]
    }
}

let nums1 = [1, 2, 3, 0, 0, 0];
let m = 3;
let nums2 = [2, 5, 6];
let n = 3;

merge(nums1, m, nums2, n);

console.log("Merged Array:", nums1.join(" "));