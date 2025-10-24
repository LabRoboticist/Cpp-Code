#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int guess;
int randnum;
int fivetries=0;
int quit=0;

//getch keybindings //modeal

void initializerandnum() {

    srand(time(0)); 
    randnum=rand() % 20 +1;
    
    //rand() //0 to 32767 (windows)
    cout << RAND_MAX << "\n"; //page 35 //probibilty no problem //except for mudulo operator


    cout << rand() << "\n";
    cout << randnum << "\n";
    cout << (double(rand()))/RAND_MAX << endl;

}

int main(){
    initializerandnum();
}