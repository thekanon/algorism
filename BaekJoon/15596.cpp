#include <vector>
#include <iostream>
using namespace std;
long long sum(vector<int> &a) {
	long long ans = 0;
    for(vector<int>::iterator iter = a.begin(); iter < a.end(); iter++)
        ans += *iter;
	return ans;
}
int main(){
    vector<int> v = {1,2,3};

    printf("%d",sum(v));
    return 0;
}