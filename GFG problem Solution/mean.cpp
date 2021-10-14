//Given the marks of N students in an Array A, calculate the mean.


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int mean(int n, int A[]) {
        // code here
        double sum=0;
        for (int i=0;i<n;i++)
       sum +=A[i];
       return sum/n;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.mean(N,A) << endl;
    }
    return 0;
}  // } Driver Code Ends
