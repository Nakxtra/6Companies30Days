// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        int n=s.size();
        stack<char> st;
        string str, temp, num;
        
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='[')
            {
                str="";
                while(st.top()!=']')
                {
                    str+=st.top();
                    
                    st.pop();
                }
                st.pop();
                temp=str;
                num="";
                int q=i-1;
                for(q=i-1; q>=0; q--)
                {
                    if(s[q]-'0'>9 || s[q]-'0'<0)
                    {
                        break;
                    }
                    num += s[q];
                }
                reverse(num.begin(), num.end());
                for(int j=1; j<(stoi(num)); j++)
                    str+=temp;
                    
                if(!st.empty())
                {
                    for(int j=str.length()-1; j>=0; j--)
                        st.push(str[j]);
                }
                    
                i=q+1;
            }
            
            else
                st.push(s[i]);
            
        }
        
        return str;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends