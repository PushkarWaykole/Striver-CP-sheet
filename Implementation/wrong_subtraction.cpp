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
 
    int n,k;
    cin>>n>>k;
    while(k--){
        if(n%10!=0){
            n--;
        }
        else{
            n=n/10;
        }
    }
    print(n);
}