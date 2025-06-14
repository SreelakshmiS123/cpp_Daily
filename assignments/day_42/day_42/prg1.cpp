#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    virtual void getdata() = 0; // pure virtual function
    virtual void putdata() = 0; // pure virtual function
    virtual ~Person() {}
};

class Professor : public Person {
private:
    int publications;
    static int id_counter;
    int cur_id;
public:
    Professor() {
        cur_id = ++id_counter;
    }

    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() override {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

int Professor::id_counter = 0;

class Student : public Person {
private:
    static const int MARKS_COUNT = 6;
    int marks[MARKS_COUNT];
    static int id_counter;
    int cur_id;
public:
    Student() {
        cur_id = ++id_counter;
    }

    void getdata() override {
        cin >> name >> age;
        for (int i = 0; i < MARKS_COUNT; i++) {
            cin >> marks[i];
        }
    }

    void putdata() override {
        int sum = 0;
        for (int i = 0; i < MARKS_COUNT; i++) {
            sum += marks[i];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};

int Student::id_counter = 0;

int main() {

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person* per[n];

    for (int i = 0;i < n;i++) {

        cin >> val;
        if (val == 1) {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for (int i = 0;i < n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
