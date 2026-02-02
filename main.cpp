#include <iostream>
using namespace std;
int n,a[101][101];
int main() {
    cin>>n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            if (i==1 || i==n) {
                a[i][j]=i+j;
            } else if (j==1 || j==n) {
                a[i][j]=i+j;
            } else {
                a[i][j]=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1];
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
