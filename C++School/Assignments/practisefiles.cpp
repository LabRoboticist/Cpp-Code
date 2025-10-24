//Write to file - cout does writing to a console
//Reading from a file

//file stream
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ofstream fout1,fout2;
	
	fout1.open("evens.txt",ios::out);
	fout2.open("odds.txt", ios::app);

	int num;
	//create a do...while loop to input a set of integers 
	//stop when the user inputs -99999

	do{
	cin>>num;
	if(num%2==0) fout1<<num<<endl;
	else fout2<<num<<endl;
	} while (num!=-99999);
	
	fout1.close();
	fout2.close();
	
	return 0;
}
