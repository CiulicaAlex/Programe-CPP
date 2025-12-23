#include <iostream>
using namespace std;

int n,a[101][101];

int main() {
   cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if (i!=j){
                cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
}
    return 0;
}
