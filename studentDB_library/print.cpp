#include "print.h"
#include <string>
using namespace std;
namespace MYNBRI003{
string print(MYNBRI003::StudentRecord current){
    string text = current.name + " " + current.surname + " " + current.studentnum + " " + current.classrecord;
    return text;
}}
