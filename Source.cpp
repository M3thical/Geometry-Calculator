#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

///prototype function 
void printMenu();
double circleArea(); //A = πr^2
double rectangleArea(); //A = lw
double triangleArea(); //A = ½bh 
double circleCircumference(); //C = 2πr
double rectanglePerimeter(); //P = 2l+2w
double trianglePerimeter(); //P = a + b + c

//function print menu
void printMenu() {
	cout << "This is a geometry calculator " << endl
		<< "Choose what you would like to calculate " << endl
		<< "1. Find the area of a circle " << endl
		<< "2. Find the area of a rectangle" << endl
		<< "3. Find the area of a triangle " << endl
		<< "4. Find the circumference of a circle " << endl
		<< "5. Find the perimeter of a rectangle " << endl
		<< "6. Find the perimeter of a triangle" << endl
		<< "Enter the number of your choice: ";
}

//function returns area of a circle
/*1*/double circleArea() {
	double A , r; //local variables
	cout << "Enter radius: ";
	cin >> r; //takes the radius
	A = M_PI * (pow(r, 2)); //area of a circle formula
	cout << "the area of the circle is: ";
	return A;
}
//function returns the area of a rectangle 
/*2*/double rectangleArea() {
	double A , l ,w; //local variables
	cout << "Enter the length: ";
	cin >> l; //takes the length
	cout << "Enter the width: ";
	cin >> w; //takes the width
	A = (l * w); //rectangle area formula
	cout << "the area of the rectangle is: ";
	return A;
}
//function returns the area of a triangle 
/*3*/double triangleArea() {
	double A , b , h; //local variables
	cout << "Enter the base: ";
	cin >> b; //takes the base
	cout << "Enter the height: ";
	cin >> h; //takes the height 
	A = 0.5 * (b * h); //triangle area formula
	cout << " the area of the triangle is: ";
	return A;
}
//function returns circumference
/*4*/double circleCircumference() {
	double C , r; //local variables
	cout << "Enter the radius: ";
	cin >> r; //takes the radius
	C = 2 * (M_PI * r); //circle circumference formula
	cout << "the circumference of the circle is: ";
	return C;
}
//function returns the perimeter of the rectangle 
/*5*/double rectanglePerimeter() {
	double P , l , w; //local variables
	cout << "Enter the length: ";
	cin >> l; //takes the length 
	cout << "Enter the width: ";
	cin >> w; //takes the width 
	P = (2 * l) + (2 * w); //perimeter of the rectangle formula
	cout << "the perimeter of the rectangle is: ";
	return P;
}
//function returns the perimeter of the triangle
double trianglePerimeter() {
	double P, a, b, c; //local variables
	cout << "Enter lengths of side a: ";
	cin >> a; //takes lengths of side a
	cout << "Enter lengths of side b: ";
	cin >> b; //takes lengths of side b
	cout << "Enter lengths of side c: ";
	cin >> c; //takes lengths of side c
	P = (a + b + c); //perimeter of the triangle formula
	cout << "The perimeter of the triangle is: ";
	return P;
}

int main() {
	//global variable
	int selection;

	//printing menu
	printMenu();
	cin >> selection; //takes number selected by user 
	cout << '\n';

	//switch statement
	switch (selection){

	 case 1:
		cout << circleArea() << endl;
		break;

	 case 2:
		cout << rectangleArea() << endl;
		break;

	 case 3:
		cout << triangleArea() << endl;
		break;

	 case 4:
		cout << circleCircumference() << endl;
		break;

	 case 5:
		cout << rectanglePerimeter() << endl;
		break;

	 case 6:
		 cout << trianglePerimeter() << endl;
		 break;

	 default:
		 cout << "invalid selection" << endl;
		 break;
	}

	return 0;

}