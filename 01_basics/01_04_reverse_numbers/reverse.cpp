#include <iostream>
#include <limits>

int reverseNumber(int x) {
    int sign = (x > 0) ? 1 : -1;
    long long reverse = sign * stoll(std::to_string(std::abs(x)));
    return (reverse < std::numeric_limits<int>::min() || reverse > std::numeric_limits<int>::max()) ? 0 : reverse;
}

int main() {
    int number = 1234;
    std::cout << "Reverse of " << number << " is " << reverseNumber(number) << std::endl;
    return 0;
}
