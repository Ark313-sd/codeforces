#include <iostream>
using namespace std;

void FastIO(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
}





int main() {

    FastIO();

    int t;

    cin >> t;

    while(t--){

        int l,q;

        cin >> l >> q;

        long long ar[l];
        long long prex[l];


        for(int i=0; i<l; i++){
            cin >> ar[i];

            if(i==0){
                prex[i] = ar[i];
            }
            else{
                prex[i] = prex[i-1] + ar[i];
            }


        }

        for(int i=0; i<q; i++){
            long long il, ir, k;

            cin>>il>>ir>>k;

            long long targs;

            if(il!=1)
                targs = prex[ir-1] - prex[il-2];
            else
                targs = prex[ir-1];

            long long sum = prex[l-1] - targs;

            sum+=(k*(ir-il+1));

            if(sum%2==0){
                cout << ("NO\n");
            }
            else{
                cout << ("YES\n");
            }

        }






    }





    return 0;
}
