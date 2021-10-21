//Given a number N. The task is to print Floyd's triangle with N lines.


#include<iostream>
using namespace std;
 

    void floyd(int N)
    {
        int num=1;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cout<<num<<" ";
                num++;
            }
               
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
