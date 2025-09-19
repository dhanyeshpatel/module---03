#include <iostream>
#include <string>
using namespace std;

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


class Student : public Person {
private:
    string studentID;

public:
    void setStudentDetails(string n, int a, string id) {
        setDetails(n, a); 
        studentID = id;
    }

    void displayStudent() {
        displayPerson(); 
        cout << "Student ID: " << studentID << endl;
    }
};

class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string sub) {
        setDetails(n, a); 
        subject = sub;
    }

    void displayTeacher() {
        displayPerson(); 
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    
    Student s;
    s.setStudentDetails("Alice", 20, "S123");
    cout << "Student Details:" << endl;
    s.displayStudent();

    cout << endl;

    Teacher t;
    t.setTeacherDetails("Mr. Bob", 35, "Mathematics");
    cout << "Teacher Details:" << endl;
    t.displayTeacher();

    return 0;
}
