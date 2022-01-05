// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *ans= new int[2];
        
        int Xor=0, x=0, y=0;
        
        for( int i=1; i<=n; i++) Xor= Xor^i;
        for(int i=0; i<n; i++) Xor= Xor^arr[i];
        
        int set_bit= Xor & ~(Xor-1);
        
        for(int i=0; i<n; i++ )
        {
            if(arr[i]&set_bit)
                x= x^arr[i];
            else
                y= y^arr[i];
            
        }
        for(int i=1; i<=n; i++ )
        {
            if(i&set_bit)
                x= x^i;
            else
                y= y^i;
            
        }
        
        int flag=0;
        for(int i=0; i<n; i++)
            if(x==arr[i])
                {
                    flag=1; break;
                }
        
        if(flag==1)
            {
                ans[0]= x;
                ans[1]= y;
                return ans;
            }
            
        ans[0]= y;
        ans[1]= x;
        return ans;
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends