#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    printf("enter number of tuples in the training data:");
    scanf("%d",&n);
    struct ss{
        char outlook[50];
        char temp[50];
        char humidity[50];
        char wind[50];
        char label[50];
       
    };
    struct ss v[15];
    float c1=0;
    float c2=0;
    printf("enter the %d tuples of training data set one by one :\n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%s%s%s%s%s",v[i].outlook,v[i].temp,v[i].humidity,v[i].wind,v[i].label);
    }
    for (int i=0;i<n;i++)
    {
        if ((strcmp(v[i].label,"yes"))==0)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    float cty=0,chy=0,coy=0,cwy=0;
    for (int i=0;i<n;i++)
    {
        if ((strcmp(v[i].temp,"cool")==0) && (strcmp(v[i].label,"yes")==0))
        {
            cty=cty+1;
        }
        if ((strcmp(v[i].humidity,"high")==0) && (strcmp(v[i].label,"yes")==0))
        {
            chy=chy+1;
        }
        if ((strcmp(v[i].wind,"strong")==0) && (strcmp(v[i].label,"yes")==0))
        {
            cwy=cwy+1;
        }
        if ((strcmp(v[i].outlook,"sunny")==0) && (strcmp(v[i].label,"yes")==0))
        {
            coy=coy+1;
        }
    }
    float py=((cty/c1)*(chy/c1)*(cwy/c1)*(coy/c1))*(c1/n);
    printf("the probabilty of playng tennis when temp is cool ,humidity is high, wind is strong and outlook is sunny is:%f",py);
}
/*
output
enter number of tuples in the training data:14
enter the 14 tuples of training data set one by one :
sunny hot high weak no
sunny hot high strong no
overcast hot high weak yes
rain mild high weak yes
rain cool normal weak yes
rain cool normal strong no
overcast cool normal strong yes
sunny mild high weak no
sunny cool normal weak yes
rain mild normal weak yes
sunny mild normal strong yes
overcast mild high strong yes
overcast hot normal weak yes
rain mild high strong no
the probabilty of playng tennis when temp is cool ,humidity is high, wind is strong and outlook is sunny is:0.005291
*/
