//define input output library
#include<iostream>
//deine console output library
#include<conio.h>
using namespace std;
//using main
void main()
{
	char grade; //define variables
	//get grade from user
	cin>>grade;
	switch(grade)
	{
	case 'A':
		cout<<"You have secured 90% to 100% marks"; break;
	case 'B':
		cout<<"You have secured 80% to 89% marks"; break;
	case 'C':
		cout<<"You have secured 70% to 79% marks"; break;
		case 'D':
		cout<<"You have secured 60% to 69% marks"; break;
		case 'E':
		cout<<"You have secured 50% to 59% marks"; break;
		default:
		cout<<"You are fail , you have secured less than 50% marks"; break;

	}
	

	getch();
}
