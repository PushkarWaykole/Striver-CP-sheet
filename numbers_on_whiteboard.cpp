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
 
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi arr(n);
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }

        // disp(arr);
        // int count=0;
        vector<pair<int,int>> ans;
        while(arr.size()!=1){
            auto max=max_element(arr.begin(),arr.end());
            int a=*max;
            arr.erase(max);
            auto max2=max_element(arr.begin(),arr.end());
            int b=*max2;
            arr.erase(max2);
            ans.push_back({a,b});
            // print(a);
            // print(b);
            // count++;
            arr.push_back((a+b+1)/2);
            // disp(arr);
        }
        print(arr[0]);
        for(auto it:ans){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }

    return 0;   
    
}