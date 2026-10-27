#include <iostream>
using namespace std;


class Animal {
public:
    void eat() { 
        cout << "Animal is eating." << endl; 
    }
};

class Dog : public Animal {
public:
    void bark() { 
        cout << "Dog is barking." << endl; 
    }
};

class Puppy : public Dog {
public:
    void weep() { 
        cout << "Puppy is weeping." << endl; 
    }
};


class Cat : public Animal {
public:
    void meow() { 
        cout << "Cat is meowing." << endl; 
    }
};



class Bird {
public:
    void fly() { 
        cout << "Bird is flying." << endl; 
    }
};


class FlyingDog : public Dog, public Bird {
public:
    void magic() { 
        cout << "Flying dog is doing magic." << endl; 
    }
};



class Device {
public:
    void powerOn() { 
        cout << "Device powered on." << endl; 
    }
};


class Scanner : virtual public Device {
public:
    void scan() { 
        cout << "Scanner is scanning." << endl; 
    }
};

class Printer : virtual public Device {
public:
    void print() { 
        cout << "Printer is printing." << endl; 
    }
};

class Copier : public Scanner, public Printer {
public:
    void copy() { 
        cout << "Copier is copying." << endl; 
    }
};


int main() {
    cout << "--- Single Inheritance ---" << endl;
    Dog myDog;
    myDog.eat();
    myDog.bark();

    cout << "\n--- Multilevel Inheritance ---" << endl;
    Puppy myPuppy;
    myPuppy.eat();
    myPuppy.bark();
    myPuppy.weep();

    cout << "\n--- Hierarchical Inheritance ---" << endl;
    Cat myCat;
    myCat.eat(); 
    myCat.meow();

    cout << "\n--- Multiple Inheritance ---" << endl;
    FlyingDog myFlyingDog;
    myFlyingDog.eat();
    myFlyingDog.bark();
    myFlyingDog.fly();
    myFlyingDog.magic();

    cout << "\n--- Hybrid Inheritance ---" << endl;
    Copier myCopier;
    myCopier.powerOn(); 
    myCopier.scan();
    myCopier.print();
    myCopier.copy();

    return 0;
}