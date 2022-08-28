#include <bits/stdc++.h>
using namespace std;

#define dd float

#define print(x) cout << x << endl;
#define ll long long
#define vi vector<int>

int solve(int n)
{
    print(n);
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }

    int ans = solve(n - 1);
    int ans2 = solve(n - 2);
    return min(ans, ans2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    int min_steps = -1;
    if (n < m)
    {
        min_steps = -1;
    }
    else
    {
        if (n % 2 == 0)
        {
            min_steps = n / 2;
        }
        else
        {
            min_steps = n / 2 + 1;
        }
        for (int i = min_steps; i <= n; i++)
        {
            if (i % m == 0)
            {
                min_steps = i;
                break;
            }
        }
    }
    print(min_steps);
}
