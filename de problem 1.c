#include<stdio.h>
void main()
    
{
    int q1index,q3index,modality=1,n,i,j,p,k=0,c=1,big,q1,q3;
    printf("enter number of observations:\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter those elements in increasing order:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("given observations are:\n");
    float mean=0;
    for(i=0;i<n;i++)
    { 
        printf("%d ",a[i]);
        mean+=a[i];
    } 
    printf("\n");
    mean/=n; 
    double median; 
    if(n%2==0)
    {
        median=(a[n/2]+a[(n/2)-1])/2;
    }
    else
    { 
        median=a[n/2]; 
    }  
    printf("mean of given data is:%f\n",mean); 
    printf("median is :%1f\n",median);
    {   
        for(j=i+1;j<n;j++)
        {  
            if(a[i]==a[j]) 
                c++;  
        } 
        b[k]=c;
        k++;  
        c=1; 
    } 
    big=b[0]; 
    for(i=1;i<n;i++) 
    { 
        if(b[i]>=big) 
        {  
            big=b[i]; 
            p=i; 
        }  
    }  
    printf("mode of the given data is:%d\n",a[p]); 
    for(i=0;i<n && i!=p;i++)  
    {      
        if(big==b[i])
        {
            modality++;  
            median=a[n/2];
        } 
    }          
    switch(modality) 
    {   
        case 1:printf("unimodal data\n");
        break;      
        case 2:printf("bimodal data\n"); 
        break;     
        case 3:printf("trimodal data\n"); 
        break;   
    } 
    printf("mid range of data is :%d\n",(a[0]+a[n-1])/2);
    q1index=(n+1)/4;
    q3index=(3*(n+1)/4);
    q1=a[q1index]; 
    q3=a[q3index]; 
    printf("q1=%d\tq3=%d\n",q1,q3);
    printf("five number summary is:\n"); 
    printf("min=%d\tq1=%d\tmedian=%f\tq3=%d\tmax=%d\n",a[0],q1,median,q3,a[n-1]);  
}  
/* output
enter number of observations:
25
enter those elements in increasing order:
13 15 16 16 19 20 20 21 22 22 25 25 25 25 30 33 33 35 35 35 36 40 45 52 70
given observations are:
13 15 16 16 19 20 20 21 22 22 25 25 25 25 30 33 33 35 35 35 36 40 45 52 70 
mean of given data is:29.120001
median is :25.000000
mode of the given data is:21
unimodal data
mid range of data is :41
q1=20   q3=35
five number summary is:
min=13  q1=20   median=25.000000        q3=35   max=70
*/
