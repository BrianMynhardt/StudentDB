#include "readDB.h"
#include <fstream>  // Needed for file stream objects
#include <iostream> // Needed for console stream objects
#include <sstream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;
namespace MYNBRI003{
std::vector<MYNBRI003::StudentRecord> readDB(){
    string line;
    ifstream in("students.txt");
	vector<MYNBRI003::StudentRecord> records;
	if(!in)
		{ cout << "Couldn't open " << "students.txt" << endl; }
	else
		{
		while( getline(in,line))
		{
			string text = "";
			istringstream iss(line);
			vector<string> results(istream_iterator<string>{iss}, istream_iterator<string>());

            MYNBRI003::StudentRecord addToList;
            addToList.name = results.at(0);
            addToList.surname = results.at(1);
            addToList.studentnum = results.at(2);
			for( int a =3; a < results.size(); a = a + 1 )
				{
				    if(a==0){
					text = text + results.at(a);}
				  else {
					text = text + " " + results.at(a);
					}
				}
            addToList.classrecord = text;

            records.push_back(addToList);
		}

		in.close();
		}
		return records;
}}

