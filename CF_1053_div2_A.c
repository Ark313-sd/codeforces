#include<stdio.h>
#include<stdlib.h>



int main(){

    int t;

    scanf("%d", &t);

    while(t--){

        int n,m;
        scanf("%d %d", &n, &m);
        int ar[m];
        int max = -1;
        int onc = 0;
        int onconf = 0;

        for(int i=0; i<m; i++){

            scanf("%d", &ar[i]);

            if(ar[i]>max){
                max = ar[i];
            }
            if(ar[i]==1){
                onc++;
            }

            if(i!=0 && ar[i]==1){
                onconf = 1;

            }

        }

        if(onc>1 || onconf){
            printf("1\n");
        }
        else{
            printf("%d\n", n-max+1);
        }




}
}
