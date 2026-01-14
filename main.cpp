/*
 *#include <iostream>
using namespace std;
int m,n,a[101][101];
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            int uc=a[i][j]%10;
            cout<<uc<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int a[101][101];
int main() {
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin>>a[i][j];
        }
    }
    int p=1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if (a[i][j]%2==0) {
                p=p*a[i][j];
            }
        }
    }
    cout<<p;

return 0;
}
*/

/*
#include <iostream>
using namespace std;
int a[101][101];
int main() {
    int m,n,nr=0;
    cin>>n>>m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (a[i][j]<0) {
                nr++;
            }
        }
    }
cout<<nr;

return 0;
}
*/

/*
#include <iostream>
using namespace std;
int a[101][101];
int main() {
    int n,m;
    cin>>n>>m;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            cin>>a[i][j];
        }
    }
    int s=0;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            if (a[i][j]%5==0) {
                s+=a[i][j];
            }
        }
    }
    cout<<s;
return 0;
}
*/

#include <iostream>
using namespace std;
int a[101][101];
int main() {
int n,m;
    cin>>n>>m;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            cin>>a[i][j];
        }
    }
    int nrp=0,nrimp=0;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            if (a[i][j]%2==0) {
                nrp++;
            }
            else {
                nrimp++;
            }
        }
    }
    cout<<nrp<<" "<<nrimp<<endl;
return 0;
}