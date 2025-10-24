#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int guess;
int randnum;
int fivetries=0;
int quit=0;

void initializerandnum() {

    srand(time(0));
    randnum=rand() % 20 +1;

}

void input(){

    cout << "I am thinking of a number between 1 and 20.\n";
    cout << "Can you guess what it is? ";
    cin >> guess;

}

void unsuccessful(){
    
    if (guess<randnum){
        cout << "Your guess is low. Try again: ";
        cin >> guess;
    }
    if (guess>randnum){
        cout << "Your guess is high. Try again: ";
        cin >> guess;
    }

}

void successful(){

    if (guess==randnum){
        cout << "Congratulations! You did it. " << endl;
        quit++;

    }

}

int main(){


    initializerandnum();
    input();

    while (fivetries<4){

        //cout << randnum;

        unsuccessful();
        successful();

        if (quit==1){
            break;
        }

        fivetries++;
    }
    if (quit!=1){
        cout << "\n\nSorry. The number was " << randnum << ".\n";
        cout << "You should have gotten it by now.";
        cout << "Better luck next time." << endl;
    }

    return 0;
}


