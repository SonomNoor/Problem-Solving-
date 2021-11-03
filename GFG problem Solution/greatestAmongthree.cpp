//Given 3 numbers A, B and C. Find the greatest number among them. 

// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int greatestOfThree(int A, int B, int C) {
        // code here
        B = (B>=C ? B : C);
        
        return  (A>=B ? A : B);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.greatestOfThree(A, B, C) << "\n";
    }
}
  // } Driver Code Ends


/////////////

class Solution {
  public:
    int greatestOfThree(int A, int B, int C) {
        // code here
        return (A>B?A:B)>C?(A>B?A:B):C;
        
    }
};
