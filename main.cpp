#include <iostream>
using namespace std;
int a,b,maxx=0;
int main() {
cin>>a>>b;
    for (int i=a;i<=b;i++) {
        int P=1;
        for (int d=1;d<=i;d++) {
            if (i%d==0 && d%2==1) {
                P=P*d;
            }
        }
        if (P>i) {
            maxx=i;
        }

    }
cout<<maxx;
    return 0;
}