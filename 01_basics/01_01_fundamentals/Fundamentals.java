import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Scanner;

public class Fundamentals {

    public static void main(String[] args) {
        // User input
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
        scanner.close();

        // Output
        System.out.println("Hello, " + name + "!");

        // Variables and Data Types
        int age = 25; // Integer variable
        double height = 5.9; // Double variable
        char gender = 'M'; // Character variable

        // If-Else Statement
        if (age >= 18) {
            System.out.println(name + " is an adult.");
        } else {
            System.out.println(name + " is a minor.");
        }

        if (height >= 4) {
            System.out.println(height + " is more than or equal to 4.");
        } else {
            System.out.println(height + " is less than 4.");
        }

        // Switch Statement
        switch (gender) {
            case 'M':
                System.out.println(name + " is a Male.");
                break;
            case 'F':
                System.out.println(name + " is a Female.");
                break;
            default:
                System.out.println("Gender not specified.");
        }

        // For Loop
        System.out.println("Printing numbers from 1 to 5:");
        for (int i = 1; i <= 5; i++) {
            System.out.println(i);
        }

        // While Loop
        int count = 1;
        while (count <= 3) {
            System.out.println("Count: " + count);
            count++;
        }

        // Arrays
        int[] numbers = { 1, 2, 3, 4, 5 };
        System.out.println("Array elements:");
        for (int num : numbers) {
            System.out.println(num);
        }

        // Strings and built-in methods
        String greeting = "Hello, World!";
        System.out.println("Length of the string: " + greeting.length());
        System.out.println("Uppercase: " + greeting.toUpperCase());
        System.out.println("Substring: " + greeting.substring(0, 5));

        // Pointers (Java doesn't have pointers like C/C++)
        // However, you can consider references in Java as somewhat similar to pointers
        // in other languages.

        // Dynamic Memory Allocation (Java handles memory automatically, no need for
        // explicit allocation)

        // Pass by Value vs Pass by Reference
        int number = 10;
        System.out.println("Value Before modification (pass by value): " + number);
        modifyValue(number); // Pass by value
        System.out.println("Value after modification (pass by value): " + number);

        int[] arr = { 1, 2, 3 };
        System.out.println("Array after modification (pass by reference):");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
        modifyArray(arr); // Pass by reference
        System.out.println("Array after modification (pass by reference):");
        for (int num : arr) {
            System.out.print(num + " ");
        }

        // Example 1: length() - Returns the length of the string
        String str1 = "Hello, World!";
        int length = str1.length(); // Returns 13
        System.out.println("Length of str1: " + length);

        // Example 2: charAt(int index) - Returns the character at the specified index
        char charAtIndex = str1.charAt(7); // Returns 'W'
        System.out.println("Character at index 7: " + charAtIndex);

        // Example 3: substring(int beginIndex) - Returns a substring from the specified
        // index to the end
        String substring1 = str1.substring(7); // Returns "World!"
        System.out.println("Substring from index 7: " + substring1);

        // Example 4: substring(int beginIndex, int endIndex) - Returns a substring from
        // beginIndex to endIndex-1
        String substring2 = str1.substring(0, 5); // Returns "Hello"
        System.out.println("Substring from index 0 to 5: " + substring2);

        // Example 5: concat(String str) - Concatenates the specified string to the end
        // of this string
        String str2 = " How are you?";
        String concatString = str1.concat(str2); // Returns "Hello, World! How are you?"
        System.out.println("Concatenated string: " + concatString);

        // Example 6: toUpperCase() - Converts all characters in the string to uppercase
        String upperCaseStr = str1.toUpperCase(); // Returns "HELLO, WORLD!"
        System.out.println("Uppercase string: " + upperCaseStr);

        // Example 7: toLowerCase() - Converts all characters in the string to lowercase
        String lowerCaseStr = str1.toLowerCase(); // Returns "hello, world!"
        System.out.println("Lowercase string: " + lowerCaseStr);

        // Example 8: replace(char oldChar, char newChar) - Replaces all occurrences of
        // specified oldChar with newChar
        String replacedStr = str1.replace('o', '0'); // Returns "Hell0, W0rld!"
        System.out.println("Replaced string: " + replacedStr);

        // Example 9: indexOf(String str) - Returns the index within this string of the
        // first occurrence of the specified substring
        int index = str1.indexOf("World"); // Returns 7
        System.out.println("Index of 'World': " + index);

        // Example 10: contains(CharSequence sequence) - Returns true if the string
        // contains the specified sequence of characters
        boolean contains = str1.contains("World"); // Returns true
        System.out.println("Does str1 contain 'World'? " + contains);

        // Example 11: startsWith(String prefix) - Returns true if the string starts
        // with the specified prefix
        boolean startsWith = str1.startsWith("Hello"); // Returns true
        System.out.println("Does str1 start with 'Hello'? " + startsWith);

        // Example 12: endsWith(String suffix) - Returns true if the string ends with
        // the specified suffix
        boolean endsWith = str1.endsWith("!"); // Returns true
        System.out.println("Does str1 end with '!'? " + endsWith);

        // Creating an object of the Dog class (Object Creation)
        Dog myDog = new Dog("Buddy");

        // Calling methods (Polymorphism)
        myDog.makeSound(); // Polymorphism: Even though the reference type is Animal, it calls Dog's
                           // makeSound
        myDog.fetch(); // Using Dog's specific method

        // Creating an object of the Animal class (Object Creation)
        Animal myAnimal = new Animal("Lion");

        // Calling method (Polymorphism)
        myAnimal.makeSound(); // Polymorphism: Calls Animal's makeSound method

        // Create an ArrayList of Strings
        ArrayList<String> list = new ArrayList<>();

        // Add elements to the ArrayList
        list.add("Apple");
        list.add("Banana");
        list.add("Cherry");

        // Print the ArrayList
        System.out.println("ArrayList: " + list);

        // Check if an element exists
        System.out.println("Contains 'Apple': " + list.contains("Apple"));

        // Remove an element
        list.remove("Banana");
        System.out.println("After removing 'Banana': " + list);

        // Check if the ArrayList is empty
        System.out.println("Is the list empty? " + list.isEmpty());

        // Get the size of the ArrayList
        System.out.println("Size of the list: " + list.size());

        // Create a LinkedList of Integers
        LinkedList<Integer> liList = new LinkedList<>();

        // Add elements to the LinkedList
        liList.add(10);
        liList.add(20);
        liList.add(30);

        // Print the LinkedList
        System.out.println("LinkedList: " + liList);

        // Check if an element exists
        System.out.println("Contains 20: " + liList.contains(20));

        // Remove an element
        liList.remove(Integer.valueOf(20));
        System.out.println("After removing 20: " + liList);

        // Create a HashSet of Strings
        HashSet<String> set = new HashSet<>();

        // Add elements to the HashSet
        set.add("Red");
        set.add("Green");
        set.add("Blue");

        // Print the HashSet
        System.out.println("HashSet: " + set);

        // Check if an element exists
        System.out.println("Contains 'Red': " + set.contains("Red"));

        // Remove an element
        set.remove("Green");
        System.out.println("After removing 'Green': " + set);

        // Create a HashMap of <String, Integer>
        HashMap<String, Integer> map = new HashMap<>();

        // Add key-value pairs to the HashMap
        map.put("One", 1);
        map.put("Two", 2);
        map.put("Three", 3);

        // Print the HashMap
        System.out.println("HashMap: " + map);

        // Check if a key exists
        System.out.println("Contains key 'Two': " + map.containsKey("Two"));

        // Remove a key-value pair
        map.remove("Two");
        System.out.println("After removing key 'Two': " + map);

        // Get value for a key
        System.out.println("Value for key 'One': " + map.get("One"));
    }

