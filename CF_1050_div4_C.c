#include<stdio.h>
#include<math.h>


int main(){
    int t;
    scanf("%d", &t);

    while(t--){

        int n,k;
        scanf("%d %d", &n, &k);
        int prev_t=0, prev_pos=0;
        int poin=0;
        int n_t, n_p;

        for(int i=0; i<n; i++){



                scanf("%d %d", &n_t, &n_p);

                int diff = abs(n_t-prev_t);

                if(diff%2==0 && n_p!=prev_pos){
                    poin+=(diff-1);
                }
                else if(diff%2==0 && n_p==prev_pos){
                    poin+=diff;
                }
                else if(diff%2==1 && n_p!=prev_pos){
                    poin+=diff;
                }
                else if(diff%2==1 && n_p==prev_pos){
                    poin+=(diff-1);
                }

                prev_t = n_t;
                prev_pos = n_p;


        }

        poin+=(k-n_t);

        printf("%d\n",poin);





    }



}
