#include<bits/stdc++.h>
using namespace std;

/*
6
1 1 0 0 1 0

*/


int Solve(vector<int> a, int n)
{
    int zero=0, ans=0;
    for(int i=n-1 ; i>=0 ; i--){
        if(a[i]==1){
            ans += zero;
        }
        else{
            zero++;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    cout << Solve(a, n) << "\n";
}

  

