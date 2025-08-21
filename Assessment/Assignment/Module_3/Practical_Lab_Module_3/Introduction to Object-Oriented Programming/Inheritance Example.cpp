/*Que no.3   Write a program that implements inheritance using a base class Person and derived classes Student and
Teacher. Demonstrate reusability through inheritance. Objective: Learn the concept of inheritance.*/

#include <iostream>
#include <string>

// Base class
class Person {
public:
    std::string name;
    int age;

    Person(const std::string& name_val, int age_val) : name(name_val), age(age_val) {}

    void displayPersonInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Derived class Student
class Student : public Person {
public:
    std::string studentID;
    std::string major;

    Student(const std::string& name_val, int age_val, const std::string& id_val, const std::string& major_val)
        : Person(name_val, age_val), studentID(id_val), major(major_val) {}

    void displayStudentInfo() const {
        displayPersonInfo(); // Reusing base class method
        std::cout << "Student ID: " << studentID << ", Major: " << major << std::endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
public:
    std::string employeeID;
    std::string subject;

    Teacher(const std::string& name_val, int age_val, const std::string& emp_id_val, const std::string& subject_val)
        : Person(name_val, age_val), employeeID(emp_id_val), subject(subject_val) {}

    void displayTeacherInfo() const {
        displayPersonInfo(); // Reusing base class method
        std::cout << "Employee ID: " << employeeID << ", Subject: " << subject << std::endl;
    }
};

int main() {
    // Creating objects of derived classes
    Student student1("Alice", 20, "S12345", "Computer Science");
    Teacher teacher1("Mr. Smith", 45, "T98765", "Mathematics");

    // Demonstrating reusability through inheritance
    std::cout << "Student Information:" << std::endl;
    student1.displayStudentInfo(); // Calls displayPersonInfo() internally

    std::cout << "\nTeacher Information:" << std::endl;
    teacher1.displayTeacherInfo(); // Calls displayPersonInfo() internally

    return 0;
}
