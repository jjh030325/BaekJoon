#include <stdio.h>

int main()
{
    int n, dap = 0;
    scanf("%d", &n);
    
    for(int i=1;i<n+1;i++)
    {
        dap+=i;
    }
    printf("%d\n", dap);
    return 0;
}