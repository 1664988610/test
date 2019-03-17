#include <bits/stdc++.h>

using namespace std;

#define LL long long

const int INF = 0x3f3f3f3f;
const double eps = 1e-8;
const LL MOD = 1000000007;
const LL MAX = 100001;

int main(){

    int i, j, k;
    int T, n, m;
    int a[2];
    char b[2];
    int c, d, e;
    int cnt[2];
    cnt[0] = cnt[1] = 0;
    b[0] = 'a';
    b[1] = 'b';
    scanf("%d %d %d %d %d", &a[0],  &a[1], &c, &d, &e);
    k = 2;
    if(c == d && d == e)
    {
        k = c;
    }

    cnt[c]++;
    cnt[d]++;
    cnt[e]++;

    if(k != 2)
    {
        printf("The winner is %c: %d + %d\n", b[k], a[k], cnt[k]);
    }
    else
    {
        if(a[0] > a[1])
        {
            printf("The winner is %c: %d + %d\n", b[0], a[0], cnt[0]);
        }
        else
        {
            printf("The winner is %c: %d + %d\n", b[1], a[1], cnt[1]);
        }
    }
    

    
    
   // system("pause");

    return 0;
}
