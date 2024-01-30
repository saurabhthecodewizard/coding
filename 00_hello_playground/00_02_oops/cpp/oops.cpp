#include <iostream>

using namespace std;

class Person; // forward definition needed
// another class in which function is declared

class Plant
{
public:
    void printPersonDetails(Person &person);
};

// Class is a user-defined data type, which holds its own data members and member functions, which can be
// accessed and used by creating an instance of that class. A class is like a blueprint for an object.
// For Example: Consider the Class of Cars. There may be many cars with different names and brands
// but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc.
// So here, the Car is the class, and wheels, speed limits, and mileage are their properties.
class Person
{
    int id;      // Data members
    string name; // Without Access specifiers, by default is private

    // The class members declared as private can be accessed only by the member functions inside the class.
private:                 // Access Specifiers
    void getDetails() {} // Member Functions

    // All the class members declared under the public specifier will be available to everyone.
public:
    string public_name;

    // Constructor in C++ is a special method that is invoked automatically at the time of object creation. 
    // It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. 
    // It constructs the values i.e. provides data for the object which is why it is known as constructor.

    // Default constructor is the constructor which doesn’t take any argument. It has no parameters. It is also called a zero-argument constructor.
    Person()
    {
        this->id = 1;
        this->name = "Private Name";
        this->public_name = "Public Name";
    }
    // Note: Even if we do not define any constructor explicitly, the compiler will automatically provide a default constructor implicitly.
    // Whenever we define one or more non-default constructors( with parameters ) for a class, a default constructor( without parameters ) 
    // should also be explicitly defined as the compiler will not provide a default constructor in this case. However, it is not necessary 
    // but it’s considered to be the best practice to always define a default constructor. 

    // It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. 
    // To create a parameterized constructor, simply add parameters to it the way you would to any other function. 
    // When you define the constructor’s body, use the parameters to initialize the object. 
    Person(int id, string name, string public_name)
    {
        this->id = id;
        this->name = name;
        this->public_name = public_name;
    }

    // A copy constructor is a member function that initializes an object using another object of the same class.
    Person(Person &person)
    {
        this->id = person.id;
        this->name = person.name;
        this->public_name = person.public_name;
    }

    void printDetails();

    string getPublicName()
    {
        return public_name;
    }

    // Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed. 
    // Meaning, a destructor is the last function that is going to be called before an object is destroyed.
    ~Person() 
    {
        cout << "Destructor" << endl;
    }

protected:
    string secret;

    // Like a friend class, a friend function can be granted special access to private and protected members of a class in C++.
    // They are the non-member functions that can access and manipulate the private and protected members of the class for they are declared as friends.
    friend class Animal;
    friend void someGlobalFunction(Person &person);
    friend void Plant::printPersonDetails(Person &person);
};

// Outside class definition with :: operator
void Person::printDetails()
{
    cout << "Print person class outside member function" << endl;
}

class Child : Person
{
public:
    void setSecret(string secret)
    {
        this->secret = secret;
    }

    // The protected access modifier is similar to the private access modifier in the sense that it can’t be
    // accessed outside of its class unless with the help of a friend class. The difference is that the class members
    // declared as Protected can be accessed by any subclass (derived class) of that class as well.
    void accessSecret()
    {
        cout << secret << endl;
    }
};

class Animal
{
public:
    void printPersonDetails(Person &person)
    {
        cout << "Person details:-" << endl;
        cout << "Id: " << person.id << endl;
        cout << "Name: " << person.name << endl;
    }

    // Whenever we want to control the destruction of objects of a class, we make the destructor private. 
    // For dynamically created objects, it may happen that you pass a pointer to the object to a function and the function deletes the object.
    //  If the object is referred after the function call, the reference will become dangling.
    void destruct() {
        delete this;
    }

private:
    ~Animal() {
        cout << "Animal Destructor: " << endl;
    }
};

// Class member friend function
void
Plant::printPersonDetails(Person &person)
{
    cout << "Person details in Plant:-" << endl;
    cout << "Id: " << person.id << endl;
    cout << "Name: " << person.name << endl;
}

// Global friend function
void someGlobalFunction(Person &person)
{
    cout << "Person details in Global function:-" << endl;
    cout << "Id: " << person.id << endl;
    cout << "Name: " << person.name << endl;
}

int main()
{
    // An Object is an identifiable entity with some characteristics and behavior. An Object is an instance of a Class.
    // When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
    Person person;
    Child child;
    Animal* animal = (Animal*)malloc(sizeof(Animal));
    Plant plant;

    person.public_name = "Name";

    child.setSecret("Child Secret");

    person.printDetails();

    cout << person.getPublicName() << endl;
    child.accessSecret();
    cout << endl;

    animal->printPersonDetails(person);
    someGlobalFunction(person);
    plant.printPersonDetails(person);

    animal->destruct();

    return 0;
}