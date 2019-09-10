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
    //read();
    //write();
    int t, caso = 1;
    scanf("%d", &t);
    while(t--)
    {
        char n[1000];
        scanf("%s", n);
        int l = strlen(n);
        if((l == 1 && n[0] == '1') || (l == 1 && n[0] == '4') || (n[0] == '8' && n[1] == '7' && l == 2))printf("+\n");
        else if(n[l-1] == '5' && n[l-2] == '3')printf("-\n");
        else if(n[0] == '1' && n[1] == '9' && n[2] == '0')printf("?\n");
        else if(n[0] == '9' && n[l-1] == '4') printf("*\n");
        else printf("+\n");
    }
    return 0;
}
