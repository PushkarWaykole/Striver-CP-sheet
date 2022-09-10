#include <bits/stdc++.h>
using namespace std;
 
#define dd float
 
#define print(x) cout << x <<endl


#define ll long long
#define vi vector<int>
#define pb push_back
#define disp(x) for(auto s[i]:x){cout<<s[i]<<" ";} cout<<endl
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi arr(2*n);
        for(int i=0; i<2*n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        int ans=arr[n]-arr[n-1];
        print(ans);
    }

    return 0;   
    
}