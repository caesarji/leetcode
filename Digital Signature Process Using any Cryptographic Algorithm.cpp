#include &lt; iostream & gt;
#include &lt; cstdio & gt;
#include &lt; math.h & gt;
#include &lt; string.h & gt;
#include &lt; stdio.h & gt;
#include &lt; stdlib.h & gt;
using namespace std;
long int p, q, n, t, flag, e[100], d[100], temp[100], j, m[100], en[100], i;
char msg[100];
int prime(long int);
void ce();
long int cd(long int);
void encrypt();
void decrypt();
int prime(long int pr)
{
    int i;
    j = sqrt(pr);
    for (i = 2; i &lt; = j; i++)
    {
        if (pr % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    cout &lt;
    &lt;
    &quot;
    Enter first prime number : &quot;
    ;

    cin &gt;
    &gt;
    p;
    flag = prime(p);
    if (flag == 0)
    {
        cout &lt;
        &lt;
        &quot;
        \nWRONG INPUT\n &quot;
        ;
        exit(1);
    }
    cout &lt;
    &lt;
    &quot;
    \nEnter another prime number : &quot;
    ;
    cin &gt;
    &gt;
    q;
    flag = prime(q);
    if (flag == 0 || p == q)
    {
        cout &lt;
        &lt;
        &quot;
        \nWRONG INPUT\n &quot;
        ;
        exit(1);
    }
    cout &lt;
    &lt;
    &quot;
    \nEnter message :\n &quot;
    ;
    fflush(stdin);
    cin &gt;
    &gt;
    msg;
    for (i = 0; msg[i] != &#39;\0 & #39;; i++)
        m[i] = msg[i];
    n = p * q;
    t = (p - 1) * (q - 1);
    ce();
    cout &lt;
    &lt;
    &quot;
    \nPOSSIBLE VALUES OF e AND d ARE\n &quot;
    ;
    for (i = 0; i & lt; j - 1; i++)
        cout &lt;
    &lt;
    e[i] & lt;
    &lt;
    &quot;
    \t &quot;
    &lt;
    &lt;
    d[i] & lt;
    &lt;
    &quot;
    \n &quot;
    ;
    encrypt();
    decrypt();
    return 0;
}
void ce()
{

    int k;
    k = 0;
    for (i = 2; i & lt; t; i++)
    {
        if (t % i == 0)
            continue;
        flag = prime(i);
        if (flag == 1 & amp; &amp; i != p & amp; &amp; i != q)
        {
            e[k] = i;
            flag = cd(e[k]);
            if (flag & gt; 0)
            {
                d[k] = flag;
                k++;
            }
            if (k == 99)
                break;
        }
    }
}
long int cd(long int x)
{
    long int k = 1;
    while (1)
    {
        k = k + t;
        if (k % x == 0)
            return (k / x);
    }
}
void encrypt()
{
    long int pt, ct, key = e[0], k, len;

    i = 0;
    len = strlen(msg);
    while (i != len)
    {
        pt = m[i];
        pt = pt - 96;
        k = 1;
        for (j = 0; j & lt; key; j++)
        {
            k = k * pt;
            k = k % n;
        }
        temp[i] = k;
        ct = k + 96;
        en[i] = ct;
        i++;
    }
    en[i] = -1;
    cout &lt;
    &lt;
    &quot;
    \nTHE ENCRYPTED MESSAGE IS\n &quot;
    ;
    for (i = 0; en[i] != -1; i++)
        cout &lt;
    &lt;
    char(en[i]);
}
void decrypt()
{
    long int pt, ct, key = d[0], k;
    i = 0;
    while (en[i] != -1)
    {
        ct = temp[i];
        k = 1;
        for (j = 0; j & lt; key; j++)
        {
            k = k * ct;
            k = k % n;
        }
        pt = k + 96;
        m[i] = pt;
        i++;
    }
    m[i] = -1;
    cout &lt;
    &lt;
    &quot;
    \nTHE DECRYPTED MESSAGE IS\n &quot;
    ;
    for (i = 0; m[i] != -1; i++)
        cout &lt;
    &lt;
    char(m[i]);
}