#include <iostream>
using namespace std;

int main(){

    int user_input = 1;
    int user_int;

    do{
        cin >> user_int;

        user_int%=2;
        if(user_int == 1) cout << "one factor" << endl;

        cin >> user_input;
    } while(user_input==0);

}