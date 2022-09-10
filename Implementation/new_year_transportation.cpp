#include <bits/stdc++.h>
using namespace std;

#define dd float

#define print(x) cout << x <<endl;
#define ll long long
#define vi vector<int>
#define disp(x)for(auto it:x){cout<<it<<" ";}cout<<endl




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


   int n,t;
   cin>>n>>t;
  
   vi arr(n-1);
   for(auto &e:arr){
    cin>>e;
   }
   int p=0;
    while(p < t - 1) p += arr[p];

    if(p == t - 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
  

}
