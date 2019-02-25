#include <fstream>  // Needed for file stream objects
#include <iostream> // Needed for console stream objects
#include <sstream>  // Needed for string stream objects
#include <string>   // Needed for strings
#include <vector>   // Needed for the vector container
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include "addStudent.h"
#include "saveDB.h"
#include "readDB.h"
#include "viewStudent.h"
#include "gradeStudent.h"
#include "print.h"
using namespace std;

namespace MYNBRI003{
}



int main()
{
    string answer;
    vector<MYNBRI003::StudentRecord> records;


    for(;;){
        cout << "1. Add student"<< endl;
        cout << "2. Read database" << endl;
        cout << "3. Save database"<< endl;
        cout << "4. Display given student data"<< endl;
        cout << "5. Grade student"<< endl;
        cout << "Enter a number or \"q\" to quit:"<< endl;

        getline(cin, answer);

        if(answer == "1"){
            bool duplicate = false;
            string name, surname, studentnum, classrecord;

            system("clear");

            cout << "Please enter the student's name:"<< endl;
            getline(cin, answer);
            system("clear");
            name = answer;

            cout << "Please enter the student's surname:"<< endl;
            getline(cin, answer);
            system("clear");
            surname = answer;

            cout << "Please enter the student's student number:"<< endl;
            getline(cin, answer);
            system("clear");
            std::transform(answer.begin(), answer.end(),answer.begin(), ::toupper);
            studentnum = answer;
            for( int a =0; a < records.size(); a = a + 1 )
				{
				    if(!records.empty()){
                        if(studentnum == records.at(a).studentnum){
                            duplicate = true;
                        }
				    }
				}

            cout << "Please enter the student's class record:"<< endl;
            getline(cin, answer);
            system("clear");
            classrecord = answer;
            if(duplicate){
                cout << "This student allready exists please try again \n"<< endl;
                continue;
            }
            cout<< "Student Added to list!" << endl;
            records.push_back(MYNBRI003::addStudent(name,surname,studentnum,classrecord));


        }else if(answer == "2"){
            system("clear");
            records = MYNBRI003::readDB();
            for(int a = 0 ; a<records.size();a=a+1){
            cout << print(records.at(a))<<endl;
		}

        }else if(answer == "3"){
            system("clear");
            MYNBRI003::saveDB(records);

        }else if(answer == "4"){
            system("clear");
            cout << "Enter the student number you wish to find:" << endl;
            getline(cin, answer);
            std::transform(answer.begin(), answer.end(),answer.begin(), ::toupper);
            MYNBRI003::viewStudent(records,answer);


        }else if(answer == "5"){
            system("clear");
            cout << "Enter the student number you wish to find:" << endl;
            getline(cin, answer);
            std::transform(answer.begin(), answer.end(),answer.begin(), ::toupper);
            gradeStudent(records,answer);

        }else if(answer == "q" || answer == "Q"){
            break;
        }else if(answer == "print\n"){
            for(int a=0;a< records.size(); a= a+1){
                cout << print(records.at(a)) << endl;

            }
        }else{
            system("clear");
            continue;
        }


    }


}



