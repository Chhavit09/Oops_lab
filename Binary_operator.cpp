// write the cpp program to overload comparison operators (<,>,==,!=) and comapre two object of the same class//
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;
public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}
    bool operator<(const Distance& d) const 
    {
        int totalThis = feet * 12 + inches;
        int totalOther = d.feet * 12 + d.inches;
        return totalThis < totalOther;
    }
    bool operator>(const Distance& d) const 
    {
        int totalThis = feet * 12 + inches;
        int totalOther = d.feet * 12 + d.inches;
        return totalThis > totalOther;
    }
    bool operator==(const Distance& d) const 
    {
        int totalThis = feet * 12 + inches;
        int totalOther = d.feet * 12 + d.inches;
        return totalThis == totalOther;
    }
    bool operator!=(const Distance& d) const 
    {
        return !(*this == d);
    }
    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() 
{
    Distance d1(5, 6);
    Distance d2(4, 10);
    cout << "d1: ";
    d1.display();
    cout << "d2: ";
    d2.display();
    if (d1 < d2)
        cout << "d1 is less than d2" << endl;
    else if (d1 > d2)
        cout << "d1 is greater than d2" << endl;
    else if (d1 == d2)
        cout << "d1 is equal to d2" << endl;
    else
        cout << "d1 and d2 are not comparable" << endl;
    if (d1 != d2)
        cout << "d1 is not equal to d2" << endl;

    return 0;
}