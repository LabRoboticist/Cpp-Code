#include <iostream>
#include <cmath> 
using namespace std;

struct Point{ 
    double y;
    double x;
};

struct Line{
    Point p1;
    Point p2;
};

Point PointInput();
double findSlope(Line l1);
Line lineinput();
char showmenu();
void handleChoice(char choice);
void linetype(); //parrallel, perpindicular, or nietther
double slope(Line l1);

Point PointInput(){ 
    Point p;
    char symbol;
    cout << "Iput the first point using the format (x,y)\n";
    cout << "Symbol: "; cin >> symbol; 
    cout << "x value: "; cin >>p.x;
    cout << "Symbol: "; cin >> symbol; 
    cout << "y value: "; cin >> p.y;
    cout << "Symbol: "; cin >> symbol;

    return(p);
}

Line LineInput(){ 
    Line l1;
    l1.p1=PointInput();
    l1.p2=PointInput();
    return l1;
}

double slope(Line l1) {return((l1.p1.y-l1.p2.y)/(l1.p1.x-l1.p2.x));}

void linetype(Line l1, Line l2){//parrallel, perpindicular, or nietther
    
   double m1=slope(l1);
   double m2=slope(l2);

   if (m1==m2) cout << "parallel" << endl;
   else if (m1*m2==-1) cout << "perpendicular" << endl;
   else cout << "not perpendicular or parallel" << endl;

} 

char showmenu(){
    char choice;
    cout << "\n\nPOINT PROGRAM\n"
         << "Press 1 to find the slope between 2 points. "
         << "Press 2 to find the type of line two lines are in relation to one another. ";
    cin >> choice;
    return choice;
}

void handleChoice(char choice){
	Line l1,l2;
	double m,m1,m2;
	
	switch(choice){
		case '1': 
            l1=LineInput();
            m=slope(l1);
            cout << "The slope for this line is " << m << endl;
            break;
		case '2': 
            l1=LineInput();
            l2=LineInput();
            linetype(l1,l2);
            break; 
	}
}



int main(){
    
    char choice = showmenu();
    handleChoice(choice);

    return 0;
}
