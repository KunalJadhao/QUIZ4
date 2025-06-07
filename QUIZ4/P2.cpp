#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

class School {  // Base class of the program/parent class
protected:  
    string name;
    int age;
    int standard;
    int marks;

public:
    // Constructor
    School(string n, int a, int s, int m) : name(n), age(a), standard(s), marks(m) {}
    virtual void showdetaileddescription() = 0; //Abstraction
    virtual void profile() = 0; 
    virtual ~School() {} // Virtual destructor
};

class Student : public School { //inheritance
public:
    // Constructor
    Student(string n, int a, int s, int m) : School(n, a, s, m) {}
    
    void showdetaileddescription() override {
        cout << "---Student Profile---" << endl;
        cout << " Name: " << name << endl;
        cout << " Class: " << standard << endl;
        cout << " Age: " << age << endl;
        cout << " Marks: " << marks << endl;
    }
    
    void profile() override { //override
        cout << "Student Profile Summary" << endl;
    }
    
    // Destructor
   virtual ~Student() override {}
};

class Report : public School { // Inheritance 
private:
    vector<int> markt; 
    vector<int> aget;
    vector<string> namet;
    vector<int> standardt;

public:
    // Constructor
    Report(string n, int a, int s, int m) : School(n, a, s, m) {}
    
    void addStudentData() {
        namet.push_back(name);
        aget.push_back(age);
        standardt.push_back(standard);
        markt.push_back(marks);
    }
    
    void showdetaileddescription() override {
        cout << "---Report Card---" << endl;
        cout << " Student: " << name << endl;
        cout << " Class: " << standard << endl;
        cout << " Age: " << age << endl;
        cout << " Marks: " << marks << endl;
        
        // Grading of the student 
        if (marks >= 90) {
            cout << " The student has passed with A+ grade." << endl;
        }
        else if (marks >= 80) {
            cout << " The student has passed with B+ grade." << endl;
        }
        else if (marks >= 70) {
            cout << " The student has passed with C grade." << endl;
        }
        else if (marks >= 60) {
            cout << " The student has passed with D the minimal grade." << endl;
        }
        else {
            cout << " The student has Failed!" << endl;
        }
    }
    
    void profile() override {
        cout << "View the Student Profile: " << endl;
    }
    
    // Destructor
    virtual~Report() override {}
};

int main() {
    Report r("Kunal", 23, 4, 88); 
    r.showdetaileddescription();
    return 0;
}