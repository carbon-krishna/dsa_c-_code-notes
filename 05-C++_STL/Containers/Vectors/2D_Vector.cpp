#include <iostream>
#include <vector>
using namespace std;
int main(){
    // 2d array/vector
    vector<vector<int>>arr(5,vector<int>(4,0));
    int totalRows = arr.size();
    int totalColumns = arr[0].size();
    // 2D array created with 5 rows & 4 columns 
    // with intial value of each cell as "0"

    vector<vector<int>> jarr(4);
    jarr[0] = vector<int>(4);
    jarr[1] = vector<int>(2);
    jarr[2] = vector<int>(5);
    jarr[3] = vector<int>(3);

    int totalRowcount = jarr.size();
    return 0;
}