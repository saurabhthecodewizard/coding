const pattern1 = (n) => {
    console.log("Pattern 1:-")
    Array.from(Array(n)).forEach(() => {
        Array.from(Array(n)).forEach(() => process.stdout.write("* "))
        console.log();
    })
}

const pattern2 = (n) => {
    console.log();
    console.log("Pattern 2:-")
    for (let index = 0; index < n; index++) {
        for (let j_index = 0; j_index <= index; j_index++) {
            process.stdout.write("* ")
        }
        console.log();
    }
}

const pattern3 = (n) => {
    console.log();
    console.log("Pattern 3:-")
    for (let index = 1; index <= n; index++) {
        for (let j_index = 1; j_index <= index; j_index++) {
            process.stdout.write(String(j_index) + " ")
        }
        console.log();
    }
}

const pattern4 = (n) => {
    console.log();
    console.log("Pattern 4:-")
    for (let index = 1; index <= n; index++) {
        for (let j_index = 1; j_index <= index; j_index++) {
            process.stdout.write(String(index) + " ")
        }
        console.log();
    }
}

const pattern5 = (n) => {
    console.log();
    console.log("Pattern 5:-")
    for (let index = 0; index < n; index++) {
        for (let j_index = 0; j_index < n - index; j_index++) {
            process.stdout.write("* ")
        }
        console.log();
    }
}

const pattern6 = (n) => {
    console.log();
    console.log("Pattern 6:-")
    for (let index = 0; index < n; index++) {
        for (let j_index = 0; j_index < n - index; j_index++) {
            process.stdout.write(String(j_index + 1) + " ")
        }
        console.log();
    }
}

const pattern7 = (n) => {
    console.log();
    console.log("Pattern 7:-")
    for (let index = 0; index < n; index++) {
        for (let j_index = 0; j_index < n - index - 1; j_index++) {
            process.stdout.write("  ")
        }
        for (let k_index = 0; k_index < 2 * index + 1; k_index++) {
            process.stdout.write("* ")
        }
        console.log();
    }
}

const pattern8 = (n) => {
    console.log();
    console.log("Pattern 8:-")
    for (let index = 0; index < n; index++) {
        for (let j_index = 0; j_index < index; j_index++) {
            process.stdout.write("  ")
        }
        for (let k_index = 0; k_index < 2 * (n - index) - 1; k_index++) {
            process.stdout.write("* ")
        }
        console.log();
    }
}

const pattern9 = (n) => {
    console.log();
    console.log("Pattern 9:-")
    for (let index = 0; index < n; index++) {
        for (let j_index = 0; j_index < n - index - 1; j_index++) {
            process.stdout.write("  ")
        }
        for (let k_index = 0; k_index < 2 * index + 1; k_index++) {
            process.stdout.write("* ")
        }
        console.log();
    }
    for (let index = 0; index < n; index++) {
        for (let j_index = 0; j_index < index; j_index++) {
            process.stdout.write("  ")
        }
        for (let k_index = 0; k_index < 2 * (n - index) - 1; k_index++) {
            process.stdout.write("* ")
        }
        console.log();
    }
}

const pattern10 = (n) => {
    console.log();
    console.log("Pattern 10:-");
    for (let index = 0; index < 2 * n; index++) {
        let limit = index;
        if (index > n) {
            limit = 2 * n - index;
        }
        for (let j_index = 0; j_index < limit; j_index++) {
            process.stdout.write("* ");
        }
        console.log();
    }
}

const pattern11 = (n) => {
    console.log();
    console.log("Pattern 11:-");
    for (let index = 0; index < n; index++) {
        let start = 0;
        if (index % 2 == 0) {
            start = 1;
        }
        for (let j_index = 0; j_index <= index; j_index++) {
            process.stdout.write(String(start) + " ");
            start = 1 - start;
        }
        console.log();
    }
}

const pattern12 = (n) => {
    console.log();
    console.log("Pattern 12:-");
    for (let index = 1; index <= n; index++) {
        for (let j_index = 1; j_index <= index; j_index++) {
            process.stdout.write(String(j_index) + " ");
        }
        for (let j_index = 1; j_index <= 2 * (n - index); j_index++) {
            process.stdout.write("  ");
        }
        for (let j_index = index; j_index >= 1; j_index--) {
            process.stdout.write(" " + j_index);
        }
        console.log();
    }
}

const pattern13 = (n) => {
    console.log();
    console.log("Pattern 13:-");
    let count = 1;
    for (let index = 0; index < n; index++) {
        for (let j_index = 0; j_index <= index; j_index++) {
            process.stdout.write(String(count++) + " ");
        }
        console.log();
    }
}

