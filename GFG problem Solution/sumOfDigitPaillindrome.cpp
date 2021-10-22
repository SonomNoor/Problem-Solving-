//Given a number N.Find if the digit sum(or sum of digits) of N is a Palindrome number or no


// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        int rem,sum=0;
        while(N>0)
        {
            rem=N%10;
            sum=sum+rem;
            N=N/10;
        }
        int temp=sum;
        N=sum;
        sum=0;
         while(N>0)
        {
            rem=N%10;
            sum=(sum*10)+rem;
            N=N/10;
        }
        if(temp==sum)
            return 1;
        else
            return 0;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends
