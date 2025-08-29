#include<stdio.h>



int main(){

    int t;

    scanf("%d", &t);



    while(t--){

        int n;
        scanf("%d", &n);

        char ar[n+1];

        scanf("%s", ar);

        printf("ar = %s\n", ar);


        int l;
        scanf("%d", &l);

        char ar1[l+1];
        scanf("%s", ar1);
        //printf("ar1 = %s\n", ar1);


        char or[l+1];
        scanf("%s", or);
        //printf("or = %s\n", or);

        char ans[l+n+1];
        int D=0;
        int V=0;

        char Dihh[l+1];
        char Vihh[l+1];

        for(int i=0; i<l ; i++){
                    if(or[i]=='D'){
                            Dihh[D] = ar1[i];
                            D++;
                        }
                    else{
                            Vihh[V] = ar1[i];
                            V++;
                    }
        }

//        printf("Vihh = %s\n", Vihh);
//        printf("Dihh = %s\n", Dihh);


        for(int i=0; i<V; i++){
                ans[i] = Vihh[V-1-i];
        }

        for(int i=0; i<n; i++){
                ans[V+i] = ar[i];
        }

        for(int i=0; i<D; i++){
                ans[V+n+i] = Dihh[i];
        }


        for(int i=0; i<l+n; i++){

                    printf("%c",ans[i]);
        }







        printf("\n");

    }







}
