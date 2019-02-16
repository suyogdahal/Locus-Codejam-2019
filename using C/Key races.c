#include <stdio.h>

int main()
{
    int s, v1, v2, t1, t2, total_1, total_2;

    scanf("%d%d%d%d%d", &s, &v1, &v2, &t1, &t2);

    total_1 = t1 + s*v1 + t1;
    total_2 = t2 + s*v2 + t2;

    if (total_1 < total_2)
        printf("First\n");
    else if (total_1 > total_2)
        printf("Second\n");
    else if (total_1 == total_2)
        printf("Friendship\n");

    return 0;
}
