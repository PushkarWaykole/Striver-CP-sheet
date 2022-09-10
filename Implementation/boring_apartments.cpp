#include <bits/stdc++.h>
using namespace std;

#define dd float

#define print(x) cout << x <<endl;
#define ll long long
#define vi vector<int>


int digits(int n){
    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }

    return count;
}

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
    vector<int> helper{1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};

    while(t--){
        int n;
        cin>>n;
        vi arr;
        int i=0;
        ll sum=0;
        while(helper[i]!=n){
            // print(helper[i]);
            sum+=digits(helper[i]);
            // print(sum);
            i++;
        }
        // print(helper[i]);
        sum+=digits(helper[i]);
        print(sum);

    }
   
   



    
}
