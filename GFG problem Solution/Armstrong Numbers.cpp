//check if the given number is armstrong number

#include<iostream>
using namespace std;

string arm (int n)
{
	int sum=0;
	int t=n;
	while (n>0)
	{
		int x=n%10;
		sum+=x*x*x;
		n=n/10;
	}
	if (sum==t)
	return "yes";
	else return "no";
}
int main ( )
{
	int n;
	cin>>n;
cout <<	arm(n);
	return 0;
}
