#include <iostream>
using namespace std;
int n,a[101][101];
int main() {
    cin>>n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            cin>>a[i][j];
        }
    }
    int S1=0,S2=0,S3=0,S4=0;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            if (j>i && i+j<n+1) {
                S1=S1+a[i][j];
            }
            else if (j>i && i+j>n+1) {
                S2=S2+a[i][j];
            }
            else if (i>j && i+j>n+1) {
                S3=S3+a[i][j];
            }
            else if (i>j && i+j<n+1) {
                S4=S4+a[i][j];
            }
        }
    }
    if (S1>S2) swap(S1,S2);
    if (S1>S3) swap(S1,S3);
    if (S1>S4) swap(S1,S4);
    if (S2>S3) swap(S2,S3);
    if (S2>S4) swap(S2,S4);
    if (S3>S4) swap(S3,S4);
    cout<<S1<<" "<<S2<<" "<<S3<<" "<<S4;



    return 0;
}