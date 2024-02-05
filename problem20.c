#include<stdio.h>
int main(){
float a,b,c,pr;
printf("Input the 1st number:");
scanf("%f",&a);
printf("Input the 2nd number:");
scanf("%f",&b);
printf("Input the 3rd number:");
scanf("%f",&c);
pr=(b*b)-(4*a*c);
if(pr>0&&a!=0){
float x,y;
pr=sqrt(pr);
x=(-b+pr)/(2*a);
y=(-b-pr)/(2*a);
printf("Root1=%.5f\n",x);
printf("Root2=%.5f\n",y);
}
else{

printf("Impossible to find the root");

}

return 0;
}
