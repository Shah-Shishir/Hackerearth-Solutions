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
const int MAX = 1000001;
int arr[MAX];

bool inttostr (int n)
{
    string str;
    int rem;

    while (n)
    {
        rem = n % 10;
        str.pb(rem+'0');
        n /= 10;
    }

    sort (str.begin(),str.end());

    if (str == "1" || str == "12" || str == "123" || str == "1234" || str == "12345" || str == "123456")
        return true;
    else
        return false;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int i,n,q,a,b;

    arr[1] = 1;

    for (i=2; i<MAX; i++)
    {
        if (inttostr(i))
            arr[i] = arr[i-1]+1;
        else
            arr[i] = arr[i-1];
    }

    sf ("%d",&q);

    while (q--)
    {
        sf ("%d %d",&a,&b);
        pf ("%d\n",arr[b]-arr[a-1]);
    }

    return 0;
}
