#include "DataManager.h"  // Include the DataManager header for data-related functions
#include <fstream>        // Include the fstream library for file handling
#include <sstream>        // Include the sstream library for string stream operations
#include <iostream>       // Include the iostream library for standard input/output stream

// Function to load data from a file into the CourseTree
void loadDataFromFile(const std::string& filename, CourseTree& courseTree) {
    std::ifstream file(filename); // Open the file for reading
    if (!file.is_open()) {
        // If the file cannot be opened, print an error message
        std::cerr << "Failed to open file: " << filename << std::endl;
        return;
    }

    std::string line;
    // Read the file line by line
    while (getline(file, line)) {
        std::istringstream iss(line); // Use string stream to parse the line
        std::string courseNumber, name;
        // Extract course number and name from the line
        getline(iss, courseNumber, ',');
        getline(iss, name, ',');

        std::vector<std::string> prerequisites; // Vector to store prerequisites
        std::string prerequisite;
        // Extract all prerequisites from the line
        while (getline(iss, prerequisite, ',')) {
            prerequisites.push_back(prerequisite);
        }

        Course course(courseNumber, name, prerequisites); // Create a Course object
        courseTree.insert(course); // Insert the course into the course tree
    }
    std::cout << "Data loaded successfully.\n\n"; // Print a success message
}
