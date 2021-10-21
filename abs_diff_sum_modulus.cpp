class Solution
{
public:
    long long countPairs(long long  n, long long  arr[], long long  k)
    {

        long long  cnt = 0;

        for (long long  i = 0; i < n; i++)
        {
            arr[i] = (arr[i] + k) % k;
        }

        long long  hash[k] = {0};

        for (long long  i = 0; i < n; i++)
        {
            hash[arr[i]]++;
        }

        for (long long  i = 0; i < k; i++)
        {
            cnt += (hash[i] * (hash[i] - 1)) / 2;
        }

       return  cnt ;
    }
};