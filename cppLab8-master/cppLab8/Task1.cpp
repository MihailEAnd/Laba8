#include "cppLAB8.h"
double Complex::getReal() const
{
	return this->real;
}

double Complex::getImaginary() const
{

	return this->imaginary;
}

void Complex::setReal(double real)
{
	this->real = real;
}
void Complex::setImaginary(double imaginary)
{
	this->imaginary = imaginary;
}

Complex::Complex(double real, double imaginary)
	:real(real), imaginary(imaginary) { }

ostream& operator << (ostream& stream, const Complex& z)
{
	if (z.getImaginary() >= 0)
	{
		stream << z.getReal() << "+" << z.getImaginary() << "*i";
	}
	else
	{
		stream << z.getReal() << z.getImaginary() << "*i";
	}
	return stream;
}


Complex operator +(Complex a, Complex b)
{
	return Complex(a.getReal() + b.getReal(), a.getImaginary() + b.getImaginary());
}

Complex operator *(Complex a, Complex b)
{
	return Complex(((a.getReal() * b.getReal()) - (b.getImaginary() * a.getImaginary())), ((a.getReal() * b.getImaginary()) + (b.getReal() * a.getImaginary())));
}

Complex th(const Complex& z)
{
	return Complex(sinh(z.getReal()) * cosh(z.getReal())/(pow(cos(z.getImaginary()), 2) + pow(sinh(z.getReal()), 2)) , sin(z.getImaginary() * cos(z.getImaginary() / (pow(cos(z.getImaginary()), 2) + pow(sinh(z.getReal()), 2)))));
}
Complex operator -(Complex a, Complex b)
{
	return Complex(a.getReal() - b.getReal(), a.getImaginary() - b.getImaginary());
}

Complex operator /(Complex a, Complex b)
{
	return Complex(((a.getReal() * b.getReal()) - (a.getImaginary() * b.getImaginary() * (-1))) / (pow(b.getReal(), 2) + pow(b.getImaginary(), 2)), ((a.getReal() * b.getImaginary() * (-1)) + (a.getImaginary() * b.getReal())) / (pow(b.getReal(), 2) + pow(b.getImaginary(), 2)));
}
Complex y(const Complex& z)
{

	return Complex(1, 0) - Complex(pow(z.getReal(), 5), pow(z.getImaginary(), 5)) - th(z/Complex(2,0));
}