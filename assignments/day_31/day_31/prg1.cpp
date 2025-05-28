#include <iostream>
<<<<<<< HEAD
#include <string> 
using namespace std;


=======
#include <iomanip> // For setting precision
using namespace std;

// Base class: Student
>>>>>>> a368bc6dc3e24aa8d23576702bc0ada71b7d6839
class Student {
protected:
    int rollNo;
    string name;
    int age;

public:
<<<<<<< HEAD
    
=======
    // Constructor to initialize student details
>>>>>>> a368bc6dc3e24aa8d23576702bc0ada71b7d6839
    Student(int r, string n, int a) : rollNo(r), name(n), age(a) {
        cout << "Student Constructor Called" << endl;
    }

<<<<<<< HEAD
    
=======
    // Method to display student details
>>>>>>> a368bc6dc3e24aa8d23576702bc0ada71b7d6839
    void display() const {
        cout << "Student Info:" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

<<<<<<< HEAD
    
=======
    // Destructor
>>>>>>> a368bc6dc3e24aa8d23576702bc0ada71b7d6839
    ~Student() {
        cout << "Student Destructor Called" << endl;
    }
};

<<<<<<< HEAD

class Marks : public Student {
private:
    float marks1, marks2, marks3;

public:
    
=======
// Derived class: Marks
class Marks : public Student {
private:
    float marks1, marks2, marks3;

public:
    // Constructor to initialize student and marks
>>>>>>> a368bc6dc3e24aa8d23576702bc0ada71b7d6839
    Marks(int r, string n, int a, float m1, float m2, float m3)
        : Student(r, n, a), marks1(m1), marks2(m2), marks3(m3) {
        cout << "Marks Constructor Called" << endl;
    }

<<<<<<< HEAD
    
=======
    // Method to calculate total and average marks
>>>>>>> a368bc6dc3e24aa8d23576702bc0ada71b7d6839
    void calculate() const {
        float total = marks1 + marks2 + marks3;
        float average = total / 3;
        cout << "Full Result:" << endl;
        cout << "Total Marks: " << total << endl;
<<<<<<< HEAD
        cout << "Average Marks: "<< average << endl;
    }

    
=======
        cout << "Average Marks: " << fixed << setprecision(2) << average << endl;
    }

    // Destructor
>>>>>>> a368bc6dc3e24aa8d23576702bc0ada71b7d6839
    ~Marks() {
        cout << "Marks Destructor Called" << endl;
    }
};

int main() {
<<<<<<< HEAD
   
    Marks student(101, "Alice", 20, 89, 76, 91);

   
    student.display();

    
    student.calculate();

    return 0;
}
=======
    // Creating an object of Marks class
    Marks student(101, "Alice", 20, 89, 76, 91);

    // Displaying student information
    student.display();

    // Displaying full result
    student.calculate();

    return 0;
}
>>>>>>> a368bc6dc3e24aa8d23576702bc0ada71b7d6839
