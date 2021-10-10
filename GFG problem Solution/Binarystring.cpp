
////Given a binary string S. The task is to count the number of substrings that start and end with 1.
//For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.


================================
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // Your code here
         int m=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]=='1')
           {
               m++;
           }
       }
       return m*(m-1)/2;
        
    }

};

// { Driver Code Starts.
////////////


#include<iostream>
using namespace std;

int countSubstr (char str[])
{
	int res=0;
	for (int i=0;i<str[i]!='\0';i++)
	{
		if(str[i]=='1')
		{
		
			for (int j=i+1;j<str[j]!='\0';j++)
			
				if (str[j]=='1')
				res++;
			
		}
		
	}
	return res;
	
	
}





int main ( )
{
	char c[]="00100101";
		cout<<countSubstr(c);
	return 0;
}

int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.binarySubstring(n, a) << endl;
    }
}
  // } Driver Code Ends
