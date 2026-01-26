#include<iostream>
#include<climits>
using namespace std;
int a[101][101],n,m;
int main(){
cin>>n>>m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin>>a[i][j];
        }
    }
    int ue=a[n][m];
    for (int j=1;j<=m;j++) {
        a[1][j]=ue;
    }
    for (int j=1;j<=m;j++) {
        a[n][j]=ue;
    }
    for (int i=2;i<=n-1;i++) {
        a[i][1]=ue;
    }
    for (int i=2;i<=n-1;i++) {
        a[i][m]=ue;
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}