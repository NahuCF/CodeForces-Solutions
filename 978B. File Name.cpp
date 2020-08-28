#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, contador1 = 0, contador2 = 0;
    string b;
    cin >> a >> b;

    for(int i = 0; i <= a; i++){
        if(b[i] == 'x'){
            contador2++;
        }
        else{
            if(contador2 >= 3){
                contador1 += contador2 - 2;
            }
            contador2 = 0;
        }
    }
    if(contador2 == a){
        contador1 = a - 2;
    }
    cout << contador1 << endl;
}
