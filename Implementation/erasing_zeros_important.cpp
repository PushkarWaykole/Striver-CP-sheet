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
    

    while(t--){
        string s;
        cin>>s;
        int first=-1,last=-1;
        int i=0,j=s.length()-1;
        while(i<s.length()){
            if(s[i]=='1'){
                first=i;
                break;
            }
            i++;
        }
        while(j>=0){
            if(s[j]=='1'){
                last=j;
                break;
            }
            j--;
        }
        int count=0;
        for(int k=first;k<last;k++){
            if(s[k]=='0'){
                count++;
            }
        }
        print(count);
        

    }
   
   



    
}
