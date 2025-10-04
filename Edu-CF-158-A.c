#include<stdio.h>
#include<math.h>

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int gs, x;
        scanf("%d %d",&gs, &x);
        int p[gs];
        int diff=0;

        for(int i=0; i<gs; i++){

            scanf("%d", &p[i]);
            int t_diff;

            if(i!=0){
                t_diff = abs(p[i]-p[i-1]);

                if(t_diff>diff){
                    diff = t_diff;
                }

            }
        }

        int fin_diff = 2*(x-p[gs-1]);
        int in_diff = p[0];

        //printf("fin=%d in=%d diff=%d\n", fin_diff, in_diff, diff);


        if( in_diff>=diff && in_diff>=fin_diff ){
            diff = in_diff;
        }
        if(fin_diff>=diff && fin_diff>=in_diff){
            diff = fin_diff;
        }

        printf("%d\n", diff);

    }











}
