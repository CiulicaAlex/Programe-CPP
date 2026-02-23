#include <iostream>
using namespace std;
long long t,S=0,smen[100002],a[100001],n;
int main() {
    cin>>n;
    for (int i=1;i<=n;i++) {
        cin>>a[i];
    }
    cin>>t;
    for (int i=1;i<=t;i++) {
        int op,x,y,p;
        cin>>op>>x>>y>>p;
        if (op==2) p=-p;
        smen[x]+=p;
        smen[y+1]-=p;
    }
    for (int i=1;i<=n;i++) {
        S+=smen[i];
        a[i]+=S;
    }
    for (int i=1;i<=n;i++) {
        cout<<a[i]<<" ";
    }



    return 0;
}
