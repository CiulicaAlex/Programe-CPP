#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;
ifstream fin("chenar.in");
ofstream fout("chenar.out");
int a[24][24],n;
int main() {
fin>>n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            fin>>a[i][j];
        }
    }
    for (int j=1;j<=n;j++) {
        fout<<a[1][j]<<" ";
    }
    for (int i=2;i<n;i++) {
        fout<<a[i][n]<<" ";
    }
    for (int j=n;j>=2;j--) {
        fout<<a[n][j]<<" ";
    }
    for (int i=n;i>=2;i--) {
        fout<<a[i][1]<<" ";
    }



    return 0;
}