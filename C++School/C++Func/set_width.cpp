#include <iostream>
#include <iomanip>
using namespace std;

//header file = library file

int main(){
    int tv, cd, tape, vcr, rctl;
    double tv_cost=400.00, vcr_cost=220.00, remotes=35.20, cd_cost=300.00, tape_cost=150;

    cout << "working\n";
    cin >> tv >> vcr>> rctl>>cd>>tape;
    //cout.setf(ios::left);//left justify
    cout.setf(ios::fixed | ios::left);
    cout << setw(7) << tv << setw(12) << "TV";
    cout.unsetf(ios::left);
    cout << setw(6) << tv_cost << endl;
    return 0;
}

//setw(int=char spaees)

// << (extraction operators)
//cout = oject
//oject = has sub functions

//rase a flag = change a setting

//fixed point noation != scientific notation





//homework = topics (under today's date);

//problem #39 on page 117(print out copy Friday & email working copy monday)