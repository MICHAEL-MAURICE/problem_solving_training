#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int tc, a, b, c;

    scanf("%d", &tc);
    while (tc--) {
        scanf("%d %d %d", &a, &b, &c);

        bool sol = false;
        int x, y, z;

        for (x = -22; x <= 22 && !sol; x++)

                for (y = -100; y <= 100 && !sol; y++)

                        for (z = -100; z <= 100 && !sol; z++)
                            if (z != x && z != y &&x!=y&& x + y + z == a
                                && x * y * z == b
                                && x * x + y * y + z * z == c) {
                                printf("%d %d %d\n", x, y, z);
                                sol = true;
                            }
        if (!sol)
            printf("No solution.\n");
    }
    return 0;
}
