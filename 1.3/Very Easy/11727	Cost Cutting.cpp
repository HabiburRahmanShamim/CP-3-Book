//////P*****_****L///////

/*
*/

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define repr(i, a, b, c) for(int i=(a);i<(b);i+=(c))
#define trav(a, x) for(auto& a : x)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define mem(a, x) memset(a,x,sizeof(a))
#define cle(ar) memset(ar, 0, sizeof(ar))
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main()
{
    read();
    int t, caso = 1;
    scanf("%d", &t);
    while(t--)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        printf("Case %d: %d\n", caso++, a+b+c-max(a, max(b, c))-min(a, min(b, c)));
    }
    return 0;
}
