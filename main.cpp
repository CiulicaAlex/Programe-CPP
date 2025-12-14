#include<iostream>
using namespace std;
int a[1001],b[1001],c[2001],n,m,k=0;
int main() {
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    cin>>m;
    for (int i=0;i<m;i++) {
        cin>>b[i];
    }
    int i=0;
    int j=0;
    while (i<n&&j<m) {
        if (a[i]<b[j]) {
            c[k++]=a[i++];
        }
        else if (a[i]==b[j]) {
            c[k++]=a[i++];
            j++;
        }else{
            c[k++]=b[j++];
        }
    }
    while (i<n) {
        c[k++]=a[i++];
    }
    while (j<m) {
        c[k++]=b[j++];
    }
    for (int i=0;i<k;i++) {
        cout<<c[i]<<" ";
    }
    return 0;
}