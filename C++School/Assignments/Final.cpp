#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void leap_year(){
    int year;
    ifstream Year("years.txt");
    string line;
    while(getline(Year, line)){
        //cout << line;
        year=line;
        //cout << line<<"\n";
        if(year%4==0 && year%100==0 || year%400==0){
        cout << "leap\n";
        }
        else cout << "not leap\n";
    }
    
    
}

int main(){
    char choice;
    do{
        leap_year();
        cout << "What to keep playing? (y/n) ";
        cin >> choice;
    }while(choice!='n');

    cout << 5%2;
    cout << 4%2;
}