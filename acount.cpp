#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int amount,acountnumber,current,total,remaining,choice;
	total=5000;
	cout<<"Enter your acount number, e.g 1234567 \n";cin>>acountnumber;
	if(acountnumber==12357)
	{
		cout<<"current balance is :"<<total;
		cout<<"\n 1-Debit \n 2-Credit \n";cin>>choice;
		switch(choice)
			{case 1:
				cout<<"\n Enter amount you want to debit, minimum 500 \n";cin>>amount;
				if(amount<500)
				{
					cout<<"\n You have entered amount less than limit \n";
				}
				else 
				{
					remaining=total-50-amount;
					cout<<"\n Your remaining amount is:"<<remaining<<"\n You have debited :"<<amount<<"Transaction charges are :50 \n";

				}

			case 2:
				cout<<"Enter amount you want to credit, maximum 20000 \n";cin>>amount;
				if(amount>20000)
				{
					cout<<"The amount you are trying to credit is exceeding limit \n";
				}
				else
				{
					current=total+amount-50;
					cout<<"\n Your current amount is:"<<current<<"\n You have credited :"<<amount<<"Transaction charges are :50 \n";
				}
		}
	}
	else
	{
		cout<<"You have entered invalid acount number";
	}

	getch;

}