const gcd = (a, b) => {
    if (b == 0) {
        return a;
    }

    return gcd(b, a%b);
}

const x = 4;
const y = 8;

console.log(`GCD of ${x} and ${y} is ${gcd(x, y)}`);