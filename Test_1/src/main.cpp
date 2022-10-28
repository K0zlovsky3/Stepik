/*
 * main.cpp
 * Pallindrome
 *  Created on: 27 окт. 2022 г.
 *      Author: konstantin.kozlov_ec
 */


#include <iostream>

int main () {
	using std::cin;
	using std::cout;
	using std::endl;
	int N;
	cin >> N;
	cout << "Output N = " << N << endl;
	int T = N / 1000;
	cout << "Thousands = " << T << endl;
	int H = (N / 100) % 10;
	cout << "Hundreds = " << H << endl;
	int Te = (N / 10) % 10;
	cout << "Tens = " << Te << endl;
	int U = N % 10;
	cout << "Units = " << U << endl;
	cout << endl;
	int Calc1 = (T - U) * (T - U);
	cout << "Summ1 = " << Calc1 << endl;
	int Calc2 = (H - Te) * (H - Te);
	cout << "Summ2 = " << Calc2 << endl;
	int Calc3 = Calc1 + Calc2;
	cout << "Summ3 = " << Calc3 << endl;
	int Calc4 = Calc3 + 1;
	cout << Calc4 << endl;
	return 0;
}
