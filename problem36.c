#include<stdio.h>
int main(){
int password;
printf("Enter the password :\n");
scanf("%d",&password);
if (password==1234)
{
printf("Correct password");
}
else
{
printf("Wrong password,try another ");
}
return 0;
}


