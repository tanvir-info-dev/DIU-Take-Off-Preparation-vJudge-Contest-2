#include <stdio.h>
int main()
{
    int X,Y,Cx,Cy,a,b;
    double dis,yellow,red,blue,black;
    scanf("%d%d%d%d",&X,&Y,&Cx,&Cy);
    scanf("%lf%lf%lf%lf",&yellow,&red,&blue,&black);
    a=(X-Cx)*(X-Cx);
    b=(Y-Cy)*(Y-Cy);
    dis=(double)a+b;
    if(dis<=(yellow*yellow))
    printf("100");
    else if(dis<=(red*red))
    printf("75");
    else if(dis<=(blue*blue))
    printf("50");
    else if(dis<=(black*black))
    printf("25");

    return 0;
}