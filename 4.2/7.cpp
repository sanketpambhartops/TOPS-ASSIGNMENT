//multilevel inheretance

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    // Function to initialize data
    void initializeData() {
        cout << "Enter name: ";
        getline(cin >> ws, name);
        cout << "Enter age: ";
        cin >> age;
    }

    // Function to display data
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    // Function to read data
    void readData() {
        initializeData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    // Function to write data
    void writeData() {
        displayData();
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    // Function to read data
    void readData() {
        initializeData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    // Function to write data
    void writeData() {
        displayData();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student;
    cout << "Enter student details: " << endl;
    student.readData();
    cout << "Student details: " << endl;
    student.writeData();

    Teacher teacher;
    cout << "Enter teacher details: " << endl;
    teacher.readData();
    cout << "Teacher details: " << endl;
    teacher.writeData();

    return 0;
}