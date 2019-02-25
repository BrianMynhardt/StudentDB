#include "print.h"
#include <string>

string print(MYNBRI003::StudentRecord current){
    string text = current.name + " " + current.surname + " " + current.studentnum + " " + current.classrecord;
    return text;
}
