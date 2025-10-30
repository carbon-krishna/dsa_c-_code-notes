// TO CHECK SIZE TAKEN UP BY ANY DATA TYPE USE SIZEOF()
#include <iostream>

using namespace std;
int main(){
    int a = 10;
    char yoyo = 'I';
    float b = 2.5;
    double c = 3.145345678;
    bool yes = 1;
    cout<<sizeof(a)<<" "<<"Bytes"<<endl;
    cout<<sizeof(yoyo)<<" "<<"Bytes"<<endl;
    cout<<sizeof(b)<<" "<<"Bytes"<<endl;
    cout<<sizeof(c)<<" "<<"Bytes"<<endl;
    cout<<sizeof(yes)<<" "<<"Bytes"<<endl;

    return 0;
}