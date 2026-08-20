/*Implement a C++ program to demonstrate the concept of data abstraction using the concept of Class and
Objects*/

#include <iostream>
using namespace std;

class Student
{
private:
    int marks1, marks2, marks3;

public:
    void getMarks()
    {
        cout << "Enter marks of subject 1: ";
        cin >> marks1;

        cout << "Enter marks of subject 2: ";
        cin >> marks2;

        cout << "Enter marks of subject 3: ";
        cin >> marks3;
    }

    void calculateAverage()
    {
        float average = (marks1 + marks2 + marks3) / 3.0;
        cout << "Average Marks: " << average << endl;
    }
};

int main()
{
    Student s;

    s.getMarks();
    s.calculateAverage();

    return 0;
}