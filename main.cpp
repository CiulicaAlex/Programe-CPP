#include<iostream>
#include <fstream>
using namespace std;
bool crescator(long long x) {
    int last=10;
    while (x>0) {
        int c=x%10;
        if (c>=last) return false;
            last=c;
        x/=10;
    }
   return true;
}
ifstream fin("saci.in");
ofstream fout("saci.out");
int n;
int main() {
fin>>n;
    int cnt=0;
    for (int i=0;i<n;i++) {
        long long x;
        fin>>x;
        if (crescator(x)) {
            cnt++;
        }
    }
fout<<cnt;
    return 0;
}
