 integ_2.c

 

#include<stdio.h>

#include<math.h>

void main()

{

int i,n;

float x[20],y[20],a,b,h,k,inte,s;

printf("enter lower limit,upper limit and no.of sub intervals");

scanf("%f%f%d",&a,&b,&n);

h=(b-a)/n;

x[0]=a;

y[0]=1/(1+pow(x[0],2));

printf("

x

y");

for(i=1;i<=n;i++)

{

x[i]=x[i-1]+h;

y[i]=1/(1+pow(x[i],2));

printf("

%f %f",x[i],y[i]);

}

s=0;

for(i=1;i<=n;i++)

{

s=s+y[i];

}

 

inte=h*(y[0]+y[n]+2*s)/2;

printf("

value of integral is %f",inte);

}
 
