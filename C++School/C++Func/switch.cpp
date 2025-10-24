#include <iostream>
using namespace std;

int oschoice;
string gay;

int main(){

cout << "what os do you use?\n\n";
cout << "Linux? (type 1)\n";
cout << "Windows? (type 2)\n";
cout << "Mac? (type 3 || 4)\n\n";

cin >> oschoice;

//cout << "What do you identify as? ";
//cin >> gay;

// Do switch statments only acsept interger variables?
switch (oschoice){ //switch clause
    case 1 :
        cout << "LETS GO!!!" << endl;
        break; // break stement
    case 2:
        cout << "lol (points and laughs)" << endl;
        break;
    case 3:
    case 4:
        cout << "not as bad as windows" << endl;
        break;
    default:
        cout << "I use Arch BTW" << endl;
}



return 0;

}