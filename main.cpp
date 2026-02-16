#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("eratostene4.in");
ofstream fout("eratostene4.out");
int a[100000];
int cnt[10000001];
int main() {
int n;
    fin>>n;
    int maxim=0;
    for (int i=1;i<=n;i++) {
        fin>>a[i];
        if (a[i]>maxim) {
            maxim=a[i];
        }
    }
    for (int i=2;i<=maxim;i++) {
        if (cnt[i]==0) {
            for (int j=i;j<=maxim;j+=i) {
                cnt[j]++;
            }
        }
    }
for (int i=1;i<=n;i++) {
    int k=cnt[a[i]];
    int rez=1;
    for (int j=1;j<=k;j++) {
        rez=rez*2;
        fout<<rez<<" ";
    }
}


    return 0;
}
