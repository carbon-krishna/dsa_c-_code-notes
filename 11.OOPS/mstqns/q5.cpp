#include <iostream>
using namespace std;
class TeamB;
class TeamA
{
private:
        int arr[5];
public:
        void setScores(){
            for(int i=0;i<5;i++){
                cin>>arr[i];
            }
        }
        void showScores(){
            for(int i=0;i<5;i++){
                cout<<arr[i];
            }
        }
        friend void SwapScores(TeamA &t1,TeamB &t2);
};
class TeamB
{
private:
        int brr[5];
public:
        void setScores(){
            for(int i=0;i<5;i++){
                cin>>brr[i];
                cout<<endl;
            }
        }
        void showScores(){
            for(int i=0;i<5;i++){
                cout<<brr[i];
                cout<<endl;
            }
        }
        friend void SwapScores(TeamA &t1,TeamB &t2);
};
void SwapScores(TeamA &t1,TeamB &t2){
    int temp[5];
    for(int i=0;i<5;i++){
        temp[i] = t1.arr[i];
        t1.arr[i] = t2.brr[i];
        t2.brr[i] = temp[i];
    }
}
int main(){
    TeamA t1;
    TeamB t2;
    t1.setScores();
    cout<<endl;
    t1.showScores();
    cout<<endl;
    t2.setScores();
    cout<<endl;
    t2.showScores();
    cout<<endl;
    SwapScores(t1,t2);
    cout<<endl;
    t1.showScores();
    cout<<endl;
    t2.showScores();
    cout<<endl;
    return 0;
}