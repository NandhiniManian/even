#include<stdio.h>
void main()
{
int c,a,b;
printf("enter the intervals:");
scanf("%d%d",&a,&b);
for(c=a;c<=b;c++)
{
if(c%2==0)
{
printf("%d\n",c);
}
}

}
