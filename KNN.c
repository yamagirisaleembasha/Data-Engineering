#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void main(){
    char *name[8]={"ajay","mark","sara","zaira","sachin","rahul","pooja","smith"};
    int age[8]={32,40,16,14,55,40,20,15};
    int gender[8]={1,1,0,0,1,1,0,1};
    char *sport[8]={"football","neither","cricket","cricket","cricket","cricket","neither","football"};
    int n=8;
    float euc[30];
    char na[100];
    int a;
    int g;
    char s;
    printf("enter name:");
    scanf("%s",na);
    printf("enter age:");
    scanf("%d",&a);
    printf("enter gender 1-male 0-female:");
    scanf("%d",&g);
    for(int i=0;i<n;i++){
        euc[i]=sqrt(((age[i]-a)*(age[i]-a))+((gender[i]-g)*(gender[i]-g)));
    }
    float min=euc[0];
    int k=0;
    for(int i=1;i<n;i++){
        if(min>euc[i]){
            min=euc[i];
            k=i;
        }
    }
    printf("%s of %d years old will play %s",na,a,sport[k]);
}
/*
output
enter name:angelina
enter age:5
enter gender 1-male 0-female:0
angelina of 5 years old will play cricket
*/
