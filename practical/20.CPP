#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    string studentID;

public:
    void setStudentDetails(string n, int a, string id) {
        setDetails(n, a); // Reuse base class function
        studentID = id;
    }

    void displayStudent() {
        displayPerson(); // Reuse base class function
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string sub) {
        setDetails(n, a); // Reuse base class function
        subject = sub;
    }

    void displayTeacher() {
        displayPerson(); // Reuse base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create Student object
    Student s;
    s.setStudentDetails("Alice", 20, "S123");
    cout << "Student Details:" << endl;
    s.displayStudent();

    cout << endl;

    // Create Teacher object
    Teacher t;
    t.setTeacherDetails("Mr. Bob", 35, "Mathematics");
    cout << "Teacher Details:" << endl;
    t.displayTeacher();

    return 0;
}
