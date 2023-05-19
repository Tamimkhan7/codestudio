#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, k;
        cin >> a;
        reverse(a.begin(), a.end());
        int len = a.size();
        for (int i = 0; i < len; i++)
        {
            k = a[0];
        }
        int n = stoi(k);
        reverse(a.begin(), a.end());
        for (int i = 0; i < len - 1; i++)
        {
            if (k == a[i])
                cout << a[i] << endl;
            break;
        }
        cout << -1 << endl;
    }
}