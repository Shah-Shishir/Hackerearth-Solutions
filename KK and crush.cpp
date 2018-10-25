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
const int MAX = 100001;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,n,k,val,i,q;

    sf ("%d",&tc);

    while (tc--)
    {
        int pos[MAX] = {0}, neg[MAX] = {0};

        sf ("%d",&n);

        for (i=0; i<n; i++)
        {
            sf ("%d",&val);

            if (val >= 0)
                pos[val] = 1;
            else
            {
                val *= -1;
                neg[val] = 1;
            }
        }

        sf ("%d",&k);

        for (i=0; i<k; i++)
        {
            sf ("%d",&q);

            if (q >= 0)
            {
                if (pos[q] == 1)
                    pf ("Yes\n");
                else
                    pf ("No\n");
            }
            else
            {
                q *= -1;

                if (neg[q] == 1)
                    pf ("Yes\n");
                else
                    pf ("No\n");
            }
        }
    }

    return 0;
}
