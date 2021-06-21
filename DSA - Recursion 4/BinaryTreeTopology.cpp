
#include <bits/stdc++.h>
using namespace std;
 
int BinaryTreeTopology(int n)
{
    int n1, n2, sum = 0;
    if (n == 1 || n == 0)
        return 1;
    for (int i = 1; i <= n; i++) {
 
        n1 = BinaryTreeTopology(i - 1);
        n2 = BinaryTreeTopology(n - i);
        sum += n1 * n2;
    }
    return sum;
}

int main()
{
    int n = 3;
    cout << BinaryTreeTopology(n);
    return 0;
}