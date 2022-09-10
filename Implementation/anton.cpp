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
    vector<string> cubes(n);
    for(int i=0;i<n;i++){
        cin>>cubes[i];
    }
    int ans=0;
    for(auto it:cubes){
        if(it=="Tetrahedron"){
            ans+=4;
        }
        else if(it=="Cube"){
            ans+=6;
        }
        else if(it=="Octahedron"){
            ans+=8;
        }
        else if(it=="Dodecahedron"){
            ans+=12;
        }
        else if(it=="Icosahedron"){
            ans+=20;
        }
    }
    print(ans);

    

    
}