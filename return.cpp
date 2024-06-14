#include <iostream>
using namespace std;

double square(double lenght);
double cube (double lenght);

int main()
{
	double lenght = 5.0;
	double area = square(lenght);
	double volume = cube(lenght);

	cout << "Area is " << area << "cm^2\n";
	cout << "Volume is " << volume << "cm^3\n";

	return 0;
}
double square(double lenght){
	return lenght * lenght;
}
double cube(double lenght){
	return lenght * lenght * lenght;
}