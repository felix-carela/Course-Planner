#include "CourseTree.h"   // Header for CourseTree operations
#include "DataManager.h"  // Header for data management utilities
#include "Menu.h"         // Header for menu display and interaction
#include <iostream>       // Standard input/output stream library

int main() {
    CourseTree courseTree; // Data structure for storing course information
    bool exitProgram = false; // Control flag for main program loop

    std::cout << "Welcome to the course planner.\n\n";

    // Main loop: handle user input and perform corresponding actions
    while (!exitProgram) {
        displayMenu(); // Display user menu
        int choice;
        std::cin >> choice; // Read user choice

        // Exit condition
        if (choice == 9) {
            exitProgram = true;
        }
        else {
            handleUserChoice(choice, courseTree); // Process user choice
        }
    }

    std::cout << "\nThank you for using the course planner!" << std::endl;
    return 0; // End of program
}
