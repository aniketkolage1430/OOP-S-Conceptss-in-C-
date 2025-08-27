//Hybrid Inheritance in C++
#include <iostream>
using namespace std;

class Person2 {
public:
    string name;
    void setName(string n) { name = n; }
};

class Academics : public Person2 {
public:
    int marks;
    void setMarks(int m) { marks = m; }
};

class Sports {
public:
    int score;
    void setScore(int s) { score = s; }
};

class AllRounder : public Academics, public Sports {
public:
    void display() {
        cout << "Name: " << name << ", Marks: " << marks << ", Sports Score: " << score << endl;
    }
};

int main() {
    AllRounder ar;
    ar.setName("Aniket");
    ar.setMarks(88);
    ar.setScore(42);
    ar.display();
    return 0;
}