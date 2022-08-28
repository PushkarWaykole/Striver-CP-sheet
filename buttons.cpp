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

    // sum up n*(n-i) for i=1 to n-1
    ll sum=0;
    for(int i=1;i<n-1;i++){
        sum+=n*(n-i);
    }
    sum+=n;
    print(sum);
        

    }
   
   
