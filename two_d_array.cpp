#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int marks[2][2],sum,i,j;
	sum=0;
	cout<<"enter marks of 4 subjects \n";
	for(i=0;i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cin>>marks[i][j];
		}
	}
	cout<<"\n \n";
	for (i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
		cout<<marks[i][j]<<"\t";
		sum=sum+marks[i][j];
		}
	}
	cout<<"\n Total marks:\t"<<sum;


	getch ();
	return 0;
}