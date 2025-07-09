#include "course.h"
#include <fstream>
#include <iostream>
#include <map>

using namespace std;

void save_courses(){

	ofstream file("NameOfStudent",	 std::ofstream::app);

	cin.ignore();
	string courseName;
	cout << "Please enter course name: ";
	cin  >> courseName;

	cin.ignore();
	int credit;
	cout << "Please enter credit of course: ";
	cin >> credit;

	cin.ignore();
	string grade;
	cout << "Please enter grade of course: ";
	getline(cin, grade);
	
	file << courseName << ":" << credit << ":" << grade << endl;

	cout << "Course detail saved" << endl;
	file.close();

}

void load_courses()
{
	map <string, int> gradeToInt = {{"A+",4},{"A",4},{"A-",3.7},
									{"B+",3.3},{"B",3},{"B-",2.7},
									{"C+",2.3},{"C",2},{"C-",1.7},
									{"D+",1.3},{"D",1},{"F",0}};
	ifstream file("NameOfStudent");
	string line;
	string courseName = "";
	int credit;
	string grade = "";
	int gradeInt;
	while(getline(file,line)){

		int sizeLine = size(line);
		int cnt = 0; // cnt for knowing if already encountered to ':'
		for (int i = 0; i < sizeLine; ++i)
		{
			if(line[i] != ':' and cnt == 0)
				courseName += line[i];

			if (line[i] == ':') 
				cnt ++;
			else if (cnt == 1){
				credit = int(line[i]) - 48;
			}
			else if(cnt == 2){
				grade += line[i]; 
			}
			
		}
		cout << courseName << " " << credit << " " << grade << " ";
		
		cout << gradeToInt[grade];
	}

}