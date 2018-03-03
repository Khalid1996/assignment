#include <iostream>
using namespace std;
int main()
{
	double old_salary,retro_salary,new_salary,increase_salary,new_monthly_salary;
	char ans;
	const double rate=.076;
	
	do 
	{
		cout <<"please enter your old annual salary. "<<endl;
		cin >>old_salary;
		
		new_salary=(old_salary*.076)+old_salary;
		increase_salary=new_salary-old_salary;
		new_monthly_salary=new_salary/12;
		retro_salary=(old_salary/2)*rate;
		
		cout <<endl;
		cout <<"your new annual salary is  "<<"$";
		cout <<new_salary<<endl;
		cout <<"you receive  "<<"$";
		cout <<increase_salary;
		cout <<" increase in salary. "<<endl;
		cout <<"you will receive  "<<"$";
		cout <<retro_salary;
		cout <<" in retroactive salary. "<<endl;
		cout <<"your new monthly salary is  "<<"$";
		cout <<new_monthly_salary;
		cout <<endl;
		cout <<endl;
		cout <<endl;
		cout <<endl;

		cout <<endl<<"if you would like to repeat ?\n";
		cin >>ans;

	}
	while (ans=='y'||'Y'==ans);
	cout << "thank you for your time.\n";
	
	return 0;
}
