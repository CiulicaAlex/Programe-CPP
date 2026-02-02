#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("cautanrinmatrice.in");
ofstream fout("cautanrinmatrice.out");
int a[1001][1001],n,m,p,caut[1000001];
int main() {
fin>>n>>m;
        for (int i=1;i<=n;i++) {
                for (int j=1;j<=m;j++) {
                        fin>>a[i][j];
                }
        }
        fin>>p;
        for (int i=0;i<p;i++) {
                fin>>caut[i];
        }
        for (int i=0;i<p;i++) {
                int gasit=0;
                for (int lin=1;lin<=n && gasit==0;lin++) {
                        for (int col=1;col<=m && gasit==0;col++) {
                                if (a[lin][col]==caut[i]) {
                                        gasit=1;
                                        fout<<lin<<" "<<col<<"\n";
                                }
                        }
                }
                if (gasit==0) {
                        fout<<"0\n";
                }
        }


        return 0;
}