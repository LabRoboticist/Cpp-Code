#include<iostream>
using namespace std;

int arrows;
float fuel;
double gallonsOfOil;
int spears;

int main(){
	
    //user input
    cout << " ##### Game Inventory ##### \n";
	cout << "How many arrows do you have? ";
    cin >> arrows;
    cout << "How many spears do you have? ";
    cin >> spears;
    cout << "How many liters of fule did you use (round to the 5th deciaml place or smaller)? \n";
    cin >> fuel;
    cout << "How many gallons of oil have used(round to the 7th decimal place or smaller)? \n";
    cin >> gallonsOfOil;

    // --- caclulations ---
    // arrows
    arrows -= 20;
    arrows *= -1;
    //spears
    spears -= 50;
    spears *= -1;
    spears += 10;
    //fuel
    fuel -= 100;
    fuel *= -1;
    //Gallons of oil
    gallonsOfOil -= 200;
    gallonsOfOil *= -1;
    gallonsOfOil /= 2;


    // output
    cout << " ##### Inventory Left ##### \n";
    cout << "Arrows:" << arrows << "\n";
    cout << "Spears:" << spears << "\n";
    cout << "Fuel:" << fuel << " Liters\n";
    cout << "Gallons of oil:" << gallonsOfOil << " Gallons\n";

	return 0;	

}