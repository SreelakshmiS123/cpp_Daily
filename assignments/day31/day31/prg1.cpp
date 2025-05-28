#include <iostream>
#include <string> 
using namespace std;
class Student {
protected:
    int rollNo;
    string name;
    int age;

public:
    Student(int r, string n, int a) : rollNo(r), name(n), age(a) {
        cout << "Student Constructor Called" << endl;
    }
    void display() const {
        cout << "Student Info:" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    ~Student() {
        cout << "Student Destructor Called" << endl;
    }
};

class Marks : public Student {
private:
    float marks1, marks2, marks3;

public:
    Marks(int r, string n, int a, float m1, float m2, float m3)
        : Student(r, n, a), marks1(m1), marks2(m2), marks3(m3) {
        cout << "Marks Constructor Called" << endl;
    }

    void calculate() const {
        float total = marks1 + marks2 + marks3;
        float average = total / 3;
        cout << "Full Result:" << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }


    ~Marks() {
        cout << "Marks Destructor Called" << endl;
    }
};

int main() {

    Marks student(101, "Alice", 20, 89, 76, 91);


    student.display();


    student.calculate();

    return 0;
}
