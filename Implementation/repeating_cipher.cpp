#include <bits/stdc++.h>
using namespace std;
 
#define dd float
 
#define print(x) cout << x <<endl


#define ll long long
#define vi vector<int>
#define pb push_back
#define disp(x) for(auto it:x){cout<<it<<" ";} cout<<endl
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";

    ans+=s[0];
    int temp=n;
    int i=1;
    int count=1;
    while(i<temp){
        ans+=s[i];
        i+=(count+1);
        count++;
        // print(i)s;
    }
    print(ans);
    
}