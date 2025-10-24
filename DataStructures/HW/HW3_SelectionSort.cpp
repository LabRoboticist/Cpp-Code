
#include <iostream>
using namespace std;

void selection_sort(int intarray[], int size){
    int smallestnum, temp;
    for (int i = 0; i < size - 1; i++) {
        smallestnum = i;  //the smallest number in the array //smallestnum == minindex
        for (int j = i + 1; j < size; j++) {
            if (intarray[j] < intarray[smallestnum]) {// if j is smaller than the smallest, make j the new smallest
                smallestnum = j;  //this if statment is the slection part
            }
        }
        // Swap smallestnum with i
        if (smallestnum != i) {
            temp = intarray[i];
            intarray[i] = intarray[smallestnum];
            intarray[smallestnum] = temp;
        }


        //testing code
        cout << "\n\nYou pressed enter\n";
        for (int i = 0; i < size; i++) {
            cout << intarray[i] << "\n";
            
        }
        cout << smallestnum;
        //testing code
    }
}

int main(){
    //normal display loops
    int Max = 7; //size of array
    int Intarray[Max];
    cout << "Type in different numbers for the array (10 times).\n";
    for (int i = 0; i < Max; i++) {
        cin >> Intarray[i];
    }

    selection_sort(Intarray, Max);  //execute the function

    cout << "\n\nFinal result.\n";
    for (int i = 0; i < Max; i++) {
        cout << Intarray[i] << "\n";
    }

    return 0;
}

