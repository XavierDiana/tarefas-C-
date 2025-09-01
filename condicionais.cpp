#include <iostream>
using namespace std;

int main(){
    int n1;
    cout<< "Digite um numero:"<<endl;
    cin >> n1;

    if((n1>=0) && (n1<=10))
    cout<< "esta dentro do intervalo"<<endl;
    
    else 
    cout<<n1 <<" esta fora!!"<<endl;
    return 0;

}