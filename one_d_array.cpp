#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int marks[4],sum,i;
	sum=0;
	cout<<"enter marks of 4 subjects \n";
	for(i=0;i<4; i++)
	{
		cin>>marks[i];
	
	}
	cout<<"\n \n";
	for (i=0; i<4; i++)
	{
		cout<<marks[i]<<"\t";
		sum=sum+marks[i];
	}
	cout<<"\n Total marks:\t"<<sum;


	getch ();
return 0;
}