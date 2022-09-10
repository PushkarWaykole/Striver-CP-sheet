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
 
    int a,b;
    cin>>a>>b;
    // print(a);
    // print(b);
    int year=0;
    while(true){
        if(a>b){
            break;
        }
        else{

        a=3*a;
        b=2*b;
        // print(a);
        // print(b);
        year++;
        }
    }
    print(year);
    
}