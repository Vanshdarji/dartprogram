#include <string>
#include<iostream>
#include<control>
using namespace std;


// Dart SDK and Flutter Installation:
1. Dart SDK:

// Visit the Dart SDK official website to download the Dart SDK.
// Follow the installation instructions for your operating system.
2. Flutter Installation:

// Visit the Flutter official website for Flutter installation.
// Follow the instructions for your operating system.
3. Android Studio Configuration:

// Install Android Studio if not already installed.
// Open Android Studio, go to Preferences (or Settings) and install the Flutter plugin.
4. Flutter Doctor:

// Open a terminal and run flutter doctor.
// Address any issues reported by Flutter Doctor. It helps ensure your development environment is set up correctly.
// Dart Basics:
1. Introduction to Dart:

// Dart is a programming language optimized for building mobile, desktop, server, and web applications.
// It is object-oriented, class-based, and has C-style syntax.
2. Data Types in Dart:

// Dart has various data types, including int, double, String, bool, etc.

int age = 21;
double height = 6.1;
string name = 'vansh';
bool isStudent = true;
3. string Interpolations: 

// Dart supports string interpolations using ${variable} syntax.

print('My name is $name and I am $age years old.');
4. Operators:

// Dart supports various operators such as arithmetic, comparison, logical, etc.

int a = 5, b = 3;
print(a + b);  // Addition
print(a > b);  // Comparison
5. Control Statements:

Conditional Statements:

if statement, if..else statement, nested if.
switch statement.
Looping Statements:

for loop, while loop, for..in loop.
Jumping Statements:

break, continue, return.
6. Working with Collections:

// Dart provides List, Set, and Map for working with collections.

Copy code
List<int> numbers = [1, 2, 3];
Set<string> names = {'vansh', 'Jan'};
Map<string, int> ages = {'vansh': 21, 'Jan': 24};
7. Functions:

// Dart supports functions.

int add(int a, int b) {
  return a + b;
}

void main() {
  print(add(3, 4));
}
// 1. Advance Dart programming
class Animal {
  void makeSound() {
    print('Some generic sound');
  }
}

class Dog extends Animal {
  @override
  void makeSound() {
    print('Woof! Woof!');
  }
}

void main() {
  Animal animal = Dog();
  animal.makeSound(); // Polymorphism
}
// 2. Keywords:

this, super, static, async.
// Utilize them in various scenarios based on the context.
// This is a broad overview, and you can delve deeper into each topic based on your requirements. Explore the Dart documentation and Flutter documentation for more detailed information and examples.