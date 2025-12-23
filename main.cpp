#include <iostream>
#include <fstream>
using namespace std;
ifstream f("input.txt");
int n,m,a[101][101];

int main() {
   f>>m>>n;
    for (int i=1;i<=m;i++) {
        for (int j=1;j<=n;j++) {
            f>>a[i][j];
        }
    }
    int minim=INT_MAX;
    int indLin=-1, indCol=-1;
    for (int i=1;i<=m;i++) {
        for (int j=1;j<=n;j++) {
            if (a[i][j]<minim) {
                minim=a[i][j];
                indLin=i;
                indCol=j;
            }
        }
    }
    int ultimul=a[m][n];
    for (int i=1;i<=m;i++) {
        a[i][indCol]=ultimul;
    }
    for (int i=1;i<=m;i++) {
        for (int j=1;j<=n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
