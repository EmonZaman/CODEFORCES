#include <bits/stdc++.h>
using namespace std;

void solve()
{

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {


        int n;
        cin >> n;
        vector<int> a(n);
        int c=0;
        for (auto &i : a) cin >> i;
        long long sum = 0, need = 0;
        for (int i = 0; i < n; ++i)
        {
            need += i;
            sum += a[i];
            if (sum < need)
            {
                cout << "NO\n";
                c=1;
                break;
            }
        }
        if(c==0)
        cout << "YES\n";
    }
    return 0;
}
