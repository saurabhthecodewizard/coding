const maxDepth = (s = '') => {
    let result = 0;
    let count = 0;
    for (const ch of s) {
        if (ch === '(') {
            count++;
            result = Math.max(result, count);
        } else if (ch === ')') {
            count--;
        }
    }
    return result;
}

const testMaxDepth = (s = '') => {
    const depth = maxDepth(s);
    console.log(`Output: "${s}", Depth: ${depth}`);
}

// Test cases
testMaxDepth("(a(b)c)");           // Output: "(a(b)c)", Depth: 2
testMaxDepth("(a(b(c)d)e)");        // Output: "(a(b(c)d)e)", Depth: 3
testMaxDepth("()");                 // Output: "()", Depth: 1
testMaxDepth("((()))");             // Output: "((()))", Depth: 3
testMaxDepth("()()");               // Output: "()()", Depth: 1
testMaxDepth("((())())");           // Output: "((())())", Depth: 4
testMaxDepth("");                   // Output: "", Depth: 0
