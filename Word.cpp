#include <iostream>
using namespace std;

int main(){
    string word;
    short n_lower = 0 , n_greater = 0;

    cin >> word;

    for (char Char : word){
        if ((Char > 64) && (Char < 91))
            n_greater++;
        else
            n_lower++;
    }


    if (n_greater > n_lower){
        for (char Char : word){
            if ((Char > 96) && (Char < 123)){
                Char = Char - 32;
            }
            cout << Char;
        }

    }else{
        for (char Char : word){
            if ((Char > 64) && (Char < 91)){
                Char = Char + 32;
            }
            cout << Char;
        }
    }

    
    return 0;
}