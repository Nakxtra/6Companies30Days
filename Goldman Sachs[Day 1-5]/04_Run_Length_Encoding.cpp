// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string str;
  int count=0, n=src.length();
  for(int i=0; i<n-1; i++)
  {
      if(src[i]==src[i+1])
        count++;
    else
    {
        str += src[i];
        str+=to_string(count+1);
        count=0;
    }
  }
      str += src[n-1];
        str+=to_string(count+1);
  return str;
}     
 
