#include <iostream>
using namespace std;
int n,k,a[21][21];
int main() {
    cin>>n>>k;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cin>>a[i][j];
        }
    }
    int aux[20];
    for (int j=1;j<k;j++)
        aux[j]=a[k][j];
    a[k][1]=aux[k-1];
    for (int j=2;j<k;j++)
        a[k][j]=aux[j-1];
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}