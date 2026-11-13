#include <stdio.h>
int main()
{
    int N,cost=0;
    scanf("%d",&N);
    int a[N];
    for(int i=0 ; i<N ; i++){
        scanf("%d",&a[i]);
    }
    for(int i=1 ; i<=N ; i++){
        for(int j=0 ; j<N ; j++){
            if(i==a[i-1]){
                break;
            }
            else if(i==a[j]){
                int temp;
                temp=a[i-1];
                a[i-1]=a[j];
                a[j]=temp;
                cost++;
            }
        }
    }
    // printf("%d",cost);
    for(int i=0 ; i<N ; i++){
        printf("%d",a[i]);
    }

    return 0;
}