
#include<iostream>
#include<cstring>
using namespace std;

const int SIZE=100;
class String{
	private:
		char *str; //string
	    int len; //length of string
	public:
		String();
		String(char *str2); //strcpy(str,str2);
		int getLength();
		char* getString(); 
		void setString(char *stri);
		void setLength(int len);
		//String* operator=(String s2); //optional
		bool operator<(const String& s2);
		bool operator>(const String& s2);
		bool operator<=(const String& s2);
		bool operator>=(const String& s2);
		bool operator==(const String& s2);
		String operator+(const String& s2);
};

/*
String* String::operator=(String s2){
	str=s2.getString();
	return this;
}
*/
String::String(){
	str= new char[1]; //emptty string
	str[0] = '\0'; //null terminator
	len=0;
}
//check
String::String(const char *str2){	
	len = strlen(str2);
	str = new char[len + 1];  // Allocate memory for the string
	strcpy(str,str2); //equal operator is already overloaded (by defualt)
}


int String::getLength(){return len;}
char* String::getString(){return str;}
void String::setString(const char* stri) {
    delete[] str;  // Free the old memory
    len = strlen(stri);
    str = new char[len + 1];  // Allocate new memory
    strcpy(str,stri); //equal operator is already overloaded *by default)
}
void String::setLength(int leng){len=leng;}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//check
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
bool operator<(String s1, String s2){ //checking if str1 is less than str2
	if(strcmp(s1.getString(),s2.getString()) < 0)
		return true;
	else return false;
}
bool operator>(String s1, String s2){ //checking if str1 is greater than str2
	if(strcmp(s1.getString(),s2.getString()) > 0)
		return true;
	else return false;
}
bool operator<=(String s1, String s2){ /
	if(strcmp(s1.getString(),s2.getString()) <= 0) //|| strcmp(s1.getString(),s2.getString()) == 0)
		return true;
	else return false;
}
bool operator>=(String s1, String s2){ 
	if(strcmp(s1.getString(),s2.getString()) >= 0) //|| strcmp(s1.getString(),s2.getString()) == 0)
		return true;
	else return false;
}
*/
bool String::operator<(const String& s2) {
    if(strcmp(str, s2.str) < 0)
	return true;  // Compare using strcmp
}

// Greater than operator
bool String::operator>(const String& s2) {
    return strcmp(str, s2.str) > 0;  // Compare using strcmp
}

// Less than or equal to operator
bool String::operator<=(const String& s2) {
    return strcmp(str, s2.str) <= 0;  // Compare using strcmp
}

// Greater than or equal to operator
bool String::operator>=(const String& s2) {
    return strcmp(str, s2.str) >= 0;  // Compare using strcmp
}

// Equality operator
//bool String::operator==(const String& s2) {
//    return strcmp(str, s2.str) == 0;  // Compare using strcmp
//}

String String::operator+(const String& s2) {
    String s3; //len and str are from the other string being added to
    s3.len = len + s2.len;
    s3.str = new char[s3.len + 1];  // Allocate new memory for the result
    strcpy(s3.str, str);  // s3=s1
    strcat(s3.str, s2.str);  // s3+s2
    return s3;
}

//overload the +, <, <=, >, >= for the String class

//
istream& operator>>(istream &is, String& s){
		char *str2;
		str2=new char[SIZE];
		is>>str2;
		s.setString(str2);
		return is;
		
}

ostream& operator<<(ostream &os, String s){
	os<<s.getString()<<endl;
	return os;
}

// bool operator==(String s1, String s2){
// 	if(strcmp(s1.getString(),s2.getString()==0)
// 		return true;
// 	}
// 	else return false;
// }
int main() {
    String str1, str2;
    cout << "Enter first string: ";
    cin >> str1;  // Take input for str1
    cout << "Enter second string: ";
    cin >> str2;  // Take input for str2

    cout << "First string: " << str1 << " Length: " << str1.getLength() << endl;
    cout << "Second string: " << str2 << " Length: " << str2.getLength() << endl;

    // Example comparisons
    cout << "Comparison (str1 < str2) " << (str1 < str2) << endl;
    cout << "Comparison (str1 > str2) " << (str1 > str2) << endl;
    cout << "Comparison (str1 <= str2) " << (str1 <= str2) << endl;
    cout << "Comparison (str1 >= str2) " << (str1 >= str2) << endl;

    // Concatenation
    String str3 = str1 + str2;
    cout << "Combined string: " << str3 << " Length: " << str3.getLength() << endl;

    return 0;
}
