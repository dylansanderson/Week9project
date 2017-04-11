#include"DiscountCalc.h"

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

DiscountCalc::DiscountCalc() {
	price = 70.0;
	dollarsOff = 10;
	discountPerc = 20;
	additionalPerc = 5;
	tax = 8.75;
}

float DiscountCalc::discountedPrice() {
	float x = originalPrice();
	float z;

	z = x - dollarsOff - (discountPerc * (price / 100)) - (additionalPerc * (price / 100));


	return z; //some float value

}


float DiscountCalc::originalPrice() {
	float x, y, z;
	x = tax / 100.f;
	y = price * x;
	z = price + y + .004;


	return z; //some float value
}

void DiscountCalc::displayMenu() {

	cout << "Enter an initial price" << endl;
	cin >> price;

	cout << "How many dollars off?" << endl;
	cin >> dollarsOff;

	cout << "What percentage of a discount?" << endl;
	cin >> discountPerc;
	cout << "Any additional percentage off?" << endl;
	cin >> additionalPerc;

	cout << "Enter the tax." << endl;
	cin >> tax;

}