const pattern14 = (n) => {
    console.log();
    console.log("Pattern 14:-");
    for (let i = 0; i < n; i++) {
        let ch = 'A';
        for (let j = 0; j <= i; j++) {
            process.stdout.write(ch + " ");
            ch = String.fromCharCode(ch.charCodeAt(0) + 1);  // Increment the character
        }
        console.log();
    }
}

const pattern15 = (n) => {
    console.log();
    console.log("Pattern 15:-");
    for (let i = 0; i < n; i++) {
        let ch = 'A';
        for (let j = 0; j < (n - i); j++) {
            process.stdout.write(ch + " ");
            ch = String.fromCharCode(ch.charCodeAt(0) + 1);  // Increment the character
        }
        console.log();
    }
}

const pattern16 = (n) => {
    console.log();
    console.log("Pattern 16:-");
    for (let i = 0; i < n; i++) {
        let ch = String.fromCharCode('A'.charCodeAt(0) + i);
        for (let j = 0; j <= i; j++) {
            process.stdout.write(ch + " ");
        }
        console.log();
    }
}

const pattern17 = (n) => {
    console.log();
    console.log("Pattern 17:-")
    for (let index = 0; index < n; index++) {
        for (let j_index = 0; j_index < n - index - 1; j_index++) {
            process.stdout.write("  ")
        }
        let ch = 'A';
        let breakpoint = (2 * index + 1) / 2;
        for (let k_index = 0; k_index < 2 * index + 1; k_index++) {
            process.stdout.write(ch + " ");
            if (k_index <= breakpoint) {
                ch = String.fromCharCode(ch.charCodeAt(0) + 1)
            } else {
                ch = String.fromCharCode(ch.charCodeAt(0) - 1)
            }
        }
        console.log();
    }
}

const pattern18 = (n) => {
    console.log();
    console.log("Pattern 18:-");
    let limit = String.fromCharCode('A'.charCodeAt(0) + n - 1);
    for (let i = 0; i < n; i++) {
        for (let ch = limit.charCodeAt(0) - i; ch <= 'E'.charCodeAt(0); ch++) {
            process.stdout.write(String.fromCharCode(ch) + " ");
        }
        console.log();
    }
}

const pattern19 = (n) => {
    console.log();
    console.log("Pattern 19:-");
    let spaces = 0;
    for (let index = 0; index < n; index++) {
        for (let j_index = 0; j_index < (n - index); j_index++) {
            process.stdout.write("* ");
        }
        for (let j_index = 0; j_index < spaces; j_index++) {
            process.stdout.write("  ");
        }
        for (let j_index = 0; j_index < (n - index); j_index++) {
            process.stdout.write("* ");
        }
        console.log();
        spaces += 2;
    }
    for (let index = 0; index < n; index++) {
        spaces -= 2;
        for (let j_index = 0; j_index <= index; j_index++) {
            process.stdout.write("* ");
        }
        for (let j_index = 0; j_index < spaces; j_index++) {
            process.stdout.write("  ");
        }
        for (let j_index = 0; j_index <= index; j_index++) {
            process.stdout.write("* ");
        }
        console.log();
    }
}

const pattern20 = (n) => {
    console.log();
    console.log("Pattern 20:-");
    let spaces = 2 * n - 2;
    for (let i = 1; i <= 2 * n - 1; i++) {
        let stars = (i <= n) ? i : 2 * n - i;
        console.log("* ".repeat(stars) + "  ".repeat(spaces) + "* ".repeat(stars));
        if (i < n) {
            spaces -= 2;
        } else {
            spaces += 2;
        }
    }
}

const pattern21 = (n) => {
    console.log();
    console.log("Pattern 21:-");
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n; j++) {
            if (i === 0 || j === 0 || i === n - 1 || j === n - 1)
                process.stdout.write("* ");
            else
                process.stdout.write("  ");
        }
        console.log();
    }

}

const pattern22 = (n) => {
    console.log();
    console.log("Pattern 22:-");
    for (let i = 0; i < 2 * n - 1; i++) {
        for (let j = 0; j < 2 * n - 1; j++) {
            let top = i;
            let bottom = j;
            let right = (2 * n - 2) - j;
            let left = (2 * n - 2) - i;
            process.stdout.write((n - Math.min(Math.min(top, bottom), Math.min(left, right))) + " ");
        }
        console.log();
    }
}

const len = 5;

pattern1(len);
pattern2(len);
pattern3(len);
pattern4(len);
pattern5(len);
pattern6(len);
pattern7(len);
pattern8(len);
pattern9(len);
pattern10(len);
pattern11(len);
pattern12(len);
pattern13(len);
pattern14(len);
pattern15(len);
pattern16(len);
pattern17(len);
pattern18(len);
pattern19(len);
pattern20(len);
pattern21(len);
pattern22(len);