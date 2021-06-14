#include <bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define ll long long
#define ss second
#define ff first
#define pll pair<ll, ll>
#define vll vector<ll>
#define mll map<ll, ll>
#define mod 1000000007
#define w(x)  \
    ll x;     \
    cin >> x; \
    while (x--)
#define ps(x, y) fixed << setprecision(y) << x;
#define fo(i, j, k, in) for (ll i = j; i < k; i += in)
#define re(i, j) fo(i, 0, j, 1)
#define pi 3.1415926535897932384626433832795
#define all(cont) cont.begin(), cont.end()
#define countbit(x) __builtin_popcount(x)
#define mod 1000000007
#define lo lower_bound
#define de(n) \
    ll n;     \
    cin >> n;
#define def(a, n) \
    ll n;         \
    cin >> n;     \
    ll a[n];      \
    re(i, n) { cin >> a[i]; }
#define defi(a, n, k) \
    ll n;             \
    cin >> n;         \
    ll k;             \
    cin >> k;         \
    ll a[n];          \
    re(i, n) { cin >> a[i]; }
#define deb(x) cout << #x << "=" << x << endl;
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define nl cout << endl;

using namespace std;
const ll Max = (1e9) + 1ll;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int c = 0;

    sort(a, a + n);
    int b[n] = {0};

    int j = 0;
    int cnt = 0;
    if (n % 2 != 0)
    {   j=0;
        for (int i = (n - 1); i >= 0; i -= 2)
        {
            b[i] = a[n - 1 - j];
            j++;
        }
        j = 0;
        for (int i = 1; i < n; i += 2)
        {
            b[i] = a[j];
            j++;
        }
        for (int i = 1; i < (n - 1); i++)
        {
            if (b[i - 1] > b[i] && b[i + 1] > b[i])
            {
                cnt++;
            }
        }
    }
    else
    {
         j = 0;
        for (int i = (n - 1); i >= 0; i -= 2)
        {
            b[i] = a[n - 1 - j];
            j++;
        }
        j = 0;
        for (int i = n - 2; i >= 0; i -= 2)
        {
            b[i] = a[j];
            j++;
        }
        int d = 0;
        for (int i = 1; i < (n - 1); i++)
        {
            if (b[i - 1] > b[i] && b[i + 1] > b[i])
            {
                d++;
            }
        }
        j = 0;
        int e = 0;
        for (int i = 2; i < n; i += 2)
        {
            b[i] = a[j];
            j++;
        }
        
        b[0]=a[j];
        for (int i = 1; i < (n - 1); i++)
        {
            if (b[i - 1] > b[i] && b[i + 1] > b[i])
            {
                e++;
            }
        }
        if (e >= d)
        {
            cnt = e;
        }
        else
        {
            cnt = d;
            j = 0;
            for (int i = n - 2; i >= 0; i -= 2)
            {
                b[i] = a[j];
                j++;
            }
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
