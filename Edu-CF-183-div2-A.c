#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    while(t--){

        float x;
        scanf("%f", &x);

        float ans = x/3;

        int ans2 = ans;

        float diff = ans-(float) ans2;

        if(diff!=0)
            printf("%.0f\n", 3-diff*3);
        else
            printf("0\n");



    }


}
