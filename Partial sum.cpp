/// 6- Partial sum
>>> A simple but yet powerful technique!


Assume you have N counters, intialized to 0.

    1 2 3 4 5 6 7 8 9 10
    0 0 0 0 0 0 0 0 0 0

The updates are of the follwing form:
Increment the counters from L to R by K.

Example:    2 -> 7 by 1
            4 -> 9 by 3

    1 2 3 4 5 6 7 8 9 10
    0 1 1 4 4 4 4 3 3 0

for (int i = 0; i < numUpdates; i++) /// O(m)
{
    int l, r, k; cin >> l >> r >> k;
    for (int j = l; j < r; j++) /// O(n)
    {
        counters[j] += k;
    }
}

>> Complexity: O(n*m), n = numCounters, m = numUpdates.


/// Can we reduce the complexity to O(n+m)?

L = 2, R = 7, K = 1.

        1 2 3 4 5 6 7  8  9 10
a =     0 1 0 0 0 0 0 -1  0 0
pre =   0 1 1 1 1 1 1  0  0 0 /// using the prefix_sum O(n)

.........................................

L = 2, R = 7, K = 1
L = 4, R = 9, K = 3

        1 2 3 4 5 6 7  8  9 10
a =     0 1 0 3 0 0 0 -1  0 -3
pre =   0 1 1 4 4 4 4  3  3  0 /// using the prefix_sum O(n)

int a[MAXN + 9]; /// initialized to 0

for (int i = 0; i < m; i++) /// O(m) number of updates
{
    int l, r, k; cin >> l >> r >> k;
    a[l] += r;
    a[r+1] -= r;
}

for (int i = 1; i < n; i++) a[i] += a[i-1]; /// prefix_sum O(n);
