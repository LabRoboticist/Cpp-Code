#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    string line;
    int males=0, females=0;
    double tmsalary=0, tfsalary=0; //total slaray for males and females
    ifstream inputFile("salaries.txt");

    // Read the file line by line
    while (getline(inputFile, line)) {
        //male
        if (line.find('m') == 0){
            males++;
            line.erase(0, 1); //remove 1 string from 0(first) position
            tmsalary += stod(line); //line -> double
            //cout << line;
        }
        //female
        else if (line.find('f') == 0) {
            females++;
            line.erase(0, 1); //remove 1 string from 0(first) position
            tfsalary += stod(line); //line -> double
        }
    }
    
    //display
    cout << "Number of males " << males << "\n";
    cout << "Average male salary " << tmsalary/males << "\n\n";
    cout << "Number of females " << females << "\n";
    cout << "Average female salary " << tfsalary/females << "\n";
    
    inputFile.close();
    return 0;
}
//HW:
/*
 - Read in the Male and female salaries from the salaries.txt file, (done)
 - add them to a cummulating male and female salary total. (done)
 - Count the number in each category, (done)
 - compute the average male and average female salaries and display your findings to the user. (done)
 - Make sure you also display the number of males and number of females read from the text file. (done)
*/

