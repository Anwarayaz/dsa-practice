#include <iostream>
using namespace std;
void fun(int n){
    if (n>0){
        fun(n-1);
        cout<<n<<'\n';
    }
}

int main(){
    int n =3;
    fun(n);



    return 0;
}