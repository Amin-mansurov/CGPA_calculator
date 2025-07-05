#include <iostream>
#include <fstream>
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
	ifstream file("NameOfStudent");
	string line;
	string courseName = "";
	int credit;
	string grade = "";
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
		cout << courseName << " " << credit << " " << grade;
	}
}


int main()
{
	// cout << "Please enter number of courses: ";
	// int courses;
	// cin >> courses;

	// while(courses--){
	// 	save_courses();
	// }
	load_courses();
	return 0;
}