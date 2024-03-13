//
// Created by Kevin M. on 12/5/23.
//

#ifndef UNTITLED1_COURSE_H
#define UNTITLED1_COURSE_H

#include <string>
#include <vector>
using namespace std;

class Course{
public:
    Course();
    Course(const string& name);
    void setCourseName(const string& name);
    void addAssignment(const string& assignmentName, double grade);
    double calculateAverageGrade() const;
    void displayCourseDetails() const;
    string getCourseName() const;

private:
    std::string courseName;
    vector<pair<string, double>> assignments;
};


#endif //UNTITLED1_COURSE_H
