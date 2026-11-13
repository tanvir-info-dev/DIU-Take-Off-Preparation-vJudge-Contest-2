#include <stdio.h>
int main()
{
    int n,X,last,sum=0;
    scanf("%d%d",&n,&X);
    int a[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
        last=a[i]%10;
        sum=sum+last;
    }
    if(sum%X==0){
        printf("Finish all the tasks, including mine!\n");
    }
    else{
        printf("You can now watch the series!\n");
    }

    return 0;
}