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
 
    vi arr(3);
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }

    int ans=max({arr[0],arr[1],arr[2]})-min({arr[0],arr[1],arr[2]});
    print(ans);
}