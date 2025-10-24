#include<cstring>
const int MAX=50;
int main(){
	char str1[MAX], str2[MAX];
	cin>>str1>>str2;
	int num=strcmp(str1,str2);
	if(num==0){
		cout<<"str1 is the same as str2"<<endl;
	}
	else if(num<0){
		cout<<"Str1 is less than str2\n";
	}
	else cout<<"str1 is greater than str2\n";
	int len=strlen(str1);
	strcat(str1,str2); //str1=str1+str2  str1+=str2
	return 0;
}
