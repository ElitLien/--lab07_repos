//Line.cpp
#include "Line.h"
#include "iostream"

using namespace std;

void Line::SetFirst(double value)
{
	first = value;	
}

void Line::SetSecond(double value)
{
	second = value;
}

bool Line::Init(double A, double B)
{
	second = B;
	if (A != 0)
	{
		first = A;
		return true;
	}
	else
	{
		return false;
	}
}

void Line::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}

void Line::Read()
{
	int A, B;
	cout << "first = ? ";
	cin >> A;
	do {
		cout << "second = ?";
		cin >> B;
	} while (!Init(A, B));
}

void Line::root(double x)
{
	double y;
	y = sqrt(first * x + second);
	cout << "y = " << y << endl;
}

