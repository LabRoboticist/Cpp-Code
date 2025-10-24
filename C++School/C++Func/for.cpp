#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string os_list [5] = {"linux", "windows", "Open-BSD", "Mac", "Docker"};

    for (int i = 0; i < 4; i++){
        cout << os_list [i] << "\n";
    }

}

// use char array instead of string
// not all versions (mainly forks) C++ work with strings

// pg 389 arrays
// pg 246 for loops

//pointers?