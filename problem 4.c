#include<stdio.h>
#include<math.h>
float max(float a[],int n)
{
    float max=a[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
}
float min(float a[],int n)
{
    float min=a[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    return min;
}
int len(float no){
    int i,count=1,temp;
    temp=no;
    while((temp/10)>0){
        count++;
        temp/=10;
    }
    return count;
}
void main()
{
    int n,i;
    float avg=0,new_obs,obs;
    printf("enter no of observations:\n");
    scanf("%d",&n);
    float a[n],low,high,new_low,new_high;
    printf("enter those obserations:\n");
    for(i=0;i<n;i++)
    scanf("%f",&a[i]);
    for(i=0;i<n;i++)
    avg+=a[i];
    avg=avg/n;
    float sd=0;
    for(i=0;i<n;i++)
    sd+=((a[i]-avg)*(a[i]-avg));
    sd=sqrt(sd/(n-1));
    printf("data before z-score normalization:\n");
    for(i=0;i<n;i++)
    printf("%.2f ",a[i]);
    printf("\n");
    printf("observation after z-scorenormalization:\n");
    for(i=0;i<n;i++)
    printf("%.2f ",(a[i]-avg)/sd);
    printf("\n");
    printf("Min-max normalization:\n");
    printf("enter new range:\n");
    scanf("%f",&new_low);
    scanf("%f",&new_high);
    printf("data before Min-max normalization:\n");
    for(i=0;i<n;i++)
    printf("%.2f ",a[i]);
    printf("\n");
    low=min(a,n);
    high=max(a,n);
    printf("observation after Min-Max normalization:\n");
    for(i=0;i<n;i++)
    {
        float temp=(((a[i]-low)*(new_high-new_low))/(high-low))+(new_low);
        printf("%.2f ",temp);
    }
    printf("\n");
    printf("data before Normalization by decimal scaling is :\n");
    for(i=0;i<n;i++)
    printf("%.2f ",a[i]);
    printf("\n");
    int j=len(high);
    printf("data after Normalization by decimal scaling is :\n");
    for(i=0;i<n;i++)
    printf("%.2f ",a[i]/(pow(10,j)));
    printf("\n");
}

/* OUTPUT:
enter no of observations:
27
enter those obserations:
13 15 16 16 19 20 20 21 22 22 25 25 25 25 30 33 33 35 35 35 35 36 40 45 46 52 70
data before z-score normalization:
13.00 15.00 16.00 16.00 19.00 20.00 20.00 21.00 22.00 22.00 25.00 25.00 25.00 25.00 30.00 33.00 33.00 35.00 35.00 35.00 35.00 36.00 40.00 45.00 46.00 52.00 70.00 
observation after z-scorenormalization:
-1.31 -1.16 -1.08 -1.08 -0.85 -0.77 -0.77 -0.69 -0.62 -0.62 -0.38 -0.38 -0.38 -0.38 0.00 0.23 0.23 0.39 0.39 0.39 0.39 0.47 0.78 1.16 1.24 1.70 3.09 
Min-max normalization:
enter new range:
10
100
data before Min-max normalization:
13.00 15.00 16.00 16.00 19.00 20.00 20.00 21.00 22.00 22.00 25.00 25.00 25.00 25.00 30.00 33.00 33.00 35.00 35.00 35.00 35.00 36.00 40.00 45.00 46.00 52.00 70.00 
observation after Min-Max normalization:
10.00 13.16 14.74 14.74 19.47 21.05 21.05 22.63 24.21 24.21 28.95 28.95 28.95 28.95 36.84 41.58 41.58 44.74 44.74 44.74 44.74 46.32 52.63 60.53 62.11 71.58 100.00 
data before Normalization by decimal scaling is :
13.00 15.00 16.00 16.00 19.00 20.00 20.00 21.00 22.00 22.00 25.00 25.00 25.00 25.00 30.00 33.00 33.00 35.00 35.00 35.00 35.00 36.00 40.00 45.00 46.00 52.00 70.00 
data after Normalization by decimal scaling is :
0.13 0.15 0.16 0.16 0.19 0.20 0.20 0.21 0.22 0.22 0.25 0.25 0.25 0.25 0.30 0.33 0.33 0.35 0.35 0.35 0.35 0.36 0.40 0.45 0.46 0.52 0.70 
*/
