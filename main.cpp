    #include<iostream>
#include<windows.h>
    using namespace std;
    int a[1001],b[1001],c[2001],n,m,k=0;
    int main() {
        HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
        cin>>n;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        cin>>m;
        for(int j=0;j<m;j++) {
            cin>>b[j];
        }

        for (int i=0;i<n;i++) {
            c[k++]=a[i];
        }
        for (int j=0;j<m;j++) {
            c[k++]=b[j];
        }

        for (int i=0;i<k-1;i++) {
            for (int j=i+1;j<k;j++) {
                if(c[i]>c[j]) {
                    int aux=c[i];
                    c[i]=c[j];
                    c[j]=aux;
                }
            }
        }
        SetConsoleTextAttribute(hConsole,FOREGROUND_RED |  BACKGROUND_GREEN);


        for (int i=0;i<k;i++) {
            cout<<c[i]<<" ";
        }

        return 0;
    }
