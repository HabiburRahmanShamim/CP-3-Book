#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
    freopen("input.txt", "r", stdin);
    int N, B, H, W;
    while(scanf("%d%d%d%d", &N, &B, &H, &W) != EOF)
    {
        int per_head[20], f1, f2;
        for(int i = 0; i < 20; i++)per_head[i] = -1;
        for(int i = 0; i < H; i++)
        {
            scanf("%d", &f1);
            for(int j = 0; j < W; j++)
            {
                scanf("%d", &f2);
                if(f2 >= N)per_head[i] = f1;
            }
        }
        ll ans = INT_MAX;
        for(int i = 0; i < H; i++)
        {
            if(per_head[i] != -1)ans = min(ans, per_head[i]*(ll)N);
        }
        if(ans <= B)printf("%lld\n", ans);
        else printf("stay home\n");
    }
    return 0;
}
