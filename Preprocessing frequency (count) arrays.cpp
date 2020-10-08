/// 2- Preprocessing: frequency(count) arrays

/// see array.count in Python


/// What do we mean by preprocessing?

A = 0 0 4 2 4 5
Query:   O(N)
- How many times did 4 appear in A?
- Does A contain a 1?


/// Preprocessing
int count[MAXINTEGER];      /// Global, or clear it's elements.

for (int i = 0; i < n; i++)
{
    int x = a[i];
    count[x] ++;
}

        0 1 2 3 4 5
Count = 2 0 1 0 2 1

>>> Now, by O(MAXINTEGER) in memory we can answer these queries in O(1)



/// Example:
Can we swap an elements from A with an element from B such that the
sum of elements in the two arrays are equal with O(N) time complexity?

A = 3 4 7 8     >> sumA = 22
B = 1 2 2 5     >> sumB = 10

            0 1 2 3 4 5 6 7 8
countA =    0 0 0 1 1 0 0 1 1

/// Solution O(N) using countA, N is the size of B:

int x;
for (int i = 0; i < n; i++) {

    /// for each element y from B we search if there is x an element from A such as:
    /// sumA + y - x = sumB - y + x  ==> (sumA - sumB)/2 = x - y  ==>  x = (sumA - sumB)/2 + y
    /// y = B[i]
    x = (sumA - sumB)/2 + B[i]
    if ( countA[x] != 0 ) return true; /// O(1)

}