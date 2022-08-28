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

    int n;
    cin >> n;

    vector<vector<int>> dp;
    vi arr(1, 0);
    dp.push_back(arr);
    vi arr2{0, 1, 0};
    dp.push_back(arr2);
    for (int i = 2; i <= n; i++)
    {
        int middle = dp[i - 1][dp[i - 1].size() / 2];
        // print(middle);
        // disp(dp[i-1]);
        // cout<<endl;
        vi temp(dp[i - 1].begin(), dp[i - 1].end());
        temp.erase(temp.begin() + (dp[i - 1].size() / 2) + 1, temp.end());
        // disp(temp);
        vi temp2(temp.begin(), temp.end());
        reverse(temp2.begin(), temp2.end());
        temp.push_back(middle + 1);
        for (auto it : temp2)
        {
            temp.push_back(it);
        }
        // temp.push_back(temp2);
        // disp(temp);
        dp.push_back(temp);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        vi line = dp[i];
        dp.push_back(line);
    }
    int spaces = 2 * n;
    bool up = true;
    for (auto it : dp)
    {
        for (int i = 0; i < spaces; i++)
        {
            cout << " ";
        }
        if (spaces == 0 && up == true)
        {
            spaces = 0;
            up = false;
        }

        for (int i = 0; i < it.size(); i++)
        {
            if (i == it.size() - 1)
            {
                cout << it[i];
            }
            else
            {
                cout << it[i] << " ";
            }
        }
        cout << endl;
        if (up)
        {

            spaces -= 2;
        }
        else
        {
            spaces += 2;
        }
    }
}