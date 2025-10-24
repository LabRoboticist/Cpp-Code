#include <iostream>
using namespace std;

//declare the function - prototype
 
int showmenu();
void handlechoice(int choice);
int getint(int frontend);
void evens(int lowervalue, int highervalue);


int main(){
    // invoke functions
    int choice=showmenu();
    handlechoice(choice);
    return 0;

}


//function definition
int showmenu(){
    int choice;
    cout << "1) \n2) \n3) ";
    cin >> choice;
    return choice;
}

void handlechoice(int choice){
    int num1 = getint(1);
    int num2 = getint(2);
    switch(choice){
        case 1: 
            evens(num1, num2);
            break;
        //case 2:
    }

}
