const fibonacci = (n) => {
    if (n <= 1) {
        return n; 
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

const num = 7;

console.log(`Fibonacci for ${num}: ${fibonacci(num)}`);