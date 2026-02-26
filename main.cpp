#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("dans.in");
ofstream fout("dans.out");
int c;
long long n,D;
long long a[1000001];
bool is_prime[2000001];
bool digits_D[10];
void build_sieve(long long n) {
    for (long long i=0;i<=n;i++) is_prime[i]=true;
    is_prime[0]=is_prime[1]=false;
    for (long long i=2;i*i<=n;i++) {
        if (is_prime[i]) {
            for (long long j=i*i;j<=n;j+=i) {
                is_prime[j]=false;
            }
        }
    }
}
void build_digits(long long D) {
    for (int i=0;i<=9;i++) digits_D[i]=false;
    while (D>0) {
        digits_D[D%10]=true;
        D/=10;
    }
}
bool check_digits(long long x) {
    while (x>0) {
        int cif=x%10;
        if (!digits_D[cif]) return false;
        x/=10;
    }
    return true;
}
int main()
{    fin>>c>>n>>D;
    long long maxAi=0;
    for (int i=1;i<=n;i++) {
        fin>>a[i];
        if (a[i]>maxAi) maxAi=a[i];
    }
    int cnt=0;
    if (c==1) {
        long long maxSum=maxAi+D;
        build_sieve(maxSum);
        for (int i=1;i<=n;i++) {
            long long s=a[i]+D;
            if (s<=maxSum && is_prime[s]) cnt++;
        }
    } else if (c==2) {
        build_digits(D);
        for (int i=1;i<=n;i++) {
            if (check_digits(a[i])) cnt++;
        }
    }
 fout<<cnt<<'\n';


    return 0;
}