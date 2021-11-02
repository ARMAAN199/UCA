#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
  int n;
  cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int cnt = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[j] > arr[j-1])
                cnt++;
            else
                break;
        }
    }
    cout << cnt;
  }
  return 0;
}