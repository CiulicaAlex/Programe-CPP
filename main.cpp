#include <iostream>
using namespace std;
#include<fstream>
ifstream fin("mate.in");
ofstream fout("mate.out");
int main() {
    long long a=1,b=36;
    int n;
    fin>>n;
    if (n>=1) fout<<a<<" ";
    if (n>=2) fout<<b<<" ";
    if (n>=3) {
        for (int i=3;i<=n;i++) {
            long long c=34*b-a+2;
            fout<<c<<" ";
            a=b;
            b=c;
        }
    }


    return 0;
}