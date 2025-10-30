#include <iostream>
using namespace std;
float Average(float num1,float num2,float num3){
    float avg=(num1+num2+num3)/3;
    return avg;
}
int main(){
    float n1,n2,n3;
    cin>>n1 ;
    cin>>n2 ;
    cin>>n3 ;
    float result = Average(n1,n2,n3);
    cout<<"THE AVERAGE IS : "<<result;
    return 0;
}