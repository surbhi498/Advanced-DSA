In a given array A[] find the maximum value of (A[i] – i) - (A[j] – j) where i is not equal to j. 
i and j vary from 0 to N-1 and N is the size of input array A[].  The value of N is always greater than 1.

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int maxVal(int a[], int n) {
        
        int mx=INT_MAX,mn=INT_MIN,i;
        for(i=0;i<n;i++){
            if(a[i]-i>mn)mn=a[i]-i;
            if(a[i]-i<mx)mx=a[i]-i;
        }
        return mn-mx;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.maxVal(a, n) << endl;
    }
    return 0;
