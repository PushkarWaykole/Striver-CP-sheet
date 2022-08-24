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
    int count=0,h=0;
    while(count<=n){
        h++;
        count+=(h*(h+1))/2;
    }
    print(h-1);
   
   



    
}
