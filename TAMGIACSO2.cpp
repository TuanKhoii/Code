#include <bits/stdc++.h>
using namespace std;

int a[100][100]={0};
int b[100]={0};
int c[100][100]={0};
int n;
int dx[]={1,1};
int dy[]={0,1};
int h=1;
int s=0,smax=0;
int tamGiacSo(int x,int y,int k,int th=1){
    if(x==n-1){
        if(th==1){
        if(s>smax){
            smax=s;
            /*for(int i=0;i<n;i++){
                c[h][i]=b[i];
            }
            h++;*/
        }
        }
        if(th==2){
            //cout<<s<<endl;
            if(s==smax){
            for(int i=0;i<n;i++){
                c[h][i]=b[i];
            }
            h++;
            }
        }
    }
    else{
        //cout<<-1<<endl;
        for(int i=0;i<2;i++){
            int xmoi=x+dx[i];
            int ymoi=y+dy[i];
            b[k]=a[xmoi][ymoi];
            if(x<n&&y<n){
                s+=a[xmoi][ymoi];
                tamGiacSo(xmoi,ymoi,k+1,th);
                s-=a[xmoi][ymoi];
            }
        }
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cin>>a[i][j];
        }
    }
    
    /*for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }*/
    
    s+=a[0][0];
    b[0]=a[0][0];
    tamGiacSo(0,0,1);
    cout<<smax<<endl;
    h=1;
    tamGiacSo(0,0,1,2);
    //cout<<h<<endl;
    for(int i=1;i<h;i++){
        for(int j=0;j<n;j++)
        cout<<c[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}
