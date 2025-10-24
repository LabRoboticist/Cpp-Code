#include <iostream>
using namespace std;

int getData(int income_in_mangos);
double findTax(int income_in_mangos);
void printResults(int income_in_mangos, double tax);

int getData(){
    int income_in_mangos;
    cin >> income_in_mangos;
    income_in_mangos/=10;
    return income_in_mangos;
}

void printResults(int income_in_mangos, double tax){
    cout << "income_in_mangos = " << income_in_mangos << endl;
    cout << "tax = " << tax << "%" << endl;
}

double findTax(int income_in_mangos){
    double Tax;
    if(income_in_mangos<5000 && income_in_mangos>0) Tax=0;
    else if(income_in_mangos<=10000 && income_in_mangos>=5001) Tax=3;
    else if(income_in_mangos<=20000 && income_in_mangos>=10001) Tax=5.5;
    else if(income_in_mangos<=40000 && income_in_mangos>=20001) Tax=10.8;
    else if(income_in_mangos>40000) Tax=23.7;
    return Tax;
}

int main(){

    int inm=getData();
    double Tax=findTax(inm);
    printResults(inm,Tax);

}