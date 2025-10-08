#include<stdio.h>
#include<stdlib.h>



int main(){

    int t;

    scanf("%d", &t);

    while(t--){

        int n;
        scanf("%d", &n);

        int neg=0;
        int zer=0;
        int move=0;

        for(int i=0; i<n; i++){
            int x;

            scanf("%d", &x);


            if(x<0){
                neg++;
            }
            else if(x==0){
                zer++;
            }


        }

        if(neg%2==1){
                move+=2;
        }

        move+=zer;

        printf("%d\n", move);


    }
}
