//Lab_1.1.cpp
#include <iostream>
#include "Line.h"

using namespace std;

Line makeNumber2(double A, double B)
{
	Line l;
	if (!l.Init(A, B))
		cout << "wrong argument to Init (first)" << endl;
	return l;
}

int main()
{
	Line n;
	n.Init(10, 10);
	n.Display();
	n.root(5);
	n.Display();

	Line k;
	k.Read();
	k.Display();
	k.root(2);
	k.Display();

	Line i;
	int A, B;
	cout << "first = ? ";
	cin >> A;
	cout << "second = ?";
	cin >> B;
	i = makeNumber2(A, B);
	i.Display();

	return 0;
}