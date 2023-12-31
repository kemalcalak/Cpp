﻿#include "complexNumber.h"

#include <iostream>

int main()
{
	complexNumber number1(4, 5);
	cout << "Real:" << number1.getReal() << endl;
	cout << "Imag:" << number1.getImag() << endl;
	number1.displayComplex();

	complexNumber number2(4, 5);
	cout << "Real:" << number2.getReal() << endl;
	cout << "Imag:" << number2.getImag() << endl;
	number2.displayComplex();

	complexNumber number3(number2);
	number3.displayComplex();
	number3.setValue(4, -7);
	number3.displayComplex();

	cout << "--------------------------------------" << endl;
	complexNumber resultMain;
	resultMain = number1.addComplex(number2);
	resultMain.displayComplex();

	cout << "--------------------------------------" << endl;
	complexNumber resultMain2;
	resultMain2 = number1.subtractComplex(number2);
	resultMain2.displayComplex();

	cout << "--------------------------------------" << endl;
	complexNumber resultMain3;
	resultMain3 = number1.multiplyConstant(4);
	resultMain3.displayComplex();

	cout << "--------------------------------------" << endl;
	complexNumber resultMain4;
	resultMain4 = number1.multiplyComplex(number2);
	resultMain4.displayComplex();

}

