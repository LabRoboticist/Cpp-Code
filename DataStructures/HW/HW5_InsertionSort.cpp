#include <iostream>
using namespace std;
const int SIZE=10;
int list[SIZE];

void getinput(){
    cout << "\nType in numbers.\n";
    for(int i=0; i<SIZE; i++){
        cin >> list[i];
    }
}

void Displaylist(){
    cout << "\nDisplay list...\n";
    for(int i=0; i<SIZE; i++){
        cout << list[i] << "\n";
    }
}

void insertion_sort(int n){
    int j,k,item_to_insert;
    bool still_looking;
    
    for(k=1;k<n;++k){
        item_to_insert=list[k];
        j=k-1;
        still_looking=true;
        while ((j>=0) && still_looking){
            if(item_to_insert<list[j]){
                list[j+1]=list[j]; //move list[j] to list position j+1
                --j;//decrement until position is found
            }
            else still_looking = false; //insertipon position has been found
        }
    list[j+1] = item_to_insert; //the porper position for item_to_inter to be inserted
    }
}

int main(){
    getinput(); //get list
    Displaylist(); //show list before sorting
    insertion_sort(10); //sort
    Displaylist();//show list after sorting
    return 0;
}
