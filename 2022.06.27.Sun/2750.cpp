#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void)
{
    vector<int>v;

    int N,n;
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<N;i++){
        cout << v[i]<<endl;
    }

    return 0;
}