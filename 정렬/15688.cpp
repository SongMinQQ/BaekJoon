#include <bits/stdc++.h>
using namespace std;

int num, n;
vector<int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for(int i : v) cout << i << '\n';
    return 0;
}