#include "gradeStudent.h"
#include <vector>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include "print.h"
using namespace std;

namespace MYNBRI003{
    float gradeStudent(vector<MYNBRI003::StudentRecord> records, string searchNum){
    bool flag = false;
    float average = 0.0f;
    for(int a = 0 ; a < records.size();a=a+1){
        if(searchNum == records.at(a).studentnum){
            flag = true;
            system("clear");

            string line = records.at(a).classrecord;
            istringstream iss(line);
			vector<string> results(istream_iterator<string>{iss}, istream_iterator<string>());
			for(int b = 0;b<results.size();b=b+1){
                average = average + strtof(results.at(b).c_str(),0);

			}
            average = average/results.size();
            cout << "The student's average:" << endl;
            cout << average << endl;

        }
    }
    if(!flag){
        cout << "This student does not exist please try again \n"<< endl;
    }

}
}
