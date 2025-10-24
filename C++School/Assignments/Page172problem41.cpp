#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void getData(int&length, int&width, int&discount, double&costPerSqFt);
void calculate(int length, int width, int discount, double costPerSqFt);
double calcInstall(int area, double costPerSqFt);
double calcSubTotal(double installprice, double discountv);
double calctotal(double subtotal);
void printResults(int length, int width, int discount, double costPerSqFt, int area, double installPrice, double subTotal, double total);


int main(){

    int length, width, discount;
    double costPerSqFt;
    getData(length, width, discount, costPerSqFt);
    calculate(length, width, discount, costPerSqFt);
    return 0;

}

void getData(int&length, int&width, int&discount, double&costPerSqFt){

    cout << "Length of room (feet)? ";
    cin >> length;
    cout << "Width of room (feet)? ";
    cin >> width;
    cout << "Customer discount (percentage)? ";
    cin >> discount;
    cout << "Cost per square foot (xxx.xx)? ";
    cin >> costPerSqFt;
    cout << "\n\n";

}

void calculate(int length, int width, int discount, double costPerSqFt){

    double area;
	area=length*width;
	double installPrice=calcInstall(area,costPerSqFt);
	double subTotal=calcSubTotal(installPrice,discount);
	double total=calctotal(subTotal);
    printResults(length, width, discount, costPerSqFt, area, installPrice, subTotal, total);

}

double calcInstall(int area, double costPerSqFt){
    const double labor_cost=.35;
	double tlcost=area*costPerSqFt*labor_cost; //tlcost= total labor cost 
    return tlcost;
}

double calcSubTotal(double installprice, double discount){
    discount/=100; //precentage to actual number to be multiplied
    discount++;//adding discount
    double subtotal=installprice*discount;
    return subtotal;
}

double calctotal(double subtotal){
    const double taxrate = .085;
    double total;
    total = subtotal*taxrate;
    return total;
}

void printResults(int length, int width, int discount, double costPerSqFt, int area, double installPrice, double subTotal, double total){

    //output
    cout<<setprecision(2);
    cout << "\n\n" << setw(26) << "MEASURMENT\n";
    cout << "Length" << setw(12) << length << setw(6) << "feet\n";
    cout << "Width" << setw(13) << width << setw(6) << "feet\n";
    cout << "Area" << setw(14) << area << setw(6) << "feet\n";
    cout << "\n\n\n" << setw(23) << "CHARGES\n\n";
    cout << "Description" << setw(12) << "COST/SQ.FT." << setw(13) << "CHARGE/ROOM\n";
    cout << "-----------" << setw(12) << "-----------" << setw(13) << "-----------\n";
    cout.setf(ios::left | ios::fixed);
    cout <<  setw(13) << "Carpet" <<  setw(17) << costPerSqFt << setw(30) << costPerSqFt*area << "\n";
    cout <<  setw(13) << "Labor" << setw(17) << "0.35" << setw(10) << area*0.35 << "\n";
    cout.setf(ios::right | ios::fixed);
    cout << setw(36) << "-----------\n";
    cout.setf(ios::left | ios::fixed);
    cout <<  setw(13) << "INSTALLED PRICE" << setw(15) <<  "$" << installPrice << "\n";
    cout <<  setw(8) << "Discount" << setw(8) << discount << "%" << setw(18) << discount*installPrice << "\n";
    cout.setf(ios::right | ios::fixed);
    cout << setw(36) << "-----------\n";
    cout.setf(ios::left | ios::fixed);
    cout <<  setw(8) << "SUBTOTAL" << setw(22) <<  "$" << subTotal << "\n";
    cout <<  setw(3) << "Tax" << setw(32) << "8.5%" << "\n";
    cout <<  setw(5) << "TOTAL" << setw(25) <<  "$" << total << "\n";

}

