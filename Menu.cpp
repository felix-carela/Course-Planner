#include "Menu.h"         // Include the Menu header for menu-related functions
#include "DataManager.h"  // Include the DataManager header for data management utilities
#include <iostream>       // Include standard input/output stream library
#include <algorithm>      // Include the algorithm library for utility functions like std::transform
#include <cctype>         // Include the cctype library for character handling functions

// Function to display the main menu to the user
void displayMenu() {
    // Menu options are displayed to the user
    std::cout << "1. Load Data Structure.\n";
    std::cout << "2. Print Course List.\n";
    std::cout << "3. Print Course.\n";
    std::cout << "9. Exit\n\n";
    std::cout << "What would you like to do? ";
}

// Function to handle the user's choice input
void handleUserChoice(int choice, CourseTree& courseTree) {
    switch (choice) {
    case 1: {
        // Handle loading data from a file
        std::string filename;
        std::cout << "Enter the filename to load: ";
        std::cin >> filename;
        loadDataFromFile(filename, courseTree);
        break;
    }
    case 2: {
        // Handle printing all courses
        courseTree.printAllCourses();
        break;
    }
    case 3: {
        // Handle printing a specific course
        std::string courseNumber;
        std::cout << "What course do you want to know about? ";
        std::cin >> courseNumber;
        // Convert course number to uppercase
        std::transform(courseNumber.begin(), courseNumber.end(), courseNumber.begin(),
            [](unsigned char c) { return std::toupper(c); });
        courseTree.printCourse(courseNumber);
        std::cout << "\n";
        break;
    }
    case 9: {
        // Handle exiting the program
        std::cout << "Exiting the program.\n";
        break;
    }
    default: {
        // Handle invalid choice
        std::cout << choice << " is not a valid option.\n\n";
        break;
    }
    }
}
