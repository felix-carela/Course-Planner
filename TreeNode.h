#pragma once
#include "Course.h"
#include <memory>

// TreeNode class representing a node in the CourseTree
class TreeNode {
public:
    Course course; // Course data stored in the node
    std::shared_ptr<TreeNode> left;  // Pointer to the left child node
    std::shared_ptr<TreeNode> right; // Pointer to the right child node

    // Constructor to create a TreeNode with a given Course
    TreeNode(const Course& c)
        : course(c), left(nullptr), right(nullptr) {}
};
