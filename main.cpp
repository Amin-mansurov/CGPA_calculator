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

int main()
{
	cout << "Please enter number of courses: ";
	int courses;
	cin >> courses;

	while(courses--){
		save_courses();
	}

	return 0;
}