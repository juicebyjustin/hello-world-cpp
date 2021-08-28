//============================================================================
// Name        : HelloWorld.cpp
// Author      : Justin Mooney
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "sum.h"

using namespace std;

void printHelloWorld(){
    cout << "Hello World. :)" << endl;
}

int main() {
	printHelloWorld();

	int a = 1, b = 1;

	int sum = sumOfTwoNumbers(a, b);
	cout << "Sum of a (" << a << ") & b (" << b << ") = " << sum;
	return 0;
}
