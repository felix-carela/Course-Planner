#pragma once
#include <string>
#include <vector>

// Course class representing individual courses with number, name, and prerequisites
class Course {
public:
    std::string courseNumber; // Course number identifier
    std::string name; // Course name
    std::vector<std::string> prerequisites; // List of prerequisites for the course

    // Constructor to initialize a Course object
    Course(std::string courseNum, std::string name, std::vector<std::string> prereqs);
    void printCourseInfo() const; // Function to print course information
};
