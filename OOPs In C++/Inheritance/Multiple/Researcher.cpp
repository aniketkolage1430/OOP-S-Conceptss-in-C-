//Multiple Inheritance in C++
#include <iostream>
using namespace std;

class Researcher {
public:
    void doResearch() { cout << "Doing Research" << endl; }
};

class Lecturer {
public:
    void teach() { cout << "Teaching Students" << endl; }
};

class Professor : public Researcher, public Lecturer {
public:
    void role() { cout << "Professor has multiple roles" << endl; }
};

int main() {
    Professor p;
    p.doResearch();
    p.teach();
    p.role();
    return 0;
}