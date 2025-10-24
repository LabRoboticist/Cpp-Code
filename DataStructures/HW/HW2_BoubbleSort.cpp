#include <iostream>
using namespace std;

//bubble sort big-O
//(n(n-1))/2 //not important
//O(n^2)
void bubble_sort(int intarray[], int n){
    
    int j, k=0, temp;
    bool exchange_made = true;
    k=0;

    while ( (k < n - 1) && exchange_made){ //times to iterate = Max-1
        exchange_made = false;
        ++k;
        //number of comparisons on kth pass
        for(j=0; j<n-k; j++){ //different iteration type (n=3 vs n=7)
            if (intarray[j] > intarray[j+1]){
                //exchange must be made
                temp = intarray[j];
                intarray[j] = intarray[j+1];
                intarray[j+1] = temp;
                exchange_made=true;
            }
        }
    }
}

int main(){

    int Max=10;
    int Intarray[Max];
    cout << "Type in different numbers for the array (10 times).\n";
    for (int i=0; i<Max; i++){
        cin >> Intarray[i];
    }
    bubble_sort(Intarray, Max);

    cout << "\nFinal result.\n";
    for(int i=0; i<Max; i++){
        cout << Intarray[i] << "\n";
    }
    return 0;
}




