/*  @file       main.cpp
 *  @date       feb 20 2023
 *  @author     morgan bergen
 *
 *  @brief     
 
suppose there are 5 departments and 5 programmers, each identified with an integer number between 1 and 5. you are to assign each programmer to a department according to the preferences given below.  each department has a preference for the programmers.  for example, the department #1 preferences are as follow:  1, 5, 3, 2, 4 meaning that it would like to have programmer #1 as its first choice and programmer #4 as its last option.  when there is a conflict, i.e. two departments would like to have the same programmer as their first choice, then consult with the programmer in question, that is check their preferences to determine which department gets to hire him or her.  when the program terminates, all departments should have one programmer assigned to them.

programmer preferences:

programmer_0:  3, 1, 2, 5, 4
programmer_1:  4, 3, 1, 5, 2
programmer_2:  2, 5, 4, 1, 3
programmer_3:  4, 5, 2, 1, 3
programmer_4:  3, 2, 1, 5, 4

department preferences:

department_0:  1, 5, 3, 2, 4
department_1:  1, 3, 4, 2, 5
department_2:  3, 4, 2, 5, 1
department_3:  3, 1, 2, 4, 5
department_4:  4, 3, 1, 2, 5

expected output:

department_0:  programmer_0
department_1:  programmer_2
department_2:  programmer_4
department_3:  programmer_1
department_4:  programmer_3

read in input file "matching-data.txt"

1 1 3 3 4
5 3 4 1 3
3 4 2 2 1
2 2 5 4 2
4 5 1 5 5
3 4 2 4 3
1 3 5 5 2
2 1 4 2 1
5 5 1 1 5
4 2 3 3 4

*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>


void read_data(std::vector<std::vector<int>> &data, std::string filename) {
    std::ifstream file(filename);
    int temp;
    while (file >> temp) {
        data.push_back(std::vector<int>());
        for (int i = 0; i < 5; i++) {
            data.back().push_back(temp);
            file >> temp;
        }
    }
}

void print_data(std::vector<std::vector<int>> &data) {
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data[i].size(); j++) {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}   

int main() {
    std::vector<std::vector<int>> data;
    read_data(data, "matching-data.txt");
    print_data(data);
    return 0;
}


















