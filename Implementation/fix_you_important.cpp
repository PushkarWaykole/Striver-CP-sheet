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
 
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int countr=0,countd=0;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            if(s[s.length()-1]=='R'){
                countr++;
            }
            if(i==n-1){
                countd=count(s.begin(),s.end(),'D');
            }
        }
        int ans=countd+countr;
        print(ans);
    }
    
}