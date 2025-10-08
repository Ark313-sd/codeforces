#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d",&n);

        int ar[n];
        int t_prod =1;
        for(int i=0; i<n; i++){
            scanf("%d", &ar[i]);
            if(ar[i]<0){                // JUST THE SIGN OF THE NUMBER CAN DO THE JOB
                t_prod*=-1;             // JUST TAKE CARE OF THE OVERFLOW
            }
            else if(ar[i]==0){
                t_prod*=0;
            }
        }

        if(t_prod<=0){
            printf("0\n");
        }
        else{
            printf("1\n");
            printf("%d 0\n", n);


        }



    }

}
