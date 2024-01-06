const print_1_to_n = (i, n) => {
    if (i > n) {
        return;
    }

    console.log(i);
    print_1_to_n(i+1, n);
}

const num = 5;
print_1_to_n(1, num);