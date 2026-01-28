#include <iostream>
#include "person.h"
#include "student.h"
#include "staff.h"

using namespace std;

int main()
{
    /*
    person p;
    p.inputBasicInfo("Pon", 19);
    p.displayBasicInfo();
    */

    //student s;
    //s.inputBasicInfo("pon", 19);
    //s.inputStudentInfo(12345, 90.1);
    //s.displayStudentInfo();

    /*
    student s1(12345, 90.0, "hap", 19);
    s1.displayStudentInfo();
    */

    // Create a student object using the parameterized constructor
    student s1("S12345", 3.75, "Juan Dela Cruz", 20);
    cout << "Student Info:" << endl;
    s1.displayStudentInfo();
    cout << endl;

    // Create a staff object using the parameterized constructor
    staff st1("Teacher", 50000.0, "Maria Clara", 30);
    cout << "Staff Info:" << endl;
    st1.displayStaffInfo();
    cout << endl;

    // Modify student information using setters
    s1.setName("Andres Bonifacio");
    s1.setAge(25);
    s1.setStudentID("S67890");
    s1.setStudentGPA(3.9);
    cout << "Updated Student Info:" << endl;
    s1.displayStudentInfo();
    cout << endl;

    // Modify staff information using setters
    st1.setName("José Rizal");
    st1.setAge(35);
    st1.setPosition("Principal");
    st1.setSalary(80000.0);
    cout << "Updated Staff Info:" << endl;
    st1.displayStaffInfo();

    return 0;
}
