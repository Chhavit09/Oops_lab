# include<iostream>
# include<string.h>
class student
{
    int rollno;
    char name[20];
    float marks1, marks2, marks3;
public:
    void getdata()
    {
        std::cout << "Enter roll number: ";
        std::cin >> rollno;
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter marks of 3 subjects: ";
        std::cin >> marks1 >> marks2 >> marks3;
    }
    void display()
    {
        std::cout << "Roll Number: " << rollno << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks: " << marks1 << ", " << marks2 << ", " << marks3 << std::endl;
    }
    float average()
    {
        return (marks1 + marks2 + marks3) / 3;
    }
    float result()
    {
        float avg = average();
        if (avg >= 33)
            return 1; // Pass
        else
            return 0; // Fail
    }
};
int main()
{
    int choice;
    student s;
    do
    {
        std::cout << "1. Enter student data" << std::endl;
        std::cout << "2. Display student data" << std::endl;
        std::cout << "3. Calculate average marks" << std::endl;
        std::cout << "4. Check result" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                s.getdata();
                break;
            case 2:
                s.display();
                break;
            case 3:
                std::cout << "Average Marks: " << s.average() << std::endl;
                break;
            case 4:
                std::cout << "Result: " << (s.result() ? "Pass" : "Fail") << std::endl;
                break;
            case 5:
                std::cout << "Exiting..." << std::endl;
                break;

            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
        }
    }
    while (choice != 5);
    {
       return 0;
    }
    
}