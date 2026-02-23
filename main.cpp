#include <iostream>
using namespace std;
int fr[200001]={0};
int main() {
    int x;
    while (cin>>x) {
        fr[x]++;
    }
    int cnt=0;
    for (int i=0;i<200000;i++) {
        if (fr[i]==1) {
            cnt++;
        }
    }
    cout<<cnt;


    return 0;
}
