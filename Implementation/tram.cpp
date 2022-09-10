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
    int capacity=0;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int in,out;
        cin>>out>>in;
        // print(capacity);
        capacity-=out;
        capacity+=in;
        // print(capacity);
        ans=max(ans,capacity);
        // print(ans);
    }
    print(ans);
}