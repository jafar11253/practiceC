#include<stdio.h>
int main()
{
    int hun,fif,twn,ten,fiv,two,one;
    int amt;
    printf("Amount=");
    scanf("%d",&amt);
    hun=amt/100;
    fif=(amt%100)/50;
    twn=((amt%100)%50)/20;
    ten=(((amt%100)%50)%20)/10;
    fiv=((((amt%100)%50)%20)%10)/5;
    two=((((((amt%100)%50)%20)%10)%5)/2);
    one=((((((amt%100)%50)%20)%10)%5)%2)/1;
    printf("%d Notes of Hundreds \n",hun);
    printf("%d Notes of Fifty \n",fif);
    printf("%d Notes of Twenty \n",twn);
    printf("%d Notes of ten \n",ten);
    printf("%d Notes of fiv \n",fiv);
    printf("%d Notes of two \n",two);
    printf("%d Notes of one \n",one);
    return 0;
}
