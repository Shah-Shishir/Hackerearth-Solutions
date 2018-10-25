/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;
bool prime[MAX];
vector <int> v;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    int i,j,tc,n,k,ans;

    v.pb(2);
    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;

    for (i=3; i<MAX; i++)
        if (!prime[i])
            v.pb(i);

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%d",&n);

        ans = 1;

        for (i=0; v[i]*v[i]<=n; ++i)
        {
            if (n % v[i] == 0)
            {
                k = 1;

                while (n % v[i] == 0)
                {
                    ++k;
                    n /= v[i];
                }

                ans *= k;
            }
        }

        if (n > 1)
            ans *= 2;

        pf ("%d\n",ans);
    }

    return 0;
}
