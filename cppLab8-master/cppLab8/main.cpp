#include "cppLAB8.h"

void main()
{
	double r, phi, real, imaginary;
	cout << "Write \"Complex number\" like:\n-module\n-argument\npart of complex number:\nr = ";
	cin >> r;
	cout << "Phi = ";
	cin >> phi;
	real = r * cos(phi * 180 / 3.14);
	imaginary = r * sin(phi * 180 / 3.14);
	Complex z(real, imaginary);
	cout << "Original z: \n z = " << z << endl;
	cout << "Result z: \n z= " << y(z);
}