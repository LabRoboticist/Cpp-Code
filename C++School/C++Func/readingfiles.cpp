#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Create an ifstream object to open the file
    std::ifstream inputFile("example.txt");

    // Check if the file was opened successfully
    if (!inputFile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::string line;
    // Read the file line by line
    while (std::getline(inputFile, line)) {
        std::cout << line << std::endl;
    }

    // Close the file when done
    inputFile.close();

    return 0;
}

