#include <iostream>
using namespace std;

string variable;

int main(){
    cout << "NO Deadpool !!!\n\n";
    cout << "Are you Deadpool? 0_0  ";
    cin >> variable;
    //comparison operator ==
    //asignment operator =
    if (variable == "yes"){ //== != < <= >= <
        cout << "GET OUT OF HEAR!!!" << endl;
    }

    else if(variable == "no"){ //anyhting non zero = false  if(5){} is true     if(0){} is false
        cout << "LIER!" << endl;
    }

    else{
        cout << variable << "...    " << "Finally!!!" << endl;
    }
    //else cout << variable << "...    " << "Finally!!!" << endl;

    return 0;
}

//if, if else, else clause


// emilia willias 