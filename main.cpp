#include <iostream>
using namespace std;

int main() {
    cout << "Enter a student name and a mark: ";

    string studentName;
    float mark;

    cin >> studentName >> mark;

    char grade = mark >= 75 ?
                 'A' :
                 mark >= 65 && mark < 75 ?
                 'B' :
                 mark >= 55 && mark < 65 ?
                 'C' :
                 mark >= 35 && mark < 55 ?
                 'S':
                 mark < 35 ?
                 'F' : 'F';
//    if (mark >= 75) {
//        grade = 'A';
//    } else if (mark >= 65 && mark < 75) {
//        grade = 'B';
//    } else if (mark >= 55 && mark < 65) {
//        grade = 'C';
//    } else if (mark >= 35 && mark < 55) {
//        grade = 'S';
//    } else if (mark < 35) {
//        grade = 'F';
//    }

    cout << studentName << " " << mark << " " << grade;

}
