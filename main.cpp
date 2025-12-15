    #include<iostream>
    using namespace std;
    int a[101][101],n,m,k=0;
    int main() {
        cin>>n>>m;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                cin>>a[i][j];
            }
        }
        for(int i=2;i<=n;i=i+2) {
            for(int j=1;j<=m;j++) {
                int nrp=0;
                 if (i%2==0) {
                     for (int d=1;d*d<=a[i][j];d++) {
                         if (a[i][j]%d==0) {
                             nrp++;
                             if (a[i][j]/d!=d) {
                                 nrp++;
                             }
                         }
                     }
                 }
                if (nrp==2){
                    k++;
            }

            }

        }
        cout<<k;


        return 0;
    }
