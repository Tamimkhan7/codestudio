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
        string a, b;
        cin >> a >> b;
        int len = a.size();
        int len2 = b.size();
        if (a >= b)
        {
            for (int i = 0; i < len; i++)
            {
                if (a[i] == b[i] && b[i] == a[i + 1])
                {
                    continue;
                }
                else
                {
                    cout << a[i] << endl;
                }
            }
        }
        else
        {
            for (int i = 0; i < len2; i++)
            {
                if (a[i] == b[i] && a[i] == b[i + 1])
                {
                    continue;
                }
                else
                {
                    cout << b[i] << endl;
                }
            }
        }
    }
}