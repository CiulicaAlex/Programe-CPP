#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;
ifstream fin("medpoz.in");
ofstream fout("medpoz.out");
int a[21][21],n,OK=0;
double nr=0;
int main() {
fin>>n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            fin>>a[i][j];
        }
    }
    double S=0;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            if (i>j && a[i][j]>0) {
                S+=a[i][j];
                nr++;
                OK=1;
            }
        }
    }
    double Ma=S/nr;
    if (OK!=0) {
        fout<<fixed<<setprecision(3)<<Ma;
    } else {
        fout<<"NU EXISTA";
    }

    return 0;
}