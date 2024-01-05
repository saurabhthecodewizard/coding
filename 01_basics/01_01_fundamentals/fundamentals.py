# Input & Output
# name = input("Enter your name: ")
# print("Hello,", name)

# Data Types: int, float, str, bool, list, tuple, dictionary
integer_variable = 10
float_variable = 10.5
string_variable = "Hello"
boolean_variable = True
list_variable = [1, 2, 3, 4]
tuple_variable = (1, 2, 3, 4)
dictionary_variable = {'key1': 'value1', 'key2': 'value2'}

# If-Else Statement
x = 10
if x > 5:
    print("x is greater than 5")
elif x == 5:
    print("x is equal to 5")
else:
    print("x is less than 5")

# Switch-like functionality using dictionary
def switch_case(argument):
    switcher = {
        1: "January",
        2: "February",
        3: "March"
    }
    return switcher.get(argument, "Invalid month")

month = switch_case(2)
print("2nd month" + month)

# Arrays (List in Python)
numbers = [1, 2, 3, 4, 5]

# Strings and String Methods
text = "Hello, World!"
print("Upper case: " + text.upper())
print("Lower case: " + text.lower())
print("Split by ,: " + text.split(','))
print("Find 'world': " + text.find("world"))
new_text = text.replace("world", "Python")
print("Replaced: " + new_text)  # Output: Hello, Python!

# For Loop
print("For Loop:-")
for num in numbers:
    print(num)

# While Loop
print("While Loop:-")
count = 0
while count < 5:
    print(count)
    count += 1

# Functions
def add_numbers(a, b):
    return a + b

result = add_numbers(5, 3)
print("Result of addition:", result)

# Pass by Value vs. Pass by Reference
# Immutable objects (like int, float, string) are passed by value
def modify_value(x):
    x = x + 10
    print("Inside modify_value function:", x)

y = 5
modify_value(y)
print("Outside modify_value function:", y)  # y remains unchanged

# Mutable objects (like list, dictionary) are passed by reference
def modify_list(lst):
    lst.append(4)
    print("Inside modify_list function:", lst)

my_list = [1, 2, 3]
modify_list(my_list)
print("Outside modify_list function:", my_list)  # my_list is modified

# Do-While Loop (Python doesn't have a built-in do-while, but we can simulate it)
print("Do while:-")
i = 0
while True:
    print(i)
    i += 1
    if i >= 5:
        break

# Python primarily uses pass by value
def modify_number(num):
    num += 10

x = 5
modify_number(x)
print(x)  # Output: 5 (original value remains unchanged)

# Modifying mutable objects (like lists) within a function can mimic pass by reference
def modify_list(list1):
    list1.append(10)

my_list = [1, 2, 3]
print("Before append: " + my_list)
modify_list(my_list)
print("After append: " + my_list)  # Output: [1, 2, 3, 10] (list is modified)

# Create a list of squares from 1 to 10
squares = [x**2 for x in range(1, 11)]
print(squares)  # Output: [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]

# Create a list of even numbers from a list
numbers = [1, 4, 2, 5, 3]
even_numbers = [num for num in numbers if num % 2 == 0]
print(even_numbers)  # Output: [4, 2]

# Create a list of pairs (x, y) where x is from 1 to 3 and y is from 4 to 6
pairs = [(x, y) for x in range(1, 4) for y in range(4, 7)]
print(pairs)  # Output: [(1, 4), (1, 5), (1, 6), (2, 4), (2, 5), (2, 6), (3, 4), (3, 5), (3, 6)]

# Create a dictionary with numbers as keys and their squares as values
square_dict = {x: x**2 for x in range(5)}
print(square_dict)  # Output: {0: 0, 1: 1, 2: 4, 3: 9, 4: 16}

# Create a dictionary from two lists, using one as keys and the other as values
keys = ["a", "b", "c"]
values = [1, 2, 3]
dict_from_lists = {key: value for key, value in zip(keys, values)}
print(dict_from_lists)  # Output: {'a': 1, 'b': 2, 'c': 3}

# Create a dictionary with words as keys and their lengths as values, only for words starting with 'a'
words = ["apple", "banana", "cherry", "apricot"]
word_lengths = {word: len(word) for word in words if word.startswith("a")}
print(word_lengths)  # Output: {'apple': 5, 'apricot': 7}

import re

# Check if a string contains a phone number pattern
text = "My phone number is 123-456-7890."
match = re.search(r"\d{3}-\d{3}-\d{4}", text)
if match:
    print("Phone number found:", match.group())

# Extract email addresses from a string
emails = re.findall(r"\b[\w.-]+@[\w.-]+\.\w{2,4}\b", text)
print(emails)

# Validate a password with specific requirements
password = "MyStrongPassword123!"
if re.match(r"^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$", password):
    print("Password is valid.")
else:
    print("Password is not valid.")

from collections import Counter

# Count the frequency of words in a text
text = "apple banana apple cherry apple"
word_counts = Counter(text.split())
print(word_counts)  # Output: Counter({'apple': 3, 'banana': 1, 'cherry': 1})

# Classes and Objects
class Dog:  # Define a class
    """Represents a dog."""

    def __init__(self, name, breed):  # Constructor to initialize objects
        self.name = name
        self.breed = breed

    def bark(self):  # Instance method to perform actions
        print("Woof!")

# Create objects (instances) of the class
my_dog = Dog("Fido", "Labrador")
your_dog = Dog("Buddy", "Golden Retriever")

print(my_dog.name, my_dog.breed)  # Access object attributes
my_dog.bark()  # Call object method

# Encapsulation
class BankAccount:
    def __init__(self, balance):
        self.__balance = balance  # Private attribute (accessible only within the class)

    def deposit(self, amount):
        self.__balance += amount

    def withdraw(self, amount):
        if self.__balance >= amount:
            self.__balance -= amount
            return True
        else:
            return False

    def get_balance(self):  # Getter method to access private attribute
        return self.__balance

# Inheritance
class Animal:
    def __init__(self, name):
        self.name = name

    def eat(self):
        print(f"{self.name} is eating.")

class Mammal(Animal):
    def __init__(self, name, hair_color):
        super().__init__(name)  # Call the parent class constructor
        self.hair_color = hair_color

class Dog(Mammal):
    def bark(self):
        print("Woof!")

# Polymorphism
class Shape:
    def area(self):
        raise NotImplementedError("Subclasses must implement this method")

class Rectangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14159 * self.radius**2

shapes = [Rectangle(4, 5), Circle(3)]
for shape in shapes:
    print(shape.area())  # Polymorphic behavior: calls the appropriate area() method

# Abstraction
from abc import ABC, abstractmethod

class Vehicle(ABC):
    @abstractmethod
    def start(self):
        pass

    @abstractmethod
    def stop(self):
        pass

class Car(Vehicle):
    def start(self):
        print("Car started.")

    def stop(self):
        print("Car stopped.")
