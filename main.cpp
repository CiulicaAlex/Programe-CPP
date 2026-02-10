#include<iostream>
#include <fstream>
using namespace std;
ifstream fin("mouse.in");
ofstream fout("mouse.out");
int n,m,a[101][101],s=0,minim=101;
int main() {
    fin>>n>>m;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            fin>>a[i][j];
            s+=a[i][j];
            if ((i+j)%2==1 && minim > a[i][j]) {
                minim=a[i][j];
            }
        }
    }
    if (n%2==1 || m%2==1) {
        fout<<n*m<<" "<<s;
    } else {
        fout<<n*m-1<<" "<<s-minim;
    }

    return 0;
}
