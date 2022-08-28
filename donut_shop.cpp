#include <bits/stdc++.h>
using namespace std;

#define dd float

#define print(x) cout << x <<endl;
#define ll long long
#define vi vector<int>



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    ll a,b,c,f,s;
    cin>>t;
    while(t--){
        f = -1,s = -1;
        cin>>a>>b>>c;

        if(a < c){
            f = 1;
        }
        if(a*b > c){
            s = b;
        }
        cout<<f<<" "<<s<<endl;
    }
   
        

    }
   
   
