#include <bits/stdc++.h>
using namespace std;

#define print(x) cout << x << " "


#define ll long long
#define vi vector<int>
#define pb push_back
#define disp(x) for(auto it:x){cout<<it<<"";} cout<<endl

int main(){

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
        int ans=0;
        ans=n/3;
        
        if(n==1){
            cout<<2<<endl;
        }
        else if(n%3!=0){
            cout<<ans+1<<endl;
        }
        else{
        cout<<ans<<endl;

        }
    }
}