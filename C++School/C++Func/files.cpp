#include <iostream>
#include <fstream>
using namespace std;

int main(){

    //sending data to text file 
    //create file pointer
    ofstream fout1, fout2;

    //open a file stream to the file of choice
    fout1.open("evens.txt", ios::out); //ios::out //erase then reopen file
    fout2.open("odds.txt", ios::app); //ios::app //append/add to file
    //  (ios::out) //scope resolution operator == belongs to the object ios

    int num; 
    cin>>num;
    if(num%2==0) fout1 << num << endl; //write to evens file
    else fout2 << num << endl; //write to odds file

    //close the file
    fout1.close();
    fout2.close();

    return 0;

}