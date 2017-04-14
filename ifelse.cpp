//define input output library
#include<iostream>
//deine console output library
#include<conio.h>
using namespace std;
//using main
void main()
{
	int marks; //define variables
	//get marks from user
	cin>>marks;
	if(marks>=90 && marks<=100)
	{
		cout<<"You have got A+ grade \n"<<marks<<"=A+ \n";
	}
	else
	{
		if(marks>=80 && marks<90)
	{
		cout<<"You have got A grade \n"<<marks<<"=A \n";
	}
	else
	{
		if(marks>=70 && marks<80)
	{
		cout<<"You have got B grade \n"<<marks<<"=B \n";
	}
	else
	{
		if(marks>=60 && marks<70)
	{
		cout<<"You have got C grade \n"<<marks<<"=C \n";
	}
	else
	{
		if(marks>=50 && marks<60)
	{
		cout<<"You have got D grade \n"<<marks<<"=D \n";
	}
	else
	{
		if(marks<50)
	{
		cout<<"You are fail, you have secured less than 50% marks";
	}
	else
	{
		cout<<"You have entered invalid marks, enter 100 or less than 100 \n";
	}
	}
	}
	}
	}

	}
	
	
	getch();
}
