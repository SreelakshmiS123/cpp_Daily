#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

// Base class: Student
class Student {
protected:
    int rollNo;
    string name;
    int age;

public:
    // Constructor to initialize student details
    Student(int r, string n, int a) : rollNo(r), name(n), age(a) {
        cout << "Student Constructor Called" << endl;
    }

    // Method to display student details
    void display() const {
        cout << "Student Info:" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student Destructor Called" << endl;
    }
};

// Derived class: Marks
class Marks : public Student {
private:
    float marks1, marks2, marks3;

public:
    // Constructor to initialize student and marks
    Marks(int r, string n, int a, float m1, float m2, float m3)
        : Student(r, n, a), marks1(m1), marks2(m2), marks3(m3) {
        cout << "Marks Constructor Called" << endl;
    }

    // Method to calculate total and average marks
    void calculate() const {
        float total = marks1 + marks2 + marks3;
        float average = total / 3;
        cout << "Full Result:" << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << fixed << setprecision(2) << average << endl;
    }

    // Destructor
    ~Marks() {
        cout << "Marks Destructor Called" << endl;
    }
};

int main() {
    // Creating an object of Marks class
    Marks student(101, "Alice", 20, 89, 76, 91);

    // Displaying student information
    student.display();

    // Displaying full result
    student.calculate();

    return 0;
}
