#include <fstream>
using namespace std;

int fr[10000]; // fr[i] = 1 dacă i apare în listă

int main() {
    ifstream fin("numere8.in");
    ofstream fout("numere8.out");

   int x;
    while (fin>>x) {
        if (x<=9999 && x>0) {
            fr[x]=1;
        }
    }
for (int i=9999;i>=1;i--) {
    if (fr[i]==0) {
        fout<<i<<" ";
    }
}
    return 0;
}