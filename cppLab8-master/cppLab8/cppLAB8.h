#pragma once
#include "iostream"
#include "math.h"
using namespace std;

class Complex
{
	double real, imaginary;
public:
	double getReal() const;
	double getImaginary() const;
	void setReal(double real);
	void setImaginary(double imaginary);
	Complex(double real, double imaginary);
	friend ostream& operator << (ostream& stream, const Complex& z);
	friend Complex operator +(Complex a, Complex b);
	friend Complex operator *(Complex a, Complex b);
	friend Complex operator -(Complex a, Complex b);
	friend Complex operator /(Complex a, Complex b);
	friend Complex tg(const Complex& z);
	friend Complex y(const Complex& z);
};