// Declaring variables of different data types
let name = "John";       // String
let age = 30;            // Number
let isStudent = false;   // Boolean

// Printing variables to the console
console.log(name);       // Output: John
console.log(age);        // Output: 30
console.log(isStudent);  // Output: false

let a = 5;
let b = 3;

// Arithmetic operators
let sum = a + b;         // Addition
let difference = a - b;  // Subtraction
let product = a * b;     // Multiplication
let quotient = a / b;    // Division

console.log(sum);        // Output: 8
console.log(difference); // Output: 2
console.log(product);    // Output: 15
console.log(quotient);   // Output: 1.6666666666666667

let num = 10;

// If-else statement
if (num > 0) {
    console.log("Positive number");
} else if (num < 0) {
    console.log("Negative number");
} else {
    console.log("Zero");
}
// Output: Positive number

// For loop to print numbers from 1 to 5
for (let i = 1; i <= 5; i++) {
    console.log(i);
}
// Output: 1 2 3 4 5

// While loop to print numbers from 1 to 5
let j = 1;
while (j <= 5) {
    console.log(j);
    j++;
}
// Output: 1 2 3 4 5

// Function to add two numbers
function addNumbers(x, y) {
    return x + y;
}

let result = addNumbers(5, 3);
console.log(result);  // Output: 8

// Declaring and initializing an object
let person = {
    firstName: "John",
    lastName: "Doe",
    age: 30,
    isStudent: false
};

// Accessing properties of an object
console.log(person.firstName);  // Output: John
console.log(person.age);        // Output: 30

// Modifying a property of an object
person.age = 40;
console.log(person.age);        // Output: 40

let str = "Hello, World!";

// Length of a string
console.log(str.length);               // Output: 13

// Convert to uppercase
console.log(str.toUpperCase());       // Output: HELLO, WORLD!

// Extract substring
console.log(str.substring(0, 5));      // Output: Hello

// Declaring and initializing an array
let fruits = ["apple", "banana", "cherry"];

// Accessing elements of an array using index
console.log(fruits[0]);  // Output: apple
console.log(fruits[1]);  // Output: banana

// Adding an element to the end of the array
fruits.push("orange");
console.log(fruits);     // Output: ["apple", "banana", "cherry", "orange"]

// Iterating through an array using for-of loop
for (let fruit of fruits) {
    console.log(fruit);
}
// Output: apple banana cherry orange

let numbers = [1, 2, 3, 4, 5];

// Add element at the end
numbers.push(6);                       // [1, 2, 3, 4, 5, 6]

// Remove element from the end
numbers.pop();                         // [1, 2, 3, 4, 5]

// Map method to double each element
let doubled = numbers.map(num => num * 2);
console.log(doubled);                  // [2, 4, 6, 8, 10]

// Creating a Set
let uniqueNumbers = new Set();

// Adding elements to the Set
uniqueNumbers.add(1);
uniqueNumbers.add(2);
uniqueNumbers.add(1);  // Ignored because 1 already exists

console.log(uniqueNumbers.size);  // Output: 2

// Checking if a value exists in the Set
console.log(uniqueNumbers.has(1));  // Output: true

// Deleting a value from the Set
uniqueNumbers.delete(1);
console.log(uniqueNumbers.has(1));  // Output: false

// Clearing the Set
uniqueNumbers.clear();
console.log(uniqueNumbers.size);  // Output: 0

// Creating a Map
let keyValue = new Map();

// Setting key-value pairs in the Map
keyValue.set('name', 'John');
keyValue.set('age', 30);

console.log(keyValue.get('name'));  // Output: John

// Checking if a key exists in the Map
console.log(keyValue.has('name'));  // Output: true

// Deleting a key-value pair from the Map
keyValue.delete('name');
console.log(keyValue.has('name'));  // Output: false

// Clearing the Map
keyValue.clear();
console.log(keyValue.size);  // Output: 0

// Creating a WeakMap
let weakMap = new WeakMap();

let objKey = {};

// Setting key-value pairs in the WeakMap
weakMap.set(objKey, 'Value associated with object key');

// Getting value using the object key
console.log(weakMap.get(objKey));  // Output: Value associated with object key

// Checking if the object key exists in the WeakMap
console.log(weakMap.has(objKey));  // Output: true

