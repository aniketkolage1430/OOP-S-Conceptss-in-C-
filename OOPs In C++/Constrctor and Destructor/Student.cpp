#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor called!" << endl;
    }

    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor called!" << endl;
    }

    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor called!" << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;                 // Default Constructor
    Student s2("Aniket", 21);   // Parameterized Constructor
    Student s3(s2);             // Copy Constructor
    s2.display();
    s3.display();
    return 0;                   // Destructor called automatically
}