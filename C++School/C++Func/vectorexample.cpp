#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    vector<int> numbers; //vector = (changeable array/list) // a vector that takes ints
    int num;
    int sum = 0;

    cout << "Enter a list of integers (type a none integer to stop this):" << endl;

    // type in anything besides an integer to stop this loop
    while (cin >> num) {
        numbers.push_back(num); //plug in num into the vector numbers
        sum += num;
    }

    // Clear the the non-integer input
    cin.clear(); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    if (numbers.empty()) {
        cout << "No integers were entered." << endl; //only if zero integers entered
        return 1;
    }

    // Calculate min, max, and average
    int min = numeric_limits<int>::max();
    int max = numeric_limits<int>::min();

    for (int number : numbers) {
        if (number < min) min = number;
        if (number > max) max = number;
    }

    double average = static_cast<double>(sum) / numbers.size();

    // Print the results
    cout << "Numbers entered: ";
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Average: " << average << endl;

    return 0;
}
