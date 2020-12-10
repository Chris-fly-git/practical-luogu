#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf",&x1);
    scanf("%lf",&y1);
    scanf("%lf",&x2);
    scanf("%lf",&y2);
    scanf("%lf",&x3);
    scanf("%lf",&y3);
    double l1,l2,l3;
    l1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    l2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    l3=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
   printf("%.2lf",l1+l2+l3);
   return 0;
}
