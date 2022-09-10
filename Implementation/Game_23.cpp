#include <bits/stdc++.h>
using namespace std;

#define dd float

#define print(x) cout << x << endl

#define ll long long
#define vi vector<int>
#define pb push_back
#define disp(x)            \
    for (auto it : x)      \
    {                      \
        cout << it << " "; \
    }                      \
    cout << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int m, n;
    cin >> n >> m;
    int result = -1;

    if (m % n == 0)
    {
        result = 0;
        int d = m / n;
        while (d % 2 == 0)
            d /= 2, result++;
        while (d % 3 == 0)
            d /= 3, result++;
        if (d != 1)
            result = -1;
    }
    print(result);
    return 0;
}