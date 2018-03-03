#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	double call_cost,rate;
	int minutes,time;
	char choice;
	string day;

	{
		
	
	cout << "Enter the started time of the call : "<<endl;
	cin >> time ;
	
	while (time < 0 || time >= 2400)
	{
		cout << "\n you entered non valid Time ";
		cout << "Enter the started time of the call : "<<endl;
        cin >> time;
	}
	cout << "Enter the length of the call in minutes : ";
	cin >>minutes;
	
	cout << "Enter the day of the week on which you called using "<<"only the first two letter of the day.(Monday=mo): ";
	cin >> day;
	
	if (day=="mo"||day=="Mo"||day=="MO"||day=="tu"||day=="Tu"||day=="TU"||day=="we"||day=="We"||day=="WE"||day=="th"||day=="Th"||day=="TH"||day=="fr"||day=="Fr"||day=="FR")
	{
		if (time >= 800 && time <= 1800)
		rate=0.40;
		else
		rate=0.25;
		call_cost=minutes*rate;
		cout << "\n your rate of the call was "<<"$"<<rate<<" a minute"<<endl<<"your total cost : "<<call_cost;
		
		}
	else if (day=="sa"||day=="Sa"||day=="SA"||day=="su"||day=="Su"||day=="SU")
	{
		rate=0.15;
		call_cost=minutes*rate;
		cout << "\n your rate of the call was "<<"$"<<rate<<" a minute"<<endl<<"your total cost : "<<call_cost;

		}	
	else 
	cout << "you entered a non valid entry.try again. ";
	
	cout <<endl<<"\n would like to calculate your bill again ? (y/n) : ";
	cin >>choice ;
	
	cout <<endl<<endl;
}
   while (choice=='y'||choice=='Y')
	
	
	return 0;
}
