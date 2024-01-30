const maxProfit = (arr = []) => {
    if (arr.length === 0) return 0;
    let profit = 0;
    let min = arr[0];

    for (let i = 1; i < arr.length; i++) {
        const current_profit = arr[i] - min;
        profit = Math.max(profit, current_profit);
        min = Math.min(min, arr[i]);
    }

    return profit;
}

let arr = [7, 1, 5, 3, 6, 4];
console.log("Values:");
console.log(arr.join(" "));
let result = maxProfit(arr);
console.log("The maximum profit is:", result);