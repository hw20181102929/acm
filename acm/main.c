#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int min,max;
        scanf("%d %d",&min,&max);
        for(min;min<=max;min++)
        {
            int k=0;
            for(int j=2;j<=sqrt(min);j++)
            {
                if(min%j==0&&min!=2)
                {
                    k=1;
                    break;
                }
            }
            if(k==0&&min>1)
            {
                printf("%d\n",min);
            }
        }
    }
    return 0;
}
