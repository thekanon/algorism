#include <iostream>
using namespace std;
int n = 7;
// int arr[7][7] = {
//     {2, 5, 1, 6, 1, 4, 1},
//     {6, 1, 1, 2, 2, 9, 3},
//     {7, 2, 3, 2, 1, 3, 1},
//     {1, 1, 3, 1, 7, 1, 2},
//     {4, 1, 2, 3, 4, 1, 3},
//     {3, 3, 1, 2, 3, 4, 1},
//     {1, 5, 2, 9, 4, 7, 0}
// };
int arr[7][7] = {
    {2, 5, 1, 6, 1, 4, 1},
    {6, 1, 1, 2, 2, 9, 3},
    {7, 2, 3, 2, 1, 3, 1},
    {1, 1, 3, 1, 7, 1, 2},
    {4, 1, 2, 3, 4, 1, 2},
    {3, 3, 1, 2, 3, 4, 1},
    {1, 5, 2, 9, 4, 7, 0}
};
bool jump(int y,int x) {
    printf("%d %d %d\n",arr[y][x],y,x);
    int start = arr[y][x];

    if(x >= n || y >= n){
        return false;
    }
    if(x ==n-1 && y==n-1){
        return true;
    }

    return jump(y+start,x) || jump(y,x+start);
}
int main(){    
    // printf("%d",arr[0][0]);
    bool a = false;
    printf(jump(0,0) ? "true":"false");
}
