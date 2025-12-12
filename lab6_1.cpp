#include<iostream>
using namespace std;

int main(){
    int interger;
    int even = 0;
    int odd = 0;
    while (true){
        cout << "Enter an integer: ";
        cin >> interger;
        if (interger == 0){
            break;
        }
        if (interger %2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    cout << endl;
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}
