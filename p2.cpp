#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int t;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while(cin >> t)
    {
        printf("%d\n",a[t - 1]);
    }

    return 0;
}