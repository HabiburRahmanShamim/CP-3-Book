#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, p, caso = 0;
    while(scanf("%d%d\n", &n, &p))
    {
        if(n == 0)break;
        string p_s, brand, s;
        for(int i = 0; i < n; i++)getline(cin, p_s);
        float d, f_ans = INT_MAX;
        int r,  cur_ratio = 0;
        for(int i = 0; i < p; i++)
        {
            getline(cin, s);
            scanf("%f%d\n", &d, &r);
            for(int j = 0; j < r; j++)getline(cin, p_s);
            if(r == cur_ratio)
            {
                if(d < f_ans)
                {
                    f_ans = d;
                    brand = s;
                }
            }
            else if(r > cur_ratio)
            {
                f_ans = d;
                brand = s;
                cur_ratio = r;
            }
        }
        if(caso != 0)printf("\n");
        printf("RFP #%d\n", ++caso);
        cout << brand << endl;
    }
    return 0;
}
