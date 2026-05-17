#include <iostream>
using namespace std;

int main(){

    short n_contests, best, worst, current, result = 0;

    cin >> n_contests;

    for(int i = 0; i < n_contests; i++){
        cin >> current;

        if (i == 0){
            best = current;
            worst = current;
            continue;
        }

        if(best < current){
            result++;
            best = current;
        }
        else if(worst > current){
            result++;
            worst = current;
        }
    }

    cout << result;

    return 0;
}