    // Pass by Value
    public static void modifyValue(int num) {
        num = num * 2;
    }

    // Pass by Reference (using an array as an example)
    public static void modifyArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            arr[i] *= 2;
        }
    }
}

// Parent class (Superclass) - Represents a general animal
class Animal {
    // Instance variable (Encapsulation)
    private String name; // This variable is private to ensure data hiding

    // Constructor - Initializes the 'name' of the animal
    public Animal(String name) {
        this.name = name; // 'this' keyword refers to the current object instance
    }

    // Method - Represents a general sound an animal makes
    public void makeSound() {
        System.out.println(name + " makes a sound"); // Outputs the sound the animal makes
    }

    // Getter method to access the 'name' variable (Encapsulation)
    public String getName() {
        return name;
    }
}

// Child class (Subclass) inheriting from Animal class
class Dog extends Animal {
    // Constructor - Calls the constructor of the superclass (Animal)
    public Dog(String name) {
        super(name); // 'super' keyword is used to call the superclass constructor
    }

    // Overriding method - Provides a specific sound for a Dog
    @Override
    public void makeSound() {
        System.out.println(super.getName() + " barks"); // Outputs the sound a dog makes
    }

    // Additional method specific to Dog class - Demonstrates inheritance and
    // encapsulation
    public void fetch() {
        System.out.println("Fetching the ball"); // Outputs action specific to a Dog
    }
}