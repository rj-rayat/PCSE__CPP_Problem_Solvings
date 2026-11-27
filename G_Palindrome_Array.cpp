#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i= 0; i < n; i++)
    {
        cin >> a[i];
    }

    int j = 0;
    int k = n -1;
    bool isPalindrome = true;
    while (j < k)
    {
       int temp = a[j];
       a[j] = a[k];
       a[k] = temp;

       if (a[j] != a[k])
       {
            isPalindrome= false;
            break;
       }
       j++;
       k--;
    }

    if (isPalindrome == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}