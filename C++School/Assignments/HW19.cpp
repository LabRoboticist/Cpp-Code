#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream fout;
    char gender[3]; //m or f //hundred chars
    double salaries[3]; //hundred doubles

    fout.open("salaries.txt");

    for(int i=0; i<3; i++){
        cout << "Gender (m or f): "; cin >> gender[i];
        cout << "Salries: "; cin >> salaries[i];
        fout << gender[i] << salaries[i] << endl;
    }

    fout.close();
    return 0;
}