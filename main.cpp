#include <iostream>
#include <fstream>
using namespace std;
int fr[1000];
int n;
int main(){
    ifstream fin("prime4.in");
ofstream fout("prime4.out");
    fin>>n;
    for (int i=1;i<=n;i++) {
        int x;
        fin>>x;
        int nrd=0;
       for (int d=2;d*d<=x;d++) {
           if (x%d==0) {
               nrd++;
               if (d!=x/d) {
                   nrd++;
               }
           }
       }
        if (nrd==0) {
            fr[x]++;
        }
    }
    int frmax=0;
    int rezultat=0;
    for (int i=100;i<=999;i++) {
if (fr[i]>frmax) {
    frmax=fr[i];
    rezultat=i;
}
    }
   fout<<rezultat;


    return 0;
}