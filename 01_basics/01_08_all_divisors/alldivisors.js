const print_all_divisors = (n) => {
    process.stdout.write(`All divisors of ${n} are: `)
    for (let index = 1; index <= Math.sqrt(n); index++) {
        if (n % index === 0) {
            process.stdout.write(String(index) + " ");
            if (Math.floor(n / index) !== index) {
                process.stdout.write(String(Math.floor(n / index)) + " ");
            }
        }
    }
}

const num = 36
print_all_divisors(num);