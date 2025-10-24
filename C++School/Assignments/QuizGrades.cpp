#include <iostream>
using namespace std;

int main(){

    int grade1, grade2, grade3, bgrade, sbgrade;
    double tgrade;
    cout << "Grade out of ten\n"; 
    cout << "\n\n";
    cin >> grade1 >> grade2 >> grade3;
    cout << "\n\n";


    //best grade
    if (grade1>=grade2 && grade1>=grade3){
        bgrade=grade1;
    }
    else if (grade2>=grade1 && grade2>=grade3){
        bgrade=grade2;
    }
    else if (grade3>=grade2 && grade3>=grade1){
        bgrade=grade3;
    }

    cout << "\n\n";


    //second best grade
    if(bgrade!=grade1){ 
        if (grade1>=grade2 || grade1>=grade3){
            sbgrade=grade1;
        }
    }
    if (bgrade!=grade2){
        if (grade2>=grade1 || grade2>=grade3){
            sbgrade=grade2;
        }
    }
    if (bgrade!=grade3){
        if (grade3>=grade2 || grade3>=grade1){
            sbgrade=grade3;
        }
    }
    
    cout << "\n\n";
    cout << "Best Grade is... " << bgrade << "\n";
    cout << "Second best Grade is... " << sbgrade << "\n";


    tgrade=bgrade+sbgrade;
    tgrade/=2;

    cout << "\nAverage Beteween Best Grades... " << tgrade << endl;


    return 0;

}