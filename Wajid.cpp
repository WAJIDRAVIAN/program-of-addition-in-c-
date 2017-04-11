#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	//define the variables that will be used in the program
	int total,amount,remaining,acountnumber,choice;
	//total amount present in the acount
	total=10000;
	//get the acount number from user
	cout<<"Enter the acount number \n";cin>>acountnumber;
	//if acountnumber is valid then run the following code else goto line#85
	if(acountnumber==12357)
	{
		//show the total balance present in the acount
		cout<<"Your current amount is :"<<total;
		//user should choose either he wants to debit or credit amount
		cout<<"\n Choose one option \n 1-Debit \n 2-Credit \n ";cin>>choice;
		//if user choose option 1 then run the following code else goto line#48
		if(choice==1)
		{
			//get the debiting amount from user
			cout<<"Enter the amount you want to debit, (minimum-2000):";cin>>amount;
			//if user enter less amount than limit ,run following code else goto line#30
			if(amount<2000)
			{
				//show the message that you have entered less amount than limit
				cout<<"you have entered amount less than the limit";
			}
			else
			{
				//calculate the remaining amount
				remaining=total-500-amount;
				//if remaining amount is less than limit then run the following code else goto line#40
				if(remaining<2000)
				{
					//show the message to user that remaining amount is less than limit
					cout<<"Your remaining amount is less than 2000, you can't debit";
				}
				else
				{
					//show the remaining,debited amount and charges to user
					cout<<"Your remaining amount is :"<<remaining<<"Debited amount is:"<<amount<<"Transaction charges are: 500 ";
				}
			}
		}
		
		else
	 {  //if user chooses option 2 then run the following code else goto line#77
		if(choice==2)
		{
			//get the crediting amount from user
			cout<<"Enter the amount you want to credit, (maximum-20000):";cin>>amount;
			//if amount is exceeding limit ,run the following code else goto line#60
			if(amount>20000)
			{
				//show the message to user of exceeding limit
				cout<<"you have entered amount more than the limit";
			}
			else
			{
				//calculate the current amount
				int current=total-500+amount;
				//if current amount is exceeding limit then run the following code else goto line#71
				if(current>20000)
				{
					//show the message of exceeding limit of current balance
					cout<<"Your current amount is exceeding limit, you can't credit";
				}
				else
				{
					//show the current and credited amount to user
					cout<<"Your current amount is :"<<current<<"Credited amount is :"<<amount;
				}
			}
		}
		else
	  {
		//show the message of invalid number
		cout<<"You have entered invalid number, enter only 1 or 2";
		}
       }
	}
	
 else
	{
		//show the message of invalid number
		cout<<"You have entered invalid acount number";
	}
	
	
return 0;	
}
