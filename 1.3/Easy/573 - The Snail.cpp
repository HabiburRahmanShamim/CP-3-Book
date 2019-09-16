#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
    freopen("input.txt", "r", stdin);
    int H, U, D, F;
    while(scanf("%d%d%d%d", &H, &U, &D, &F))
    {
        if(H == 0)break;
        int d = 1, f = 0;
        float cur_dis = 0, up = U, mn = (U*F)/100.0;
        while(1)
        {
            if(up > 0)cur_dis += up;
            if(cur_dis > H)
            {
                f = 1;
                break;
            }
            if(cur_dis < D)break;
            cur_dis -= D;
            up -= mn;
            d++;
        }
        if(f == 0)printf("failure on day %d\n", d);
        else printf("success on day %d\n", d);
    }
    return 0;
}
