#include <iostream> 
#include <algorithm>
using namespace std;

int main(){

    char ch;
    int E, A, I;

    switch(ch){
        case 'e':
        case 'E':
            cout << E++;
            break;
        case 'a':
        case 'A':
            cout << A++;
            break;
        case 'i':
        case 'I':
            cout << I++;
            break;
        default:
            cout << "Error--Not A, E, or I\a\n";
    }

    return 0;
}