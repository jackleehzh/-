#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a > b){
        a = a^b;
        b = a^b;
        a = a^b;
    }

    if(b > c)
        cout<<b<<endl;
    else
        cout<<c<<endl;
    return 0;
}
