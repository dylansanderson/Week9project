class DiscountCalc 
{
	private:

		float price;
		float dollarsOff;
		float discountPerc;
		float additionalPerc;
		float tax;

	public:

		float originalPrice(DiscountCalc);

	
		float discountedPrice(DiscountCalc);


		DiscountCalc displayMenu();

};

