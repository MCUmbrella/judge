#include <stdio.h>

int gcd(int n, int m)
{
    int a = n >= m ? n : m;
    int b = n <= m ? n : m;
    int t = a % b;
    if(t==0) return b;
    return gcd(b, t);
}

int lcm(int n, int m)
{
    return n * m / gcd(n, m);
}

int main()
{
    int n, m, ans_gcd, ans_lcm;
    scanf("%d%d%d%d", &n, &m, &ans_gcd, &ans_lcm);
    if (gcd(n, m) == ans_gcd && lcm(n, m) == ans_lcm)
        printf("Yes");
    else
        printf("No");
    return 0;
}
