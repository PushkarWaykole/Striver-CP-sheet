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
        int n;
        cin>>n;
        int pow=1;
        vi ans;
        while(n>0){
            if(n%10>0){
                ans.pb((n%10)*pow);
            }
            n=n/10;
            pow*=10;
        }

        print(ans.size());
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}