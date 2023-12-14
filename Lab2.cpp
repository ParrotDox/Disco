#include <iostream>
using namespace std;

int main()
{
int N,p,starlim;
do{
    cin>>N;
}
while(N<3 or N%2==0);

p=(N+1)/2-1;
starlim=1;

while(starlim<=N){
    for(int i=1; i<=p;++i){
        cout<<" ";
    }
    for(int z=1;z<=starlim;++z){
        cout<<"*";
    }
    cout<<endl;
    starlim+=2;
    p-=1;
}

}