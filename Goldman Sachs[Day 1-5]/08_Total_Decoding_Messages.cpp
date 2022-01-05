// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string s){
		    // Code here
		    
		int n= s.length(), mod= 1000000007;
        
        if (n==0 || s[0]=='0')
            return 0;
        if (n==1)
            return 1;
            
        int count_prev=1, count_prev2=1, count;
        
        for(int i=1; i<n; i++)
        {
            int d= s[i]-'0';
            int dd= (s[i-1]-'0')*10+d;
            
            count=0;
            if(d>0 && d<=9)
                count= (count+count_prev)%mod;
            if(dd>=10 && dd<=26)
                count= (count+count_prev2)%mod;
            
            count_prev2= count_prev%mod;
            count_prev= count%mod;
        }
        
        return count_prev%mod;
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
