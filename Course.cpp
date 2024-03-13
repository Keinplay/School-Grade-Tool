//
// Created by Kevin M. on 12/5/23.
//
#include "Course.h"
#include <iostream>
using namespace std;
Course::Course() : courseName("Unnamed Course") {}
Course::Course(const string& name) : courseName(name){}

void Course::setCourseName(const std::string& name) {
    courseName = name;
}

void Course::addAssignment(const string& assignmentName, double grade) {
    assignments.push_back(make_pair(assignmentName, grade));
}

double Course::calculateAverageGrade() const {
    if (assignments.empty()) {
        return 0.0;
    }

    double totalGrades = 0.0;
    for(const auto& assignment : assignments){
        totalGrades += assignment.second;
    }
    return totalGrades / assignments.size();
}

void Course::displayCourseDetails() const {
    cout << "Course: " << (courseName.empty() ? "Unnamed Course" : courseName) << endl;
    cout << " Assignments " << endl;
    for(const auto& assignment : assignments) {
        cout << "- " << assignment.first << ": " << assignment.second << endl;
    }
    cout << "Average Grade: " << calculateAverageGrade() << endl;
}
string Course::getCourseName() const {
    return courseName;
}