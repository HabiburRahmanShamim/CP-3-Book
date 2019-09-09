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
    int t;
    while(scanf("%d", &t))
    {
        if(t == 0)break;
        int a, b, x, y;
        scanf("%d%d", &a, &b);
        for(int i = 0; i < t; i++)
        {
            scanf("%d%d", &x, &y);
            if(x==a || y == b)printf("divisa\n");
            else if(x < a && y > b)printf("NO\n");
            else if(x < a && y < b)printf("SO\n");
            else if(x > a && y > b)printf("NE\n");
            else if(x > a && y < b)printf("SE\n");
        }
    }
    return 0;
}
