#include "addStudent.h"


using namespace std;
    MYNBRI003::StudentRecord MYNBRI003::addStudent(string name, string surname, string studentnum, string classrecord){
    MYNBRI003::StudentRecord newStudent = {name,surname,studentnum,classrecord};
    return newStudent;
}



