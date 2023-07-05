#include <iostream>

using namespace std;

int n;
int a[100000][2];
int maxx = -10001;
int maxy = -10001;
int minx = 10001;
int miny = 10001;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
    }

    if(n < 2) {
        cout << 0; 
        return 0;
    }

    for(int i = 0; i < n; i++){
        if(a[i][0] > maxx) maxx = a[i][0];
        if(a[i][1] > maxy) maxy = a[i][1];
        if(a[i][0] < minx) minx = a[i][0];
        if(a[i][1] < miny) miny = a[i][1];        
    }

    cout << (abs(maxx - minx) * abs(maxy - miny));

    return 0;
}
