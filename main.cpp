#include <iostream>
#include "Course.h"
using namespace std;

int main() {
    string studentName;
    cout << "Enter student name: " << endl;
    getline(cin, studentName);

    vector<Course> courses;

    char addAnotherCourse;
    do {
        Course currentCourse;

        string courseName;
        cout << "Enter course name: ";
        getline(cin, courseName);
        currentCourse.setCourseName(courseName);

        char addAnotherAssignment;
        do {
            string assignmentName;
            double grade;
            cout << "Enter assignment Name for course '" << currentCourse.getCourseName() << "' : ";
            getline(cin, assignmentName);

            cout << "Enter grade for assignment: ";
            cin >> grade;

            currentCourse.addAssignment(assignmentName, grade);

            cout << "Do you want to add another assignment for course '" << currentCourse.getCourseName()
                 << "'? (y/n): ";
            cin >> addAnotherAssignment;

            cin.ignore();
        } while (addAnotherAssignment == 'y' || addAnotherAssignment == 'Y');

        courses.push_back(currentCourse);

        cout << "Do you want to add another course? (y/n): ";
        cin >> addAnotherCourse;

        cin.ignore();
    } while (addAnotherCourse == 'y' || addAnotherCourse == 'Y');

    for (const auto &course : courses) {
        course.displayCourseDetails();
        cout << endl;
    }

    return 0;
}