#include "course.h"
#include <iostream>
using namespace std;



int main()
{	
	cout << "Enter 1 to load and calculate gpa from file or Enter 2 to add new course, any number to exit \n";
	int choice = -1;
	while(true){

		cin >> choice;
		switch(choice){
			case 1:
				save_courses();
				break;
			case 2:
				load_courses();
				break;
			default:
			return 0;
		}
		cout << "Enter 1 or 2\n";
	}
}