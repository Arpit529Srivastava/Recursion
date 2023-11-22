#include <iostream>
using namespace std;
int cnt=0;
int print(){
    if(cnt==4){
        cout<<"hello"<<endl;
    }
    else{
        cnt++;
        cout<<cnt<<endl;
        return print();
    }
return cnt;
}
int main(){
    int a=print();
    cout<<a<<endl;
}