// Deleting the key-value pair from the WeakMap
weakMap.delete(objKey);
console.log(weakMap.has(objKey));  // Output: false

// Scope example
let globalVar = "I'm global";

function scopeExample() {
    let localVar = "I'm local";
    console.log(globalVar);  // Accessible
    console.log(localVar);   // Accessible
}

// Closures example
function outerFunction() {
    let outerVar = "I'm from outer function";
    
    return function innerFunction() {
        console.log(outerVar);  // Accessible due to closure
    };
}
const innerFunc = outerFunction();
innerFunc();  // Output: I'm from outer function

// Destructuring objects
let person2 = { firstName: 'John', lastName: 'Doe' };
let { firstName, lastName } = person2;
console.log(firstName, lastName);  // Output: John Doe

// Destructuring arrays
let [first, second] = [1, 2, 3, 4];
console.log(first, second);  // Output: 1 2

// Regular function
function add(a, b) {
    return a + b;
}

// Arrow function
const addArrow = (a, b) => a + b;

console.log(add(5, 3));       // Output: 8
console.log(addArrow(5, 3));  // Output: 8

const bigNum = 1234567890123456789012345678901234567890n;
console.log(bigNum);  // Output: 1234567890123456789012345678901234567890n

function multiply(a) {
    return function(b) {
        return a * b;
    };
}

const multiplyByTwo = multiply(2);
console.log(multiplyByTwo(4));  // Output: 8

(function() {
    let msg = "I'm an IIFE!";
    console.log(msg);
})();  // Output: I'm an IIFE!

// Prototype
function Person(name) {
    this.name = name;
}
Person.prototype.greet = function() {
    console.log(`Hello, ${this.name}`);
};

let person1 = new Person('John');
person1.greet();  // Output: Hello, John

// Abstraction using classes
class Shape {
    constructor() {
        if (new.target === Shape) {
            throw new Error("Cannot instantiate abstract class");
        }
    }
    
    // Abstract method
    draw() {
        throw new Error("Method 'draw()' must be implemented");
    }
}

// Rectangle class extends Shape
class Rectangle extends Shape {
    draw() {
        console.log("Drawing a rectangle");
    }
}

// Create an instance of Rectangle and call draw method
const rect = new Rectangle();
rect.draw();  // Output: Drawing a rectangle


// Encapsulation using classes
class BankAccount {
    constructor(balance) {
        this._balance = balance;  // Private variable
    }

    // Getter method
    get balance() {
        return this._balance;
    }

    // Setter method
    set balance(amount) {
        if (amount < 0) {
            console.log("Invalid amount");
            return;
        }
        this._balance = amount;
    }

    // Method to deposit money
    deposit(amount) {
        this._balance += amount;
    }

    // Method to withdraw money
    withdraw(amount) {
        if (amount > this._balance) {
            console.log("Insufficient balance");
            return;
        }
        this._balance -= amount;
    }
}

// Create an instance of BankAccount
const acc = new BankAccount(1000);

// Deposit and withdraw money
acc.deposit(500);
console.log(acc.balance);  // Output: 1500

acc.withdraw(200);
console.log(acc.balance);  // Output: 1300

// Inheritance using classes
class Animal {
    constructor(name) {
        this.name = name;
    }

    // Method
    speak() {
        console.log(`${this.name} makes a sound.`);
    }
}

// Dog class extends Animal
class Dog extends Animal {
    speak() {
        console.log(`${this.name} barks.`);
    }
}

// Create an instance of Dog and call speak method
const dog1 = new Dog('Buddy');
dog1.speak();  // Output: Buddy barks.

// Polymorphism using classes
class Vehicle {
    constructor(name) {
        this.name = name;
    }

    // Method
    displayType() {
        console.log("I am a Vehicle");
    }
}

// Car class extends Vehicle
class Car extends Vehicle {
    displayType() {
        console.log("I am a Car");
    }
}

// Truck class extends Vehicle
class Truck extends Vehicle {
    displayType() {
        console.log("I am a Truck");
    }
}

// Create instances of Car and Truck
const car = new Car('Car');
const truck = new Truck('Truck');

// Call displayType method
car.displayType();    // Output: I am a Car
truck.displayType();  // Output: I am a Truck

