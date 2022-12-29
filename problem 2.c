#include <stdio.h>
#include<math.h>
void main()
{
    int n,i;
    printf("enter no of observations:\n");
    scanf("%d",&n);
    float a[n],b[n];
    printf("enter elements of first set:\n");
    for(i=0;i<n;i++)
    scanf("%f",&a[i]);
    printf("enter elements of second set:\n");
    for(i=0;i<n;i++)
    scanf("%f",&b[i]);
    float xy=0,x=0,y=0,x2=0,y2=0;
    for(i=0;i<n;i++)
    {
        xy+=(a[i]*b[i]);
        x+=a[i];
        y+=b[i];
        x2+=(a[i]*a[i]);
        y2+=(b[i]*b[i]);
    }
    float meanx=x/n;
    float meany=y/n;
    float cov=(xy/n)-(meanx*meany);
    float sigmax=sqrt((x2/n)-(meanx*meanx));
    float sigmay=sqrt((y2/n)-(meany*meany));
    float correlation_coefficient=(cov)/(sigmax*sigmay);
    printf("given data is:\n");
    for(i=0;i<n;i++)
    printf("%f  %f\n",a[i],b[i]);
    printf("correlation of given data is: %f\n",correlation_coefficient);
    if(correlation_coefficient<0)
    printf("given data is negatively correlated");
    else
    printf("given data is positively correlated");
}
/*
output:

*/
