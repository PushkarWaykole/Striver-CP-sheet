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


    int n;
    cin>>n;
    int curr=0;
    int ans=0;
    int a;
    curr=0;
    vi arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    curr=1;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1]){
            curr++;
        }
        else{
            ans=max(ans,curr);
            curr=1;
        }
    }
    ans=max(ans,curr);
    print(ans);
   
   



    
}
