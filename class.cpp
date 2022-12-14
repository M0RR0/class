#define _CRT_SECURE_NO_WARNINGS
#define пи 3.1415926535

#include <iostream>
#include <cmath>
#include <limits>

double tret = 1 / 3;
using namespace std;

class circle {
protected:
	double radius;
	double square;
	double get_square(double radi) { return(radi * radi * пи); }
public:
	circle() { cout << "\nвведите радиус: ", cin >> radius; }
	double g_square() { return (get_square(radius)); }
};

class son_circle :public circle {
private:
	double height;
public:
	son_circle() :circle() { cout << "\nвведите высоту: ", cin >> height; }
	double get_rebro() { return(pow(height * get_square(radius) / 3, tret)); }
};
void main()
{
	setlocale(LC_ALL, "Russian");
	circle one;
	son_circle two;
	cout << abs(one.g_square() - two.g_square()) << endl;
	cout << two.get_rebro();
}