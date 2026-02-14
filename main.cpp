#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("eratostene1.in");
ofstream fout("eratostene1.out");
int main() {
    int cnt=0;
    const int MAX=1000000;
     bool prime[MAX];
        for (int i=0;i<MAX;i++) {
            prime[i]=true;
        }
        prime[0]=prime[1]=false;
    for (int i=2;i*i<MAX;i++) {
            if (prime[i]) {
                for (int j=i*i;j<MAX;j+=i) {
                    prime[j]=false;
                }
            }
        }
    int n;
    fin>>n;
    for (int k=1;k<=n;k++) {
        int x;
        fin>>x;
        if (prime[x]) {
            cnt++;
        }
    }
   fout<<cnt;

    return 0;
}
