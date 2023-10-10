//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    
	    int space  = 0;
	    
	    for(int i=n;i>=1;i--){
	        for(int k = 0;k<space;k++){
	            cout << " ";
	        }
	        
	        for(int j = (i*2)-1;j>=1;j--){
	            cout << "*" ;
	        }
	        cout << endl;
	        space++;
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