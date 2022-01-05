// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    if(n==1)
	        return 1;
	        
	    vector<ull> vec;
	    vec.push_back(1);
	    ull a=2, b=3, c=5, x=0, y=0, z=0;
	    for(int i=1; i<n; i++)
	    {
	        if(a*vec[x] == min(a*vec[x], min(b*vec[y], c*vec[z])))
	        {
	            if(a*vec[x]==(vec[vec.size()-1]))
	            {
	                x++;
	                i--;
	                continue;
	            }
	            vec.push_back(a*vec[x]);
	            x++;
	        }
	        else if(b*vec[y] == min(a*vec[x], min(b*vec[y], c*vec[z])))
	        {
	            if(b*vec[y]==(vec[vec.size()-1]))
	            {
	                y++;
	                i--;
	                continue;
	            }
	            vec.push_back(b*vec[y]);
	            y++;
	        }
	        else if(c*vec[z] == min(a*vec[x], min(b*vec[y], c*vec[z])))
	        {
	            if(c*vec[z]==(vec[vec.size()-1]))
	            {
	                z++;
	                i--;
	                continue;
	            }
	            vec.push_back(c*vec[z]);
	            z++;
	        }
	        
	    }
	    
	    return vec[n-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends