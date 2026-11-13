#include <stdio.h>
int main()
{
    int N,T,S;
    scanf("%d%d%d",&N,&T,&S);
    if(N<=T && N<=S){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}