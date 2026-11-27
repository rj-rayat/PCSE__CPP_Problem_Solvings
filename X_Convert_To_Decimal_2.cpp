#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        long long int digit;
        cin >> digit;


        long long int binary_ans = 0, pow = 1;
        while (digit > 0)
        {
            long long int remainder = digit % 2;
            digit /= 2;

            binary_ans += (remainder * pow);

            pow *= 10;
        }


        long long int ans = 0, pow2 = 1;
        while ( binary_ans > 0)
        {
            long long int remainder = binary_ans % 10;
            if (remainder != 0)
            {
                ans += (remainder* pow2);
                pow2 *= 2;
            }
            
           binary_ans /= 10;
            
        }

        cout << ans << endl;
    }
    
    return 0;
}