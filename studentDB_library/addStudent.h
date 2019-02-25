#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H
//any includes here
#include <string>
using namespace std;
namespace MYNBRI003 {
    struct StudentRecord{
    string name;
    string surname;
    string studentnum;
    string classrecord;
    };


    StudentRecord addStudent(string name, string surname, string studentnum, string classrecord);
}
#endif
