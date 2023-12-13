#pragma once
#include "TreeNode.h"
#include <memory>
#include <functional>

// CourseTree class to represent and manage a binary tree of courses
class CourseTree {
private:
    std::shared_ptr<TreeNode> root; // Root of the binary tree

    // Private helper functions for tree operations
    void insertCourse(std::shared_ptr<TreeNode>& node, const Course& course);
    std::shared_ptr<TreeNode> search(std::shared_ptr<TreeNode> node, const std::string& courseNumber) const;
    void inOrderTraversal(std::shared_ptr<TreeNode> node, std::function<void(const Course&)> func) const;

public:
    CourseTree() : root(nullptr) {} // Constructor to initialize an empty tree

    // Public functions to insert courses, print all courses, and print a specific course
    void insert(const Course& course);
    void printAllCourses() const;
    void printCourse(const std::string& courseNumber) const;
};
