
#include<stdio.h>
int input();
int compare(int a,int b,int c);
void output(int a,int b,int largest,int c);
int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();

    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}
int input()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    return x;
}
int compare(int a , int b,int c)
{
    int l;
    if(a>=b&&a>=c)
  {
    l=a;
}
  else if(b>=a&&b>=c)
  {
    l=b;
  }
  else{
    l=c;
  }
  return l;
}
void output(int a,int b,int c, int largest)
{
    printf("the largest of %d,%d and %d is %d\n",a,b,c,largest);
}