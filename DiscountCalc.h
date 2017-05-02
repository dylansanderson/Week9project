#pragma once
//Dylan Sanderson
//CPSC 121 1:00-1:50 PM
//header file

class DiscountCalc {
public:
	DiscountCalc();
	float originalPrice();
	float discountedPrice();
	void displayMenu();
	float price;
	int dollarsOff;
	int discountPerc;
	int additionalPerc;
	float tax;

};
