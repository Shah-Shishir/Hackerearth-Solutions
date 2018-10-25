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

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,a,b,i,sum;
    string s1,s2;

    sf ("%d",&tc);

    while (tc--)
    {
        cin >> s1 >> s2;

        int h1[128] = {0}, h2[128] = {0};

        a = s1.length(), b = s2.length();

        for (i=0; i<a; i++)
            h1[s1[i]]++;

        for (i=0; i<b; i++)
            h2[s2[i]]++;

        sum = 0;

        for (i=0; i<128; i++)
            sum += abs(h1[i]-h2[i]);

        pf ("%d\n",sum);
    }

    return 0;
}
