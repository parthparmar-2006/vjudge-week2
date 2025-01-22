#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int m, n, a[300005], b[300005], cnt = 0, i = 0, j = 0;
ull s1, s2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m;
    for (int i = 0; i < m; i++) cin >> a[i];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> b[i];

    s1 = a[0];
    s2 = b[0];

    while (i < m && j < n) {
        if (s1 == s2) {
            cnt++;
            s1 = a[++i];
            s2 = b[++j];
            continue;
        }

        if (s1 < s2) s1 += a[++i];
        else s2 += b[++j];
    }

    if (i != m || j != n) {
        cout << "-1" << endl;
        return 0;
    }

    cout << cnt << endl;
    return 0;
}
