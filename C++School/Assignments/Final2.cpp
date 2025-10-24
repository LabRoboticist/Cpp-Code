#include <iostream>
using namespace std;

class Angle{
    private:
        int degrees;
        int minutes;
        int seconds;
    public:
        Angle();
        Angle(int d, int m, int s);

        void set_degrees(int d);
        void set_minutes(int m);
        void set_seconds(int s);

        int return_degrees();
        int return_minutes();
        int return_seconds();

        float conversion();
};

Angle::Angle(){
    degrees=0;
    minutes=0;
    seconds=0;
}

Angle::Angle(int d, int m, int s){
    degrees=d;
    minutes=m;
    seconds=s;
}

void Angle::set_degrees(int d){degrees=d;}
void Angle::set_minutes(int m){minutes=m;}
void Angle::set_seconds(int s){seconds=s;}

int Angle::return_degrees(){return degrees;}
int Angle::return_minutes(){return minutes;}
int Angle::return_seconds(){return seconds;}

istream& operator>>(istream &is, Angle &a){
    int d,m,s;
    is>>d>>m>>s;
    a.set_degrees(d);
    a.set_minutes(m);
    a.set_seconds(s);
    return is;
}

ostream& operator<<(ostream &os, Angle &a){
    os<<a.return_degrees()
        << "d, "
        <<a.return_minutes()
        << "', "
        <<a.return_seconds()
        << "'' ";

    return os;
}

Angle operator+(Angle a1, Angle a2){
    int d,m,s;
    
    d=a1.return_degrees()+a2.return_degrees();
    m=a1.return_minutes()+a2.return_minutes();
    s=a1.return_seconds()+a2.return_seconds();
    if(s>=60){
        s-=60;
        m++;
    }
    if(m>=60){
        m-=60;
        d++;
    }
    Angle a3(d,m,s);
    return a3;
}

float Angle::conversion(){
    float decimaldegrees;
    float d=degrees;
    float m=minutes;
    float s=seconds;
    decimaldegrees= d+(m/60)+(s/3600);
    
    return decimaldegrees;
}



int main(){
    Angle angle;
    float DecimalDegrees;
    cin>>angle;
    DecimalDegrees=angle.conversion();
    cout << DecimalDegrees << " degrees\n";

}
