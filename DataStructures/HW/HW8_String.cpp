#include<iostream>
#include<cstring>
using namespace std;

const int SIZE = 100;

class String {
private:
    char *str;  //Pointer 
    int len;    //Length of the string

public:
    String();                    //Default constructor
    String(const char *str2);    
    ~String();                   //!Destructor to free allocated memory!

    int getLength() const;             
    const char* getString() const;          
    void setString(const char* stri); 
    void setLength(int length);     

    bool operator<(const String& s2);  
    bool operator>(const String& s2); 
    bool operator<=(const String& s2); 
    bool operator>=(const String& s2); 
    String operator+(const String& s2); 
};

// Default constructor
String::String() {
    str = new char[1];  // Initialize with an empty string
    str[0] = '\0';      // Null-terminate the string
    len = 0;
}

String::String(const char* str2) {
    len = strlen(str2);
    str = new char[len + 1];  // Allocate memory for the string
    strcpy(str, str2);        // str=str2
}

// Destructor to free allocated memory
String::~String() {
    delete[] str;  // Free the memory allocated for the string
}

//(note to self) won't work without const!? 
int String::getLength() const {return len;}
const char* String::getString() const {return str;}

void String::setString(const char* stri) {
    delete[] str;  // Free the old memory
    len = strlen(stri);
    str = new char[len + 1];  // Allocate new memory
    strcpy(str, stri);        // Copy 
}

void String::setLength(int length) {len = length;}

//boolean return a 1 or 0 but strcmp doesn't return values like that. 
//(note to self) try to make this better
bool String::operator<(const String& s2) {
    return strcmp(str, s2.str) < 0;  
}   
bool String::operator>(const String& s2) {
    return strcmp(str, s2.str) > 0;  
}
bool String::operator<=(const String& s2) {
    return strcmp(str, s2.str) <= 0;  
}
bool String::operator>=(const String& s2) {
    return strcmp(str, s2.str) >= 0;  
}

String String::operator+(const String& s2) {
    String s3; //len and str are from the string being added to like s1, s1+s2=s3
    s3.len = len + s2.len;  
    s3.str = new char[s3.len + 1];  // Allocate new memory for the result string
    strcpy(s3.str, str);
    strcat(s3.str, s2.str);  // strcat = string concatentate/combine
    return s3;
}

istream& operator>>(istream& is, String& s) {
    char temp[SIZE];  //temp = temporary
    is >> temp;       
    s.setString(temp); 
    return is;
}

ostream& operator<<(ostream& os, const String& s) {
    os << s.getString();  
    return os;
}

int main() {
    String str1, str2;
    cout << "str1: ";
    cin >> str1; 
    cout << "str2: ";
    cin >> str2;  

    cout << "str1: " << str1 << " Length: " << str1.getLength() << endl;
    cout << "str2: " << str2 << " Length: " << str2.getLength() << endl;

    //comparing
    cout << "Comparison (str1 < str2):"<< endl;
    if (str1 < str2) cout << "false" << endl;
    else cout << "true" << endl;

    cout << "Comparison (str1 > str2):"<< endl;
    if (str1 > str2) cout << "false" << endl;
    else cout << "true" << endl;
    
    cout << "Comparison (str1 <= str2):"<< endl;
    if (str1 <= str2) cout << "false" << endl;
    else cout << "true" << endl;

    cout << "Comparison (str1 >= str2):"<< endl;
    if (str1 >= str2) cout << "false" << endl;
    else cout << "true" << endl;

    // combination
    String str3 = str1 + str2; 
    cout << "Combined string: " << str3 << " Length: " << str3.getLength() << endl;

    return 0;
}

