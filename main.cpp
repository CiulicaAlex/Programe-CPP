#include <iostream>
using namespace std;
int a[101][101];
int n,m,s;
int main() {
    cin>>n>>m;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            cin>>a[i][j];
        }
    }
for (s=2;s<=n+m;s++) {
    for (int i=1;i<=n;i++) {
        int j=s-i;
        if (j>=1 && j<=m) {
            cout<<a[i][j]<<" ";
        }

    }
    cout<<endl;
}

    return 0;
}