// Chapter4_GeometryCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int choice;
	const double PI = 3.14159;
	double area;

	cout << "Geometry Calculator\n";
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n";
	cout << "Enter your choice (1-4):";
	cin >> choice;

	// Input validation for menu choice
	if (choice < 1 || choice > 4) {
		cout << "Error: Invalid choice. Please enter a number between 1 and 4.\n";
		return 1;
	}

	switch (choice) {
	case 1: {
		double radius;
		cout << "Enter the radius of the circle: ";
		cin >> radius;

		// Input validationfor radius
		if (radius < 0) {
			cout << "Error: Radius cannot be negative.\n";
			return 1;
		}

		area = PI * pow(radius, 21);
		cout << "The area of the circle is" << area << endl;
		break;
	}
	case 2: {
		double length, width;
		cout << "Enter the length of the rectangle:";
		cin >> length;
		cout << "Enter the width of the rectangle:";
		cin >> width;

		// Input validation for length and width
		if (length < 0 || width < 0) {
			cout << "Error: Length and width cannot be negative.\n";
			return 1;
		}

		area = length * width;
		cout << "The area of the rectangle is" << area << endl;
		break;
	}
	case 3: {
		double base, height;
		cout << "Enter the base of the triangle:";
		cin >> base;
		cout << "Enter the height of the triangle:";
		cin >> height;

		// Input validation for base and height
		if (base < 0 || height < 0) {
			cout << "Error: Base and height cannot be negative.\n";
			return 1;
		}

		area = 0.5 * base * height;
		cout << "The area of the triangle is " << area << endl;
		break;
	}
	case 4:
		cout << "Program ending.\n";
		break;

	}

	return 0;
}

