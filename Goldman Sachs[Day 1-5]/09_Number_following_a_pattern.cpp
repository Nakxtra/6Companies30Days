// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        if(S=="D")
            return "21";
            
        int l=0, r=0, flag=0;
        string str;
        
        for(int i=1; i<=S.length()+1; i++)
            str+=to_string(i);
        
        if(S[0]=='D')
            flag=1;
        
        for(int i=0; i<S.length()-1; i++)
        {
            if(flag)
                r++;
                
            if(S[i]=='I' && S[i+1]=='D')
            {
                l=i+1;
                r=i+1;
                flag=1;
            }
            else if(S[i]=='D' && S[i+1]=='I')
            {
                reverse(str.begin()+l, str.begin()+r+1);
                flag=0;
            }
        }
        
        if(flag)
        {
            r++;
            reverse(str.begin()+l, str.begin()+r+1);
        }
            
        return str;
        
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends