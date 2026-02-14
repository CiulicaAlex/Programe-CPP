#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("eratostene2.in");
ofstream fout("eratostene2.out");
int main() {
    bool prime[1000001];
    for (int i=0;i<=1000001;i++) {
        prime[i]=true;
    }
    prime[0]=prime[1]=false;
    for (int i=2;i*i<=1000000;i++) {
        if (prime[i]) {
            for (int j=i*i;j<=1000000;j+=i) {
                prime[j]=false;
            }
        }
    }
    int n;
    fin>>n;
    for (int i=1;i<=n;i++) {
        int cnt=0;
        int x;
        fin>>x;
        for (int d=2;d*d<=x;d++) {
            if (prime[d] &K& x%d==0) {
                cnt++;
                while (x%d==0) x/=d;
            }
        }
        if (x>1) cnt++;
        fout<<cnt<<" ";
    }

    return 0;
}
