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
enter elements of first set:
23 23 27 27 39 41 47 49 50 52 54 54 56 57 58 58 60 61
enter elements of second set:
9.5 26.5 7.8 17.8 31.4 25.9 27.4 27.2 31.2 34.6 42.5 28.8 33.4 30.2 34.1 32.9 41.2 35.7
given data is:
23.000000  9.500000
23.000000  26.500000
27.000000  7.800000
27.000000  17.799999
39.000000  31.400000
41.000000  25.900000
47.000000  27.400000
49.000000  27.200001
50.000000  31.200001
52.000000  34.599998
54.000000  42.500000
54.000000  28.799999
56.000000  33.400002
57.000000  30.200001
58.000000  34.099998
58.000000  32.900002
60.000000  41.200001
61.000000  35.700001
correlation of given data is: 0.817618
given data is positively correlated
*/
