//file input - reading from a file
#include<fstream>
#include<iostream>
using namespace std;


const int SIZE=10;
int main(){
	
	int nums[SIZE];
	double salary[2];
	char gender[2];
	
	ifstream fin;
	int i=0;
	//istream cin
	fin.open("num.txt", ios::in);
	while(!fin.eof()){
		fin>>nums[i];
		i++;
	}
	cin>>gender[1]>>salary[1];
	cout<<"The "<<i<<" integers from the text file:"<<endl;
	for(int j=0;j<i;j++){
		cout<<nums[j]<<endl;
	}
	
	fin.close();
	return 0;
}

//HW
/*
Read in the Male and female salaries from the salaries.txt file, and add them to a cummulating male and female salary total.
Count the number in each category, and compute the average male and average female salaries and display
your findings to the user. Make sure you also display the number of males and number of females read from 
the text file.
*/