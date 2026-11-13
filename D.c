#include <stdio.h>
#include <math.h>
int main()
{
    int h1,h2,a1,a2,b1,b2,x1,y1,x2,y2,dis1,dis2;
    scanf("%d%d%d%d%d%d",&h1,&h2,&a1,&a2,&b1,&b2);
    x1=(h1-a1)*(h1-a1);
    y1=(h2-a2)*(h2-a2);
    dis1=x1+y1;
    x2=(h1-b1)*(h1-b1);
    y2=(h2-b2)*(h2-b2);
    dis2=x2+y2;
    if(dis1<=dis2){
        printf("First\n");
    }
    else{
        printf("Second\n");
    }

    return 0;
}