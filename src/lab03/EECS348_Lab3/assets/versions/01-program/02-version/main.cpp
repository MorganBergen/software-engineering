/*
 * @author      morgan bergen
 * @file        main.cpp
 * @date        feb 10 2023
 * @brief       problem 1 for program 1
 */

#include <iostream>
#include <string>
#include <fstream>

void fileio(std::string p_name);

int main() {

    std::string name = "input.txt";
    fileio(name);

    return(0);
}

void fileio(std::string p_name) {
    std::ifstream infile;

    infile.open(p_name);
    if (infile.fail()) {
        std::cerr << "input file failed to open." << std::endl;
        exit(1);
    } else if (infile.is_open()) {
        
        int count = 0;
        std::string line;
        while (std::getline(infile, line)) {
            count++;
        }
        std::cout << "total amount of lines are: " << count << std::endl;
        std::string sales[count];
        int i = 0;
        
        // here we will load the contents of the file into the array sales
        // however we need to static cast the string to a double

        infile.clear();
        
        while (std::getline(infile, line)) {
            sales[i] = (line);
            i++;
        }
        /*
        while (std::getline(infile, line)) {
            sales[i] = std::stod(line);
            i++;
        }
        */
        
        for (int i = 0; i < count; i++) {
            std::cout << sales[i] << std::endl;
        }

    }
}
