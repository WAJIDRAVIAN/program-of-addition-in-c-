#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int total,amount,remaining,acountnumber,choice;
	total=10000;
	cout<<"Enter the acount number \n";cin>>acountnumber;
	if(acountnumber==12357)
	{
		cout<<"your current amount is :"<<total;
		cout<<"\n Press 1 for debiting amount and press 2 for crediting amount ";cin>>choice;
		if(choice==1)
		{
			cout<<"Enter the amount you want to debit, (minimum-2000):";cin>>amount;
			if(amount<2000)
			{
				cout<<"you have entered amount less than the limit";
			}
			else
			{
				remaining=total-500-amount;
				if(remaining<2000)
				{
					cout<<"Your remaining amount is less than 2000, you can't debit";
				}
				else
				{
					cout<<"your remaining amount is :"<<remaining;
				}
			}
		}
		if(choice==2)
		{
			cout<<"Enter the amount you want to credit, (maximum-20000):";cin>>amount;
			if(amount>20000)
			{
				cout<<"you have entered amount more than the limit";
			}
			else
			{
				int current=total-500+amount;
				if(current>20000)
				{
					cout<<"Your current amount is more than 20000, you can't credit";
				}
				else
				{
					cout<<"your current amount is :"<<current;
				}
			}
		}
		
	}
	
	
	
return 0;	
}
