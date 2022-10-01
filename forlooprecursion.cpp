#include<bits/stdc++.h>
using namespace std;
   
void find(string s,int i,vector<string>&ans)
{
    if(i==s.size())
    {
        ans.push_back(s);
        return ;
    }
    
    for(int k=i;k<s.size();k++)
    {
        swap(s[i],s[k]);
        find(s,i+1,ans);
        swap(s[i],s[k]);
    }
    
    
}

 vector<string>find_permutation(string s)
 {
     // Code here there
     
     vector<string>ans;
     
     find(s,0,ans);
     sort(ans.begin(),ans.end());
     return ans;
 }
 



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {	    string S;
	    cin >> S;
	    vector<string> ans = find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}