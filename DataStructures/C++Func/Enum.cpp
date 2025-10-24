#include <iostream>
using namespace std;

int main(){

    enum weekday {MON, TUE, WED, THUR, FRI};
    enum primary_color {RED, YELLOW, BLUE};

    weekday day = MON;
    primary_color color = RED;

    cout << day;

    return 0;
}
