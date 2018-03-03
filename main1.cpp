#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
string encrypt(string Msg)
{
	string ctxt="";
	int a = 3;
	int b = 6;
	for (int i = 0; i < Msg.length(); i++)
	{
		ctxt = ctxt + (char) ((((a * Msg[i]) + b) % 26) + 65);
	}
	return ctxt;
}

string decrypt(string ctxt)
{
	string Msg="";
	int a = 3;
	int b = 6;
	int a_inv = 0;
	int flag = 0;
	for (int i = 0; i < 26; i++)
	{
		flag = (a * i) % 26;
		if (flag == 1)
		{
			a_inv = i;
		}
	}
	for (int i = 0; i < ctxt.length(); i++)
	{
		Msg = Msg + (char) (((a_inv * ((ctxt[i] - b)) % 26)) + 65);
	}
	return Msg;
}
int main(int argc, char** argv) 
{
	cout << "enter the code : ";
	string code ;
	cin >>code;
	cout << "the code is : "<<code;
	cout << "\n Encryted code is "<<encrypt(code);
	
	cout << "\n Decrypted code is "<<decrypt(encrypt(code));
	
	return 0;
}
