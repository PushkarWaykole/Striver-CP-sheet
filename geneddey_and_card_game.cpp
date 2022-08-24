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


    string hand;
    cin>>hand;
    char rank=hand[0];
    char suit=hand[1];
    bool ans=false;
    for(int i=0;i<5;i++){
        string temp;
        cin>>temp;
        char to_match_rank=temp[0];
        char to_match_suit=temp[1];
        if(to_match_rank==rank || to_match_suit==suit){
            ans=true;
        }
    }
    if(ans){
        print("YES");
    }
    else {
        print("NO");
    }
   
   



    
}
