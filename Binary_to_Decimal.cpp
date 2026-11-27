#include <bits/stdc++.h>
using namespace std;
int binary_to_decimal (int binary);
int decimalToBinary (int decNumber)
{
    int ans = 0, pow = 1;
    while (decNumber > 0)
    {
        int remainder = decNumber % 2;
        decNumber /= 2;

        ans += (remainder * pow);

        pow *= 10;
    }

    return binary_to_decimal(ans);
    
}

int binary_to_decimal (int binary)
{
    int ans = 0, pow = 1;
    while ( binary > 0)
    {
        int remainder = binary % 10;
        if (remainder != 0)
        {
            ans += (remainder* pow);
            pow *= 2;
        }
        
       binary /= 10;
        
    }
    return ans;
    
}


int main()
{
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        int digit;
        cin >> digit;


        
        int binary = decimalToBinary(digit);
        cout << binary << endl;
    }
    
    return 0;
}