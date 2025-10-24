#include <iostream>
#include <iomanip>
using namespace std;


int main(){


    //variable
    int tv, cd, tape, vcr, remote;
    const float tv_cost=400.00, vcr_cost=220.00, remote_cost=35.20, cd_cost=300.00, tape_cost=150.00;
    float TV, CD, Tape, VCR, Remote, Tax;
    const float tax = 8.25;
    float subtotal;
    float Total;


    //Input
    cout << "How many TVs were sold? ";
    cin >> tv;
    cout << "How many VCRs were sold? ";
    cin >> vcr;
    cout << "How many remote controllers were sold? ";
    cin >> remote;
    cout << "How many CDs were sold? ";
    cin >> cd;
    cout << "How many tape recorders were sold? ";
    cin >> tape;


    //Math
    TV = tv * tv_cost;
    CD = cd * cd_cost;
    Tape = tape * tape_cost;
    VCR = vcr * vcr_cost;
    Remote = remote * remote_cost;
    
    
    Tax=tax;
    Tax/=100;
    subtotal = TV + CD + Tape + VCR + Remote;
    Tax*=subtotal;
    Total = subtotal + Tax;


    //Output
    cout<<setprecision(2);
    cout.setf(ios::fixed | ios::left);
    cout << setw(5) << "QTY" << setw(17) <<"DESCRIPTION"<<setw(10)<<"UNIT"<<"Total\n";
    cout.unsetf(ios::left);
    cout << setw(27) << "PRICE" << setw(11) << "PRICE\n";
    cout.setf(ios::fixed | ios::left);
    cout << setw(5) << "---" << setw(16) <<"-----------"<<setw(9)<<"-------" << "--------\n";
    cout << setw(5) << tv << "TV";
    cout.unsetf(ios::left);
    cout << setw(21) << tv_cost << setw(9) << TV << "\n";
    //vcr
    cout.setf(ios::fixed | ios::left);
    cout << setw(5) << vcr << "VCR";
    cout.unsetf(ios::left);
    cout << setw(20) << vcr_cost << setw(9) << VCR << "\n";
    //remote
    cout.setf(ios::fixed | ios::left);
    cout << setw(5) << remote << "REMOTE CTRLR";
    cout.unsetf(ios::left);
    cout << setw(11) << remote_cost << setw(9) << Remote << "\n";
    //cd
    cout.setf(ios::fixed | ios::left);
    cout << setw(5) << cd << "CD PLAYER";
    cout.unsetf(ios::left);
    cout << setw(14) << cd_cost << setw(9) << CD << "\n";
    //tape
    cout.setf(ios::fixed | ios::left);
    cout << setw(5) << tape << "TAPE RECORDER";
    cout.unsetf(ios::left); //right
    cout << setw(10) << tape_cost << setw(9) << Tape << "\n";
    //indent bar
    cout << setw(39) << "--------\n";
    //subtotal
    cout.setf(ios::fixed | ios::left);
    cout << setw(12) << "" << "SUBTOTAL";
    cout.unsetf(ios::left);
    cout << setw(17) << subtotal << "\n";
    //tax
    cout.setf(ios::fixed | ios::left);
    cout << setw(12) << "" << "TAX";
    cout.unsetf(ios::left);
    cout << setw(22) << Tax << "\n";
    //Total
    cout.setf(ios::fixed | ios::left);
    cout << setw(12) << "" << "Total";
    cout.unsetf(ios::left);
    cout << setw(20) << Total << "\n";






    return 0;
}

//page 117
//39
