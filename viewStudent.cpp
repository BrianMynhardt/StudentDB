#include "viewStudent.h"
#include <vector>
#include <cstdlib>
#include <iostream>
#include "print.h"
using namespace std;
namespace MYNBRI003{
void viewStudent(vector<MYNBRI003::StudentRecord> records, string searchNum ){
    bool flag = false;
    for(int a = 0 ; a < records.size();a=a+1){
        if(searchNum == records.at(a).studentnum){
            flag = true;
            system("clear");
            cout << "The student's information:" << endl;
            cout << print(records.at(a))<< endl;
        }
    }
    if(!flag){
        cout << "This student does not exist please try again \n"<< endl;
    }

}}
