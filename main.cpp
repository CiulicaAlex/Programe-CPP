#include <iostream>
using namespace std;
int n,m,a[101][101];
int main() {
   cin>>m>>n;
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    int maxx=0;
    for (int i=0;i<m-1;i++) {
        for (int j=0;j<n-1;j++) {
            int S=a[i][j]+a[i+1][j]+a[i+1][j+1]+a[i][j+1];
            if (S>maxx)
                maxx=S;

        }
    }
    cout<<maxx;
    return 0;
}
