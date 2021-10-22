//Given a number N. The task is to complete the function convertFive() which replace all zeros in the number with 5 and returns the number.


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

 // } Driver Code Ends

class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    int ans=0;
        int f=1;
        while(n>0){
            int r=n%10;
            if(r==0) {
                ans+=(5*f);
            }
            else ans+=(r*f);
            n/=10;
            f*=10;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}  // } Driver Code Ends
