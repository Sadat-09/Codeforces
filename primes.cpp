#include <bits/stdc++.h>
using namespace std;

const int n = 1e8;
vector<char> is_prime(n + 1, true);

vector<int> pr;

int main()
{
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {

            for (int j = i * i; j <= n; j += i)
            {

                is_prime[j] = false;
            }
        }
    }
   

    for (int i = 2; i <= n;i++)
    {
        if (is_prime[i])
        {
            pr.push_back(i);
        }
    }
    for (int i = 1; i < pr.size(); i += 100)
    {
        /* code */
        cout << pr[i-1] << endl;
    }
    return 0;
}