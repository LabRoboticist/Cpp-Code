#include <iostream>
#include <cmath> // pow((variable(s)),2)
using namespace std;
//structs vs class
//data members in a point

struct Point{ //int y,x;
    double y;
    double x;
};

Point getapoint();
double finddistance(Point p1, Point p2);
char showmenu();
void handlechoice(char choice, Point p1, Point p2);

Point getapoint(){ //function with "Point" (struct varient) type
    Point p;
    char symbol;
    cout << "Iput the first point using the format (x,y)\n";
    cout << "Symbol: "; cin >> symbol; 
    cout << "x value: "; cin >>p.x;
    cout << "Symbol: "; cin >> symbol; 
    cout << "y value: "; cin >> p.y;
    cout << "Symbol: "; cin >> symbol;

    //>>symbol>>p.y>>symbol;
    return(p);
}

double finddistance(Point p1, Point p2){
    double distance = pow(((pow((p2.x-p1.x),2)) + (pow((p2.y-p1.y),2))), .5);
    return distance;
}

Point findmidpoint(Point p1, Point p2){
    Point midp;
    midp.x = (p1.x+p2.x)/2;
    midp.y = (p1.y+p2.y)/2;
    return midp;
}

int main(){
    Point p1;
    Point p2;
    char symbol, choice; //not getting used
    
    choice=showmenu();
    //input
    p1=getapoint();
    p2=getapoint();

    //final function used
    handlechoice(choice,p1,p2);

    return 0;
}

char showmenu(){
    char choice;
    cout << "\n\nPOINT PROGRAM\n"
         << "Press 1 to find the distance between 2 points. "
         << "Press 2 to find the midpoint between 2 points. ";
    cin >> choice;
    return choice;
}

void handlechoice(char choice, Point p1, Point p2){

    double distance=finddistance(p1,p2); 
    Point midp=findmidpoint(p1,p2); 

    switch (choice){
        case '1': 
            //double distance=finddistance(p1,p2); 
            cout << "The distance between p1 and p2 is " << distance << endl; 
            break;
        case '2': 
            //Point midp=findmidpoint(p1,p2); 
            cout << "The Midpoint between p1 and p2 is (" 
            << midp.x << "," << midp.y << ")" << endl; 
            break;
    }

}
