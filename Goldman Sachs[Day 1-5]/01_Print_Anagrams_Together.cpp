// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) {
        //code here
        
        // vector<vector<string>> ans;
        //  unordered_map <string, vector<string>> mp;
               
        //  for(int i=0;i<string_list.size();i++) {
        //   string word = string_list[i];
        //   sort(word.begin(), word.end());
        //   mp[word].push_back(string_list[i]);
        //  }
               
        //  for(auto i : mp) {
        //   ans.push_back(i.second);
        //  }    
        //  return ans;        
        
        int n1=str.size();
        vector<string> sol;
        vector<vector<string> > ans;
        for(int i=0; i<n1; i++)
        {
            int n2 = str[i].size();
            if(str[i]=="")
                continue;
                
            string s = str[i];
            sol.push_back(str[i]);
            str[i] = "";
            sort(s.begin(), s.end());
            
            for(int j=i+1; j<n1; j++)
            {
                int n3 = str[j].size();
                if(str[j]=="" || n2!=n3)
                    continue;
                
                string q = str[j];
                sort(q.begin(), q.end());
                
                if(s==q)
                {
                    sol.push_back(str[j]);
                    str[j] = "";
                }
            }
            
            ans.push_back(sol);
            sol.clear();
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends