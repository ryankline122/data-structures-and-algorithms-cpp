#include <iostream>
#include <string>

using namespace std;

int main(){

    // Data Types
        int number = 10;
        double number_with_decimal = 9.99;  // Double consumes 8 bytes of memory
        float another_number_with_decimal = 5.50; // Float consumes 4 bytes of memory
        char character = 'c';   // Must use single quotes. Can also use ASCII values
        string text = "Word";   // Not built-in, mus include <strings> header
        bool isTrue = true;

    // Output text using 'cout'
        cout << "Hello, World!\n";

    // User Input
        int input;
        cin >> input;

    // Conditionals

        if(10 > 20){
            cout << "Something's not right\n";
        }else{
            cout << "That's better\n";
        }

        // Ternary Operator
        string result = (10 > 20) ? "Something's not right." : "That's better.";

        // Switch Statement
        int x = 0;
        switch(x) {
        case 0:
            cout << "I'm 0.\n";
            break;
        case 1:
            cout << "I'm 1.\n";
            break;
        default:
        cout << "Idk what I am.\n";
        }

    // Loops

        // While
            int i = 0;
            while (i < 5) {
                cout << i << "\n";
                i++;
            }

        // Do-While
            int i = 0;
            do {
                cout << i << "\n";
                i++;
            }
            while (i < 5);

        // For
            for (int i = 0; i < 5; i++) {
                cout << i << "\n";
            }


    // Arrays

        // Initializations
            int nums[] = {};
            string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
            char letters[26];

        // Operations
            cout << sizeof(cars); // returns size in bytes
            cout << sizeof(cars) / sizeof(int); // returns the number of elements

        // Looping through arrays
            int myNumbers[5] = {10, 20, 30, 40, 50};

            for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
                cout << myNumbers[i] << "\n";
            }

        // Alternative method to the one shown above (version 11+)
            for (int i : myNumbers) {
                cout << i << "\n";
            }

        // Multi-Dimensional Arrays
            int grid[3][3] = {
                {1,2,3},
                {4,5,6},
                {7,8,9}
            };

    // Structs
        struct person{
            string name;
            int age;
        };

        person me;
        me.name = "Ryan";
        me.age = 22;

    // References
        person &someone = me;    // 'someone' refers to 'me'
        cout << &me;    //outputs memory address of 'me'

    // Pointers - stores the memory address as its value

        string food = "Pizza"; // A food variable of type string
        cout << food;  // Outputs the value of food (Pizza)
        cout << &food; // Outputs the memory address of food

        string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food


    // Functions
        aFunction();
        returnNumber(2);
        int num1 = plusFunc(7,5);
        double num2 = plusFunc(5.5, 3.7);


    // Classes
        MyClass someClass(1, "idk");


    // Exceptions
    try {
            int age = 15;
            if (age >= 18) {
                cout << "Access granted - you are old enough.";
            } else {
                throw (age);
            }
        }
        catch (int myNum) {
            cout << "Access denied - You must be at least 18 years old.\n";
            cout << "Age is: " << myNum;
        }


    return 0;
}



void aFunction(){
    cout << "Who called me?\n";
}

int returnNumber(int num){
    return num;
}

// Default parameters
void defaultFunction(string msg = "nothing important"){
    cout << msg;
}

// Pass by reference
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

// Function Overloading
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

// Recursion
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}



// OOP
class MyClass{          // Class Declaration

    public:             // Access specifier
        int num;
        string str;

        // Constructor
        MyClass(int x, string s){
            num = x;
            str = s;
        }

        // Method declaration
        void myMethod(){
            cout << "This is my method.\n";
        }

        // Outside method declaration
        void anotherMethod();

        // Getter/Setters
        void setNum(int x){
            num = x;
        }

        int getNum(){
            return num;
        }

    // All members of classes are private by default if not specified
    private:
        // Only accessible within class.
        int x;
        int y;
};

// Define a function outside of a class
void MyClass::anotherMethod(){
    cout << "It's me again :) \n";
}


// Inheritence

    // Base class
    class Vehicle {
    public:
        string brand = "Ford";
        void honk() {
        cout << "Tuut, tuut! \n" ;
        }
    };

    // Derived class
    class Car: public Vehicle {
    public:
        string model = "Mustang";
    };

