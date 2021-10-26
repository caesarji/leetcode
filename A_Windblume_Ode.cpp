#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        vector<int> ans;
        // cout<<isprime(11);
        // cout<<isprime(sum)<<endl;
        if (!isprime(sum))
        {
            // cout<<isprime(sum)<<endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                ans.push_back(i + 1);
                cout << ans[i] << " ";
            }
            cout << endl;
            continue;
        }
        // cout << "here" << endl;
        else
        {

            for (int i = 0; i < n; i++)
            {
                sum -= arr[i];
                bool flag=false;
                if (!isprime(sum))
                {
                    flag=true;
                    // cout << ":here" << endl;
                    // cout << sum << endl;
                    cout << n - 1 << endl;
                    int k = 0;
                    for (int j = 0; j < n; j++)
                    {
                        if (arr[j] != arr[i])
                        {
                            ans.push_back(j + 1);
                            cout << ans[k] << " ";
                            k++;
                        }
                    }
                    cout << endl;
                }
                else
                {
                    sum += arr[i];
                }
                if(flag) break;
            }
        }
    }
}
