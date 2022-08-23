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

  
    int n,i,maxx,minn,index_max,index_min;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    maxx=0;
    minn=101;
    for(i=0; i<n; i++)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
            index_max=i;
        }
        if(a[i]<=minn)
        {
            minn=a[i];
            index_min=i;
        }
    }
    n=n-1;
    if(index_max>index_min)
        index_min=index_min+1;
    printf("%d\n",index_max+n-index_min);

    

    
}