const isPrime = (n) => {
    for (let index = 2; index < Math.sqrt(n); index++) {
        if (n % index === 0) {
            return false;
        }
    }
    return true;
}

const num = 23;
console.log(`Is ${num} a prime number: ${isPrime(num)}`);