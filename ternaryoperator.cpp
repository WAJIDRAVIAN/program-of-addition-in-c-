//in this program we will use ternary operator ?:
#include<iostream>
#include<conio.h>
 using namespace std;
 void main()
 {
	 int marks;
	 //get marks from user
	 cout<<"enter marks:";cin>>marks;

	 cout<<(marks>=60? "passed" : "failed");


	 getch();
 }