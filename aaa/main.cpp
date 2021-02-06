#include <bits/stdc++.h>

using namespace std;
 char s[1000005];

    int n, a, b, temp, t(1);
    bool valid;
int main()
{
   while (scanf("%s %d", s, &n) == 2)
    {
        printf("Case %d:\n", t);
        ++t;

        while (n--)
        {
            scanf("%d%d", &a, &b);
           int z=min(a,b);
            b=max(a,b);

            valid = true;

            for (int i = z; i < b; ++i)
                if (s[i] != s[i + 1])
                    valid = false;

            if (valid)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }



    return 0;
}
