#include "Course.h"
#include <iostream>

// Constructor to initialize a Course object with course number, name, and prerequisites
Course::Course(std::string courseNum, std::string name, std::vector<std::string> prereqs)
    : courseNumber(courseNum), name(name), prerequisites(prereqs) {}

// Function to print detailed information about the course
void Course::printCourseInfo() const {
    // Print course number and name
    std::cout << courseNumber << ", " << name;

    // If the course has prerequisites, print them
    if (!prerequisites.empty()) {
        std::cout << "\nPrerequisites: ";
        for (const auto& prereq : prerequisites) {
            std::cout << prereq << " "; // Loop through and print each prerequisite
        }
    }
    std::cout << std::endl; // End the line after printing course information
}
