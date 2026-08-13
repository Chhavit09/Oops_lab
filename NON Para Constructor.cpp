# include <iostream>
# include <string>
class Student 
{
    private:
        std::string name;
        int age;
        int rollNumber;
        int marks1, marks2, marks3;

    public:
        Student() : name(""), age(0), rollNumber(0), marks1(0), marks2(0), marks3(0) {}

        void inputDetails()
        {
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter age: ";
            std::cin >> age;
            std::cout << "Enter roll number: ";
            std::cin >> rollNumber;
            std::cout << "Enter marks for subject 1: ";
            std::cin >> marks1;
            std::cout << "Enter marks for subject 2: ";
            std::cin >> marks2;
            std::cout << "Enter marks for subject 3: ";
            std::cin >> marks3;
        }
    public:
        void display() 
        {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
            std::cout << "Roll Number: " << rollNumber << std::endl;
            std::cout << "Marks 1: " << marks1 << std::endl;
            std::cout << "Marks 2: " << marks2 << std::endl;
            std::cout << "Marks 3: " << marks3 << std::endl;
        }
    public:
        void calculateAverage() 
        {
            float average = (marks1 + marks2 + marks3) / 3.0;
            std::cout << "Average Marks: " << average << std::endl;
            if (average >= 33) 
            {
                std::cout << "Result: Pass" << std::endl;
            } 
            else 
            {
                std::cout << "Result: Fail" << std::endl;
            }
        }

};
int main() 
{
    Student student;
    int choice;
    do 
    {
        std::cout << "1. Enter Student Details" << std::endl;
        std::cout << "2. Display Student Details" << std::endl;
        std::cout << "3. Calculate Average Marks" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) 
        {
            case 1:
                student.inputDetails();
                break;
            case 2:
                student.display();
                break;
            case 3:
                student.calculateAverage();
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
        }
    } while (choice != 4);
    return 0;
}
