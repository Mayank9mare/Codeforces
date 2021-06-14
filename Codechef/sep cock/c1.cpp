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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int a[n] = {0};

        vector<int> b(0);
        int c = 0;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '1')
            {
                b.pb(c);
                c = 0;
            }
            else
            {
                c++;
            }
        }
        if(b.size()==0){
            cout<<0<<endl;
        }
        else{
        int d = b[0];
        b[0] += c;

        sort(b.rbegin(), b.rend());
        int sum = 0;
        for (int i = 0; i < b.size(); i++)
        {
            sum += b[i];
        }

        int ans = 0;
        if(k==0){
            ans=sum;
        }
        
        else if (k % 2 == 0)
        {
            int q = k / 2;
            if (q >= b.size())
            {
                ans = 0;
            }
            else
            {
                for (int i = 0; i < q; i++)
                {
                    sum = sum - (b[i]);
                }
                ans = sum;
            }
        }
        else if(k%2!=0)
        {
            if (k == 1)
            {
                ans = sum - max(c, d);
            }
            else
            {
                int r = 0;
                
                int q = (k - 1) / 2;
                if (q >= b.size())
                {
                    ans = 0;
                }
                else
                {  int i=0;
                    for (i = 0; i < q; i++)
                    {
                        if (b[i] == (d + c) && r == 0)
                        {
                            r = 1;
                            
                            
                            
                        }
                        

                        sum = sum - b[i];
                    }

                    if (r == 1)
                    {
                        if ((b[i] + max(c, d)) >= (c + d))
                        {
                            ans = sum +c+d-max(c,d)-b[i];
                        }
                        else
                        {
                            ans = sum ;
                        }
                    }
                    else
                    {
                        ans = sum - max(c, d);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    }

    return 0;
}
