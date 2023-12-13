#include "CourseTree.h"
#include <iostream>

// Function to insert a new course into the tree
void CourseTree::insertCourse(std::shared_ptr<TreeNode>& node, const Course& course) {
    if (!node) {
        node = std::make_shared<TreeNode>(course); // Create new node if current node is null
        return;
    }
    // Recursive insertion based on course number comparison
    if (course.courseNumber < node->course.courseNumber) {
        insertCourse(node->left, course); // Insert left if smaller
    }
    else if (course.courseNumber > node->course.courseNumber) {
        insertCourse(node->right, course); // Insert right if larger
    }
    // Duplicate course numbers are not inserted
}

// Function to search for a course in the tree
std::shared_ptr<TreeNode> CourseTree::search(std::shared_ptr<TreeNode> node, const std::string& courseNumber) const {
    if (!node || node->course.courseNumber == courseNumber) {
        return node; // Return node if found or if reached end of branch
    }
    // Recursive search based on course number comparison
    return courseNumber < node->course.courseNumber ?
        search(node->left, courseNumber) : search(node->right, courseNumber);
}

// Function to traverse the tree in-order and apply a given function to each course
void CourseTree::inOrderTraversal(std::shared_ptr<TreeNode> node, std::function<void(const Course&)> func) const {
    if (node) {
        inOrderTraversal(node->left, func); // Traverse left subtree
        func(node->course); // Apply function to current node
        inOrderTraversal(node->right, func); // Traverse right subtree
    }
}

// Public function to insert a course
void CourseTree::insert(const Course& course) {
    insertCourse(root, course); // Start insertion from the root
}

// Public function to print all courses in the tree
void CourseTree::printAllCourses() const {
    std::cout << "Here is a sample schedule:\n\n";
    inOrderTraversal(root, [](const Course& course) {
        std::cout << course.courseNumber << ", " << course.name << "\n"; // Print course details
        });
    std::cout << "\n";
}

// Public function to print information about a specific course
void CourseTree::printCourse(const std::string& courseNumber) const {
    auto node = search(root, courseNumber); // Search for the course
    if (node) {
        node->course.printCourseInfo(); // Print course information if found
    }
    else {
        std::cout << "Course not found.\n"; // Message if course not found
    }
}
