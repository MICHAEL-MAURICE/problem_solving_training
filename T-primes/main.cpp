#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int NN = 1e6;
bool notPrime[NN];

void sieve() {
    notPrime[0] = notPrime[1] = 1;
    for (int i = 2; i < NN / i; i += 1 + (i & 1))
        if (notPrime[i] == 0)
            for (int j = i * i; j < NN; j += i)
                notPrime[j] = 1;
}
vector<ll> primes;
int main()
{
    sieve();
    for (ll i = 2; i < NN; i += 1 + (i & 1)) {
        if (notPrime[i] == 0) primes.push_back(i * i);
    }
    int n;
    scanf("%d", &n);
    while (n--) {
        ll x;
        scanf("%lld", &x);
        puts(binary_search(primes.begin(), primes.end(), x) ? "YES" : "NO");
    }

    return 0;
}
