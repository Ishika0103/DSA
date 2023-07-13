//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        int ans=0;
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        
        priority_queue<int>p;
        for(auto i:m){
            p.push(i.second);
        }
        
       while(k!=0)
       {
        int x=p.top();
        x--;
        p.pop();
        p.push(x);
        k--;
       }
       while(!p.empty())
       {
           int x=p.top();
           ans+=(x*x);
           p.pop();
           
       }
       return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends