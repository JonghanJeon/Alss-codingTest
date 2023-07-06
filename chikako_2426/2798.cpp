#include <iostream>

using namespace std;

int n, m;
int card[100];
int cha, sum = 0;
int res = m;
int pick[100] = {0, };
int picked[3] = {0, };

void dfs(int d){
    if(d == 3){
        for(int i = 0; i < 3; i++){
            sum += picked[i];
        }
        cha = m - sum;
        if(cha >= 0 && m - res > cha){
            res = sum;
        }
        sum = 0;
        return;
    }

    for(int i = 0; i < n; i++){
        if(!pick[i]){
            pick[i] = 1;
            picked[d] = card[i];
            dfs(d + 1);
            pick[i] = 0;
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> card[i];
    }
    dfs(0);

    cout << res;

    return 0;
}
