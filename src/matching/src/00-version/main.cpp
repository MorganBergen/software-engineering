#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// Define constants for the number of departments and programmers
const int NUM_DEPARTMENTS = 5;
const int NUM_PROGRAMMERS = 5;

// Define a struct to represent a programmer
struct Programmer {
    int id;
    vector<int> preferences;
};

// Define a struct to represent a department
struct Department {
    int id;
    vector<int> preferences;
    Programmer* programmer;
};

// Read data from input file and populate programmer and department vectors
void readData(vector<Programmer>& programmers, vector<Department>& departments, const string& filename) {
    ifstream input(filename);
    if (input.is_open()) {
        for (int i = 0; i < NUM_PROGRAMMERS; i++) {
            Programmer p;
            p.id = i;
            for (int j = 0; j < NUM_DEPARTMENTS; j++) {
                int pref;
                input >> pref;
                p.preferences.push_back(pref);
            }
            programmers.push_back(p);
        }
        for (int i = 0; i < NUM_DEPARTMENTS; i++) {
            Department d;
            d.id = i;
            for (int j = 0; j < NUM_PROGRAMMERS; j++) {
                int pref;
                input >> pref;
                d.preferences.push_back(pref);
            }
            departments.push_back(d);
        }
        input.close();
    } else {
        cerr << "Error opening input file!" << endl;
        exit(1);
    }
}

// Return true if programmer p prefers department d1 to department d2
bool prefers(Programmer* p, Department* d1, Department* d2) {
    for (int i = 0; i < NUM_DEPARTMENTS; i++) {
        if (p->preferences[i] == d1->id) {
            return true;
        } else if (p->preferences[i] == d2->id) {
            return false;
        }
    }
    cerr << "Error: Programmer " << p->id << " has no preference between departments " << d1->id << " and " << d2->id << endl;
    exit(1);
}

// Perform the matching algorithm and output the results
void match(vector<Programmer>& programmers, vector<Department>& departments) {
    // Initialize all programmers to be free
    vector<bool> programmerFree(NUM_PROGRAMMERS, true);

    // While there are free programmers
    while (find(programmerFree.begin(), programmerFree.end(), true) != programmerFree.end()) {
        // Find the first free programmer
        int freeProgrammerIndex = find(programmerFree.begin(), programmerFree.end(), true) - programmerFree.begin();
        Programmer* freeProgrammer = &programmers[freeProgrammerIndex];

        // Iterate through the programmer's preferences
        for (int i = 0; i < NUM_DEPARTMENTS; i++) {
            int preferredDepartmentId = freeProgrammer->preferences[i];
            Department* preferredDepartment = &departments[preferredDepartmentId];

            // If the preferred department is free, assign the programmer to it
            if (preferredDepartment->programmer == nullptr) {
                preferredDepartment->programmer = freeProgrammer;
                programmerFree[freeProgrammerIndex] = false;
                break;
            }
            // Otherwise, check if the preferred department prefers the programmer to its current programmer
                else {
                Programmer* currentProgrammer = preferredDepartment->programmer;
                if (prefers(currentProgrammer, preferredDepartment, *(departments.data() + currentProgrammer->preferences[i]))) {

                    preferredDepartment->programmer = freeProgrammer;
                    programmerFree[freeProgrammerIndex] = false;
                    programmerFree[currentProgrammer->id] = true;
                    break;
                }
            }
        }
    }

    // Output the results
    for (int i = 0; i < NUM_DEPARTMENTS; i++) {
        cout << "Department " << departments[i].id << " is assigned programmer " << departments[i].programmer->id << endl;
    }

}

int main() {
    vector<Programmer> programmers;
    vector<Department> departments;
    readData(programmers, departments, "input.txt");
    match(programmers, departments);
    return 0;
}

