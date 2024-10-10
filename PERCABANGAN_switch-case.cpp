#include <iostream>
using namespace std;
int main(){
    int code;
    cout<<"kode lampu lalu lintas" <<endl;
    cout<<"3, merah"<<endl;
    cout<<"5, kuning"<<endl;
    cout<<"7, hijau"<<endl;
    cout<<"masukkkan kode lampu lalu lintas(3,5,7)" <<endl;
    cin>>code;

    switch (code){
        case 3:
        cout<<"lampu Merah (berhenti)" <<endl;
        break;
        case 5:
        cout<<"lampu kuning (hati hati!!)"<<endl;
        break;
        case 7:
        cout<<"lampu hijau (jalan)"<<endl;
        break;
        default:
        cout<<"kode tidak valid";
        break;
    }
    }
