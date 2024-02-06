#include <iostream>
#include <algorithm>

using namespace std;

int maxDepth(const string& s) {
    int result = 0;
    int count = 0;
    for (char ch : s) {
        if (ch == '(') {
            count++;
            result = max(result, count);
        } else if (ch == ')') {
            count--;
        }
    }
    return result;
}

void testMaxDepth(const string& s) {
    int depth = maxDepth(s);
    cout << "Output: \"" << s << "\", Depth: " << depth << endl;
}

int main() {
    // Test cases
    testMaxDepth("(a(b)c)");           // Output: "(a(b)c)", Depth: 2
    testMaxDepth("(a(b(c)d)e)");        // Output: "(a(b(c)d)e)", Depth: 3
    testMaxDepth("()");                 // Output: "()", Depth: 1
    testMaxDepth("((()))");             // Output: "((()))", Depth: 3
    testMaxDepth("()()");               // Output: "()()", Depth: 1
    testMaxDepth("((())())");           // Output: "((())())", Depth: 4
    testMaxDepth("");                   // Output: "", Depth: 0

    return 0;
}
