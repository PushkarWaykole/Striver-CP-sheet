#include <bits/stdc++.h>
using namespace std;

#define dd float

#define print(x) cout << x << endl

#define ll long long
#define vi vector<int>
#define pb push_back
#define disp(x)            \
    for (auto it : x)      \
    {                      \
        cout << it << " "; \
    }                      \
    cout << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



	// Write your code here
    ll n;
    cin>>n;
    
    ll count=1;
   
    bool ans=false;
    while(count*(count+1)<n*2){
    
        int x = count * (count + 1);
         
       
        int t = n * 2 - x;
        int k = sqrt(t);
         
        
        if (k * (k + 1) == t)
        {
            ans = true;
            break;
        }
        count += 1;
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}