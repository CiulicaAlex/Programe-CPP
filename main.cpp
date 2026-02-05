#include <iostream>
using namespace std;
int a[101][101],n,C=0;
int main() {
cin>>n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            cin>>a[i][j];
        }
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            int Sj=0,Si=0;
            for (int k=1;k<=n;k++) {
                Si=Si+a[i][k];
            }
            for (int k=1;k<=n;k++) {
                Sj=Sj+a[k][j];
            }
            if (Sj==Si) C++;
        }
    }
cout<<C;



    return 0;
}