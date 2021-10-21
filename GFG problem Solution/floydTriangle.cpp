//Given a number N. The task is to print Floyd's triangle with N lines.


#include<iostream>
using namespace std;
 
 void floyd (int n)
 {
 	 
         int k=1;
   for(int i=1;i<=n;i++)
  {
      for(int j=0;j<i;j++)
      cout<<k++<<" ";
      
      cout<<endl;
  } 
 }

int main ( )
{
	int n;
	cin>>n;
	floyd(n) ;
	return 0;
}
