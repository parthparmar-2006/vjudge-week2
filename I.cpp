#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll m, n, i, j, k;
    ll cnt = 0, ans = 5e10;

    cin >> n;
    ll a[n];
    map<ll, ll> mp;

    for (i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        if (mp[a[i]] >= 2) cnt++;
    }

    if (cnt > 0) {
        for (i = 0; i < n; i++) {
            for (j = i; j < n; j++) {
                if (mp[a[j]] >= 2) {
                    mp[a[j]]--;
                    cnt--;
                }
                if (cnt == 0) {
                    ans = min(ans, j - i + 1);
                }
            }
            cnt = 0;
            mp.clear();
            for (k = 0; k < n; k++) {
                mp[a[k]]++;
                if (mp[a[k]] >= 2) cnt++;
            }
        }
        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
