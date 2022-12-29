/*  13 15 16 16 19 20 20 21 22 22 25 25 25 25 30 33 33 35 35 35 35 36 40 45 46 52 70 */
/* means 14.67   18.33   21.00   24.00   26.67   33.67   35.00   40.33   56.00 */
#include<stdio.h>
void main()
{
    int n,i,j,bin_size;
    printf("enter bin depth :\n");
    scanf("%d",&bin_size);
    printf("enter no of observations:\n");
    scanf("%d",&n);
    float a[n];
    printf("enter those obserations:\n");
    for(i=0;i<n;i++)
    scanf("%f",&a[i]);
    printf("data before smoothing by bin means by a bin depth of %d:\n",bin_size);
    for(i=0;i<n;i++)
    printf("%.2f\t",a[i]);
    printf("\n");
    printf("data after smoothing by bin means by a bin depth of %d:\n",bin_size);
    int bin = 0;
    float mean=0;
    for(i=0;i<n;i++)
    {
        while(bin < bin_size)
        {
            mean+=a[i];
            bin++;
            if(bin==bin_size)
            continue;
            else
            i++;
        }
        mean=mean/bin_size;
        int c=0;
        for(int j=i;c<bin_size;j--)
        {
            a[j]=mean;
            c++;
        }
        bin=0;
        mean=0;
    }
    for(i=0;i<n;i++)
    printf("%.2f\t",a[i]);
    printf("\n");
}
