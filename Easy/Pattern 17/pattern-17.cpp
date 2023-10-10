//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i=0;i<n;i++){
            for(int k=0;k<n-i-1;k++){
                cout << " ";
            }
            
            for(int j=0;j<=i;j++){
                cout << char(65+j);
            }
            for(int l=i-1;l>=0;l--){
                cout  << char(65+l);
            }
            cout << endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends