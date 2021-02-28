//Line.h
#pragma once

class Line
{
	double first;
	double second;
		
public:
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }
	void SetFirst(double value);
	void SetSecond(double value);

	bool Init(double A, double B);
	void Display() const;
	void Read();

	void root(double x);
};

