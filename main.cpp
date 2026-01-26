#include<iostream>
using namespace std;
int a[101][101],n,m;
int main(){
cin>>n>>m;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            cin>>a[i][j];
        }
    }
    int minLin=n;
    int maxLin=-1;
    int minCol=m;
    int maxCol=-1;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            if (a[i][j]==1) {
                minLin=min(minLin,i);
                maxLin=max(maxLin,i);
                minCol=min(minCol,j);
                maxCol=max(maxCol,j);
            }
        }
    }
    int p=maxLin-minLin+1;
    int q=maxCol-minCol+1;
    cout<<p<<" "<<q<<endl;
    for (int i=minLin;i<=maxLin;i++) {
        for (int j=minCol;j<=maxCol;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}