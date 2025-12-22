#include <iostream>
using namespace std;
int n,nr=0,a[10];
int main(){
  cin>>n;
    int y=n;
    while (y>0) {
        nr++;
        a[nr]=y%10;
        y/=10;
    }
    for (int i=1;i<=nr;i++) {
        for (int j=nr;j>=1;j--) {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}