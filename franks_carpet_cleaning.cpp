#include <iostream>
using namespace std;

/*
	Franks Carpet Cleaning Rates:
	$25 Small Room, $35 Large Room
	TaxRate 6%
	
	Objective: Prompt the user for the number of rooms and size,
		provide an estimate.
	
	ex.
		Estimate for Carpet cleaning service:
		Number of Small Rooms: x
		Number of Large Rooms: y
		Price per small: $25
		price per large: $35
		Cost: z
		tax: t
		========
		Total: o
		This estimate is valid for only 30 days.
*/
const double small_room_rate = 25;
const double large_room_rate = 35;
const double tax = .06;

void franks_cleaning_calc(int number_of_small, int number_of_large){
	//small price total, large price total
	double spt, lpt, cost_before_taxes, calculated_tax, final_cost;
	spt = number_of_small * small_room_rate;
	lpt = number_of_large * large_room_rate;
	cost_before_taxes = spt + lpt;
	calculated_tax = (spt + lpt) * tax;
	final_cost = calculated_tax + cost_before_taxes;

	cout << "Estimate for carpet cleaning service:\nNumber of Small Rooms: " << number_of_small 
		<< "\nNumber of Large Rooms: " << number_of_large 
		<< "\nPrice per Small Room: " << small_room_rate 
		<< "\nPrice per Large Room: " << large_room_rate 
		<< "\nCost: " << cost_before_taxes 
		<< "(before tax)\nTax: " << tax 
		<< "\n==================\nTotal: " << final_cost 
		<< "\nThis offer is valid for 30 days." << endl;
}



int main(){
	int total_small, total_large;
	cout << "How many small rooms would you like cleaned: " << endl;
	cin >> total_small;
	cout << "How many large rooms would you like cleaned: " << endl;
	cin >> total_large;
	franks_cleaning_calc(total_small, total_large);
	
	return 0;
}
