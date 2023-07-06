#include <iostream>

using namespace std;

int n;
int res = 1000111;

int main()
{
    int sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int j = i;
        int t = 10;
        int jrs = 1;
        // 자리수 구하기
        while(j / t){
            jrs++;
            t *= 10;
        }
        // 각 자리수 만큼 반복하며 각 자리수 더하기
        for(int k = 0; k < jrs; k++){
            sum += j % 10;
            j /= 10;
        }
        if(n == sum + i) {
            cout << i; 
            return 0;
        }
        sum = 0;
    }
    cout << 0;
    return 0;
}

// 생성자, 분해합
// M 의 분해합 = M + 각 자리수 => N 이면 M 은 N의 생성자
// 각 자리수 더하는게 핵심
// 어떻게 하면 각 자리수를 쉽게 구할까
// 1. string으로 받는다 => 할만 함
// 2. 100만을 if문으로 나누어 생각해본다. =>  귀찮지만 할만 함
// 198 => %활용
