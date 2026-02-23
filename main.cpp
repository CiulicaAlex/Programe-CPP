#include <iostream>
using namespace std;
int v[10005]={0};
int main() {
   int n;
    cin>>n;
    int hmin=10005,hmax=0;
    int x,y;
    for (int i=0;i<n;i++) {
        cin>>x>>y;
        if (x<hmin) hmin=x;
        if (y>hmax) hmax=y;
        for (int t=x;t<=y;t++) {
            v[t]++;
        }
    }
    int maxim=0;
    for (int i=hmin;i<=hmax;i++) {
        if (v[i]>maxim) maxim=v[i];
    }
    cout<<maxim;
    return 0;
}
