#include <iostream>
using namespace std;
int n;
int cifre[9],cnt=0;
int a[101][101];
int main() {
cin>>n;
    while (n>0) {
        cifre[cnt]=n%10;
        cnt++;
        n=n/10;
    }
    for (int i=0;i<cnt;i++) {
        for (int j=0;j<cnt;j++) {
            a[i][j]=cifre[j];
        }
    }
    for (int i=0;i<cnt;i++) {
        for (int j=0;j<cnt;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
