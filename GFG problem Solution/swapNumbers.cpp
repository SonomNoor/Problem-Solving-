
//Swap given two numbers and print them. (Try to do it without a temporary variable.) and return it.

#include<bits/stdc++.h>
using namespace std;

int swap ( int a, int b)
{
	//return {a+b-a,a+b-b};
	a=a+b-a;
	b=a+b-a;
	return {a,b};
}


int main ( )
{
	int a,b;
	cin>>a>>b;
	
cout<<swap (a,b);
	
	return 0;
}
