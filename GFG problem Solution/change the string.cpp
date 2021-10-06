//Change the string according to the first letter of string 


 string modify (string s)
    {
        if(isupper(s[0]))
        {
             transform(s.begin(), s.end(), s.begin(), ::toupper);
        }
        else
            transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
        // your code here
    }



////////////////////////

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
       
        if(islower(s[0])){
            for(int i=0;i<s.length();i++){
                
              if(isupper(s[i])){
                   s[i]=s[i]+32;
              }
               
            }
            return s;
        }
        else{
            for(int i=0;i<s.length();i++){
                 
                if(islower(s[i])){
                    s[i]=s[i]-32;
                }
            }
            return s;
            
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
}  // } Driver Code Ends
