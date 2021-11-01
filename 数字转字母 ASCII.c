#include <stdio.h>
 
int main(void)
{
    int fromUser = 0;
    while(scanf("%d", &fromUser) == 1)
    {
        printf("%c",fromUser);
    }
    return 0;
}
