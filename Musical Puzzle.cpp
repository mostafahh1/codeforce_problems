#include <iostream>
#include <unordered_set>
#include <queue>
using namespace std;

int main(){

    short n_test_cases, melody_length;
    char melody_char;
    cin >> n_test_cases;
    queue <short> result;


    while (n_test_cases--){
        cin >> melody_length;

        unordered_set <string> melodies_two_notes;
        char temp;
        for (int i = 0; i < melody_length; i++){
            cin >> melody_char;

            if (i == 0){
                temp = melody_char;
                continue;
            }


            melodies_two_notes.insert(string(1, temp) + melody_char);
            temp = melody_char;
        }

        result.push(melodies_two_notes.size());
    }

    while (!result.empty()){
        cout << result.front() << endl;
        result.pop();
    }


    return 0;
}