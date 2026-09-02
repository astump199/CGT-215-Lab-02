// CGT-215-Lab-02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "Hello, my name is Adam And i will solve the equation Ax+b=0 for x" << endl;
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: " << endl;
	cin >> B;
	cout << "Solving for "<< A <<"x+"<< B <<"=0"<<endl;
	B = B * -1;
	X = B / A;
	cout << "The answer is:" << endl;
	cout << "x=" << X << endl;
}