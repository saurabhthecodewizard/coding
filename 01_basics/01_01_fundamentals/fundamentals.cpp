#include <iostream>
#include <string>

using namespace std;

void modifyValue(int num) {  // Pass by value
    num = 50;
}

void modifyReference(int &num) {  // Pass by reference
    num = 100;
}

// Define a class named Person
class Person {
public:  // Access specifier for public members
    string name;
    int age;

    // Constructor to initialize object properties
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Member function to introduce the person
    void introduce() {
        cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    int age;
    string name;

    // // Get user input
    // cout << "Enter your name: ";
    // getline(cin, name); // Use getline for strings with spaces
    // cout << "Enter your age: ";
    // cin >> age;

    // // Output the entered values
    // cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    // Integer variables
    int num1 = 10, num2 = 5;
    int sum = num1 + num2;

    // Floating-point variables
    double pi = 3.14159;
    float price = 19.99;

    // Character variable
    char initial = 'A';

    // Boolean variable
    bool isTrue = true;

    // Output the values
    cout << "Sum: " << sum << endl;
    cout << "Pi: " << pi << endl;
    cout << "Price: " << price << endl;
    cout << "Initial: " << initial << endl;
    cout << "isTrue: " << isTrue << endl;

    int grade = 95;

    // If-else statement
    if (grade >= 90) {
        cout << "Excellent!" << endl;
    } else if (grade >= 80) {
        cout << "Very good!" << endl;
    } else {
        cout << "You can do better." << endl;
    }

    // Switch statement
    switch (grade / 10) {
        case 10:
        case 9:
            cout << "A" << endl;
            break;
        case 8:
            cout << "B" << endl;
            break;
        default:
            cout << "C or below" << endl;
    }

    // For loop
    cout << "For loop:-" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // While loop
    cout << "While loop:-" << endl;
    int j = 1;
    while (j <= 10) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    int nums[5] = {1, 4, 2, 8, 5};

    // Accessing elements
    cout << "First element: " << nums[0] << endl;

    // Modifying elements
    nums[2] = 10;

    // Iterating through the array
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Creating a string
    string myString = "Hello, World!";

    // Accessing characters in a string using array notation
    char firstChar = myString[0];
    char lastChar = myString[myString.length() - 1];

    cout << "Original String: " << myString << endl;
    cout << "First Character: " << firstChar << endl;
    cout << "Last Character: " << lastChar << endl;

    // Concatenating strings
    string anotherString = " Welcome to C++!";
    myString += anotherString;

    cout << "Concatenated String: " << myString << endl;

    // Finding the length of a string
    cout << "Length of String: " << myString.length() << endl;

    // Substring
    string substring = myString.substr(7, 5);
    cout << "Substring: " << substring << endl;

    // Finding a character or substring in a string
    size_t findIndex = myString.find("C++");
    if (findIndex != string::npos) {
        cout << "Found 'C++' at index: " << findIndex << endl;
    } else {
        cout << "'C++' not found in the string." << endl;
    }

    // Replacing a substring
    size_t replaceIndex = myString.find("World");
    if (replaceIndex != string::npos) {
        myString.replace(replaceIndex, 5, "Universe");
        cout << "String after replacement: " << myString << endl;
    }

    // Erasing characters from a string
    myString.erase(0, 6);
    cout << "String after erasing characters: " << myString << endl;

    string combined = myString + " How are you?";
    cout << combined << endl;

    // Other useful methods
    myString.erase(7, 5);  // Remove 5 characters starting at index 7
    myString.insert(7, "everyone");  // Insert "everyone" at index 7
    myString.replace(0, 5, "Hi");  // Replace "Hello" with "Hi"
    cout << myString << endl;

    int number = 10;
    int *ptr = &number;  // Pointer to num

    // Accessing value through pointer
    cout << "Value *ptr: " << *ptr << endl;

    // Modifying value through pointer
    *ptr = 20;
    cout << "Modified value by *ptr: " << number << endl;

    // Pointer arithmetic
    int num_array[5] = {1, 2, 3, 4, 5};
    int *ptr2 = num_array;  // Pointer to the first element
    cout << "First element: " << *ptr2 << endl;
    cout << "Second element: " << *(ptr2 + 1) << endl;  // Accessing elements using pointer arithmetic

    int number1 = 42;
    int *ptr1 = &number1;
    int **pointer2 = &ptr1;  // Pointer to a pointer

    cout << "Value **ptr: " << **(pointer2) << endl;  // Accessing value through double pointer

    // Allocating memory for an integer
    int *pointer = new int;
    *pointer = 10;

    // Allocating memory for an array
    int *arr = new int[5];
    arr[0] = 1;
    arr[1] = 2;
    // ...

    // Deallocating memory
    delete pointer;
    delete[] arr;  // Use delete[] for arrays
    
    int x = 20;

    modifyValue(x);  // x remains unchanged
    cout << "x after modifyValue: " << x << endl;

    modifyReference(x);  // x is modified
    cout << "x after modifyReference: " << x << endl;

    // Create an object of the Person class
    Person person1("Alice", 30);

    // Call the introduce() method on the object
    person1.introduce();

    // Create another object with different properties
    Person person2("Bob", 25);
    person2.introduce();

    return 0;
}

// Encapsulation
class Account {
private: // Encapsulate balance for privacy
    double balance;

public:
    void deposit(double amount) {
        balance += amount;
    }

    double getBalance() {
        return balance;
    }
};

// Inheritance
class Employee {
public:
    string name;
    double salary;

    Employee(string n, double s) {
        name = n;
        salary = s;
    }
};

class Manager : public Employee {  // Manager inherits from Employee
public:
    int teamSize;

    Manager(string n, double s, int t) : Employee(n, s) { // Call base class constructor
        teamSize = t;
    }
};

// Polymorphism
class Shape {
public:
    virtual double getArea() = 0;  // Pure virtual function (abstract class)
};

class Circle : public Shape {
public:
    double radius;

    Circle(double r) {
        radius = r;
    }

    double getArea() override {  // Override virtual function
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
public:
    double width, height;

    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    double getArea() override {
        return width * height;
    }
};


// Abstraction
class Vehicle {
public:
    virtual void start() = 0;  // Abstract method
    virtual void stop() = 0;
};

class Car : public Vehicle {
public:
    void start() override {
        // Implementation for starting a car
    }

    void stop() override {
        // Implementation for stopping a car
    }
};
