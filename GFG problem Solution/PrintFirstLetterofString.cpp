// Print first letter of every String 


 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string res;
	    res+=S[0];
	    for(int i=1;i<S.length();i++){
	        if(S[i]==' '){
	            res+=S[i+1];
	        }
	    }
	    return res;
	}
};

// { Driver Code Starts.

int main() 
{
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
} 
