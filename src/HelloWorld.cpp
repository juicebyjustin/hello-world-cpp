//============================================================================
// Name        : HelloWorld.cpp
// Author      : Justin 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "sum.h"
#include "print.cpp"
#include "my_class.h"

using namespace N;
using namespace std;

// Sum 2 numbers and print out result.
void doSum(){
	int a = 1, b = 1;

	int sum = sumOfTwoNumbers(a, b);
	cout << "The sum of a (" << a << ") & b (" << b << ") = " << sum << endl;
}

// Showing class definition in HelloWorld file.
// src: https://www.w3schools.com/cpp/cpp_classes.asp
class Car {
  public:
    string brand;   
    string model;
    int year;

	void doSomething(){
		cout << "I'm a car, beep beep." << endl;
	}
};

int main() {
	printHelloWorld();
	doSum();

	Car car;
	car.doSomething();

	// src: https://docs.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-160#sample-header-file
	// 
	my_class myClass;
	//myClass.do_something();
	/* ^^^^^ Error on Mac M1. 
		Undefined symbols for architecture arm64:
		"N::my_class::do_something()", referenced from:
			_main in HelloWorld-216a50.o
		ld: symbol(s) not found for architecture arm64
		clang: error: linker command failed with exit code 1 (use -v to see invocation)

		Research: The link below looks helpful but I'm not sure any code in my_class is C
				  since this came from Microsofts C++ docs.
		link: https://stackoverflow.com/questions/3789340/combining-c-and-c-how-does-ifdef-cplusplus-work
	*/

	return 0;
}
