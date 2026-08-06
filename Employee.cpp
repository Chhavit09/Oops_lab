# include<iostream>
# include<string.h>
class employee
{
    int id;
    char name[20];
    float basic_salary;
    float da, hra, gross_salary;
public:
    void getdata()
    {
        std::cout<<"Enter id: ";
        std::cin>>id;
        std::cout<<"Enter name: ";
        std::cin>>name;
        std::cout<<"Enter basic salary: ";
        std::cin>>basic_salary;
    }
    void display()
    {
        std::cout<<"Id: "<<id<<std::endl;
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Salary: "<<basic_salary<<std::endl;
    }
    void calculatesalary()
    {
        da = 0.15* basic_salary;
        hra = 0.2 * basic_salary;
        gross_salary = basic_salary + da + hra;
        std::cout<<"Gross Salary: "<<gross_salary<<std::endl;
    }
};
int main()
{
   int choice;
   do
   {
         employee e;
          std::cout<<"1. Enter employee details"<<std::endl;
          std::cout<<"2. Display employee details"<<std::endl;
          std::cout<<"3. Calculate salary"<<std::endl;
          std::cout<<"4. Exit"<<std::endl;
          std::cout<<"Enter your choice: ";
          std::cin>>choice;
          switch(choice)
          {
                case 1:
                 e.getdata();
                 break;
                case 2:
                 e.display();
                 break;
                case 3:
                 e.calculatesalary();
                 break;
                case 4:
                 std::cout<<"Exiting..."<<std::endl;
                 break;
                default:
                 std::cout<<"Invalid choice!"<<std::endl;
          }
     }
     while(choice != 4);
    return 0;

}
