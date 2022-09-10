#include <bits/stdc++.h>
using namespace std;

#define print(x) cout << x <<endl

#define ll long long
#define vi vector<int>
#define pb push_back
#define disp(x)           \
    for (auto it : x)     \
    {                     \
        cout << it << ""; \
    }                     \
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
    vi nums;
    int temp = 0;
    while (n > 0)
    {
        temp = n % 10;
        nums.pb(temp);
        n = n / 10;
    }
    reverse(nums.begin(), nums.end());
    // disp(nums);
    if (nums.size() == 1 && nums[0] == 9)
    {
        print(9);
    }
    else
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 4)
            {
                nums[i] = 9 - nums[i];
            }
        }
        disp(nums);
    }
}