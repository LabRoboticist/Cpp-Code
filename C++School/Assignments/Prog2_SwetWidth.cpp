#include <iostream>
#include <iomanip>
using namespace std;

int main(){


    //Variable declerations
    const float labor_cost = 0.35, tax = 0.085 ;
    int length, width, discount_precentage, Area;
    float PricePerSquareFoot, ChargePerSquareFoot, labor_charge, Installed_Price, after_discount, SubTotal, Total,Tax;


    //Input
    cout << "Length of room (feet) ?";
    cin >> length;
    cout << "Width of room (feet) ?";
    cin >> width;
    cout << "Customer discount (percent) ?";
    cin >> discount_precentage;
    cout << "Cost per square foot(XXX.XX) ? ";
    cin >> PricePerSquareFoot;


    //Math
    Area = length * width;
    ChargePerSquareFoot=Area*PricePerSquareFoot;
    labor_charge = labor_cost*Area;
    Installed_Price = labor_charge + ChargePerSquareFoot;
    after_discount = discount_precentage;
    after_discount/=100;
    after_discount++;
    SubTotal=Installed_Price*after_discount;
    Tax=tax;
    Tax++;
    Total = SubTotal*Tax;


    //output
    cout<<setprecision(2);
    cout << "\n\n" << setw(14) << "MEASURMENT\n";
    cout << "Length" << setw(7) << length << setw(6) << "feet\n";
    cout << "Width" << setw(8) << width << setw(6) << "feet\n";
    cout << "Area" << setw(9) << Area << setw(6) << "feet\n";
    cout << "\n\n\n" << setw(23) << "CHARGES\n\n";
    cout << "Description" << setw(12) << "COST/SQ.FT." << setw(13) << "CHARGE/ROOM\n";
    cout << "-----------" << setw(12) << "-----------" << setw(13) << "-----------\n";
    cout.setf(ios::left | ios::fixed);
    cout <<  setw(13) << "Carpet" <<  setw(17) << PricePerSquareFoot << setw(30) << ChargePerSquareFoot << "\n";
    cout <<  setw(13) << "Labor" << setw(17) << labor_cost << setw(10) << labor_charge << "\n";
    cout.setf(ios::right | ios::fixed);
    cout << setw(36) << "-----------\n";
    cout.setf(ios::left | ios::fixed);
    cout <<  setw(13) << "INSTALLED PRICE" << setw(15) <<  "$" << Installed_Price << "\n";
    cout <<  setw(8) << "Discount" << setw(8) << discount_precentage << "%" << setw(18) << after_discount << "\n";
    cout.setf(ios::right | ios::fixed);
    cout << setw(36) << "-----------\n";
    cout.setf(ios::left | ios::fixed);
    cout <<  setw(8) << "SUBTOTAL" << setw(22) <<  "$" << SubTotal << "\n";
    cout <<  setw(3) << "Tax" << setw(32) << Tax << "\n";
    cout <<  setw(5) << "TOTAL" << setw(25) <<  "$" << Total << "\n";

    return 0;


    //pg 172    problem 41
}
