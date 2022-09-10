#include <bits/stdc++.h>
using namespace std;
 
#define dd float
 
#define print(x) cout << x <<endl


#define ll long long
#define vi vector<int>
#define pb push_back
#define disp(x) for(auto s[i]:x){cout<<s[i]<<" ";} cout<<endl
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    string s;
    cin>>s;
    // vector<string> vowels={"A", "O", "Y", "E", "U", "I"};
    string ans="";
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I' || s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i'){
            continue;
        }
        else if(isupper(s[i])){
            s[i]=s[i]+32;
            ans=ans+"."+s[i];
        }
        else{
        
            ans=ans+"."+s[i];
        }
    }
    print(ans);

    return 0;   
    
}