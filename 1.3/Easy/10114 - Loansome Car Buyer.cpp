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
    int m, d;
    double dw, loan;
    while(scanf("%d%lf%lf%d", &m, &dw, &loan, &d))
    {
        if(m < 0)break;
        int d_m[10000], p_ar_c = 0, ans = 0;
        double d_rt[10000];
        for(int i = 0; i < d; i++)
        {
            scanf("%d%lf", &d_m[i], &d_rt[i]);
        }
        d_m[d] = 9999999;
        double car_val = dw + loan, mnthly_pay = loan/m;
        double brrw = loan;
        car_val -= (car_val*d_rt[p_ar_c]);
        while(1)
        {
            if(brrw < car_val)break;
            ans++;
            if(d_m[p_ar_c+1] == ans)p_ar_c++;
            car_val -= (car_val*d_rt[p_ar_c]);
            brrw -= mnthly_pay;
        }
        if(ans == 1)printf("%d month\n", ans);
        else printf("%d months\n", ans);
    }
    return 0;
}
