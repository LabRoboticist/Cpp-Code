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
    const double labor_cost=1.35;
	double tlcost=(area*costPerSqFt)+(labor_cost*area); //tlcost= total labor cost 
    return tlcost;
}

double calcSubTotal(double installprice, double discount){
    discount/=100; //precentage to actual number to be multiplied
    discount=1-discount;
    double subtotal=installprice*discount;
    return subtotal;
}

double calctotal(double subtotal){
    const double taxrate = 1.085;
    double total;
    total = subtotal*taxrate;
    return total;
}

void printResults(int length, int width, int discount, double costPerSqFt, int area, double installPrice, double subTotal, double total){

    //output
    cout<<setprecision(2);
    cout << "\n\n" << setw(26) << "MEASUREMENT\n";
    cout << "Length" << setw(18) << length << setw(6) << "feet\n";
    cout << "Width" << setw(19) << width << setw(6) << "feet\n";
    cout << "Area" << setw(20) << area << setw(13) << "square feet\n";
    cout << "\n\n\n" << setw(23) << "CHARGES\n\n";
    cout << "Description" << setw(12) << "COST/SQ.FT." << setw(13) << "CHARGE/ROOM\n";
    cout << "-----------" << setw(12) << "-----------" << setw(13) << "-----------\n";
    cout.setf(ios::left | ios::fixed);
    cout <<  setw(13) << "Carpet" <<  setw(17) << costPerSqFt << setw(30) << costPerSqFt*area << "\n";
    cout <<  setw(13) << "Labor" << setw(17) << "0.35" << setw(10) << area*1.35 << "\n";
    cout.setf(ios::right | ios::fixed);
    cout << setw(36) << "-----------\n";
    cout.setf(ios::left | ios::fixed);
    cout <<  setw(13) << "INSTALLED PRICE" << setw(15) <<  "$" << installPrice << "\n";
    cout <<  setw(8) << "Discount" << setw(8) << discount << "%" << setw(18) << subTotal << "\n";//subtotal needs to be changed
    cout.setf(ios::right | ios::fixed);
    cout << setw(36) << "-----------\n";
    cout.setf(ios::left | ios::fixed);
    cout <<  setw(8) << "SUBTOTAL" << setw(22) <<  "$" << subTotal << "\n";
    cout <<  setw(3) << "Tax" << setw(32) << "8.5%" << "\n";
    cout <<  setw(5) << "TOTAL" << setw(25) <<  "$" << total << "\n";


    //write ^ to a file
    ofstream fout;
    fout.open("results.txt", ios::out); 

    fout<<setprecision(2);
    fout << "\n\n" << setw(26) << "MEASURMENT\n";
    fout << "Length" << setw(18) << length << setw(6) << "feet\n";
    fout << "Width" << setw(19) << width << setw(6) << "feet\n";
    fout << "Area" << setw(20) << area << setw(13) << "square feet\n";
    fout << "\n\n\n" << setw(23) << "CHARGES\n\n";
    fout << "Description" << setw(12) << "COST/SQ.FT." << setw(13) << "CHARGE/ROOM\n";
    fout << "-----------" << setw(12) << "-----------" << setw(13) << "-----------\n";
    fout.setf(ios::left | ios::fixed);
    fout <<  setw(13) << "Carpet" <<  setw(17) << costPerSqFt << setw(30) << costPerSqFt*area << "\n";
    fout <<  setw(13) << "Labor" << setw(17) << "0.35" << setw(10) << area*.35 << "\n";
    fout.setf(ios::right | ios::fixed);
    fout << setw(36) << "-----------\n";
    fout.setf(ios::left | ios::fixed);
    fout <<  setw(13) << "INSTALLED PRICE" << setw(15) <<  "$" << installPrice << "\n";
    fout <<  setw(8) << "Discount" << setw(8) << discount << "%" << setw(18) << subTotal << "\n";
    fout.setf(ios::right | ios::fixed);
    fout << setw(36) << "-----------\n";
    fout.setf(ios::left | ios::fixed);
    fout <<  setw(8) << "SUBTOTAL" << setw(22) <<  "$" << subTotal << "\n";
    fout <<  setw(3) << "Tax" << setw(32) << "8.5%" << "\n";
    fout <<  setw(5) << "TOTAL" << setw(25) <<  "$" << total << "\n";

    fout.close();

}