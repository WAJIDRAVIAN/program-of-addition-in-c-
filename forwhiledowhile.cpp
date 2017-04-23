//wajid haneef ravian ,cell# 03067071981
/* in this program we take a look that how
1- while
2- do while
3- for
repetitions work
*/
#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int counter,marks,number,how_many;
	counter=0;
	//use of while loop or repetition
	cin>>how_many;
	while(counter<=how_many)
	{
		cout<<"\n while";
		counter++;
	}

	//use of do while loop

	marks=0;
	do
	{
		cout<<"\n do while";
		marks++;
	}

	while(marks<=5);

	//use of for loop

	for (number=0; number<=5; number++)
	
	{
		cout<<"\n for ";
	
	}

	getch();
}