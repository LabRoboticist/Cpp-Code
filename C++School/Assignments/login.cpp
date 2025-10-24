//concatenate = add to the behind of something (in computer science)
//str1(abba) < str2(baab) [a<b (first character because alphabetical order]
//strcmp -> 0 if str1==str2
//strcmp -> less than 0 if str1<str2
//strcmp -> more than 0 if str1>str2

//cstring

#include<iostream>
#include<cstring>
using namespace std;

const int NUMSTRS=10;
const int STRINGSIZE=50;

int main(){
	
	char words[NUMSTRS][STRINGSIZE];
	for(int i=0;i<NUMSTRS;i++){
		cin>>words[i];
	}
	
	
	//validate login credentials
	char userName[]="Sparkles";
	char passwd[]="War40K@1";
	//validate these strings
	char NewuserName[STRINGSIZE];
	char Newpasswd[20];
	int count=0;
	bool success=false;
	
	double checkingBal=6;
	double savingsBal=25;
	int u,p;
	int choice;
	double balance = 20.25;
	double deposit,withdraw;
	
    //compare the username and password;	
	do{
		cout<<"Input UserName: ";
		cin>>NewuserName;
		cout<<"Input Password: ";
		cin>>Newpasswd;
		u=strcmp(userName,NewuserName);
    	p=strcmp(passwd,Newpasswd);
		if(u==0 && p==0){
		cout<<"Login successful\n";
		success=true;
	}
	
	else {
		cout<<"Invalid Login\n";
		count++;
	}
	}while(!success && count<=3); //closes the do loop

	if (success==true){
		do{
			cout<< "\nWhat do you want to do?\n"
				<< "deposit 1)\n"
				<< "withdraw 2)\n"
				<< "check balance 3)\n"
				<< "quite 4)\n";
			cin >> choice;
			switch(choice){
				case 1: //deposit
					cout << "Type in how much money you want to deposit.";
					cin >> deposit;
					balance+=deposit;
					break;
				case 2: //withdraw
					cout << "Type in how much money you want to withdraw.";
					cin >> withdraw;
					balance-=withdraw;
					break;
				case 3: //check balance
					cout << "Current balance is " << balance << "$.\n";
					break;
			}
		}while(choice!=4); 
	}
}
