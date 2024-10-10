#include <iostream>
using namespace std;
int main(){
    int jenis_kelamin;
    cout<<"jenis kelamin" <<endl;
    cout<<"1, laki-laki"<<endl;
    cout<<"2, perempuan"<<endl;
    cout<<"masukkan kode jenis kelamin(P,L)" <<endl;
    cin>>jenis_kelamin;

    switch (jenis_kelamin){
        case 1:
        cout<<"laki-laki)"<<endl;
        break;
        case 2:
        cout<<"perempuan"<<endl;
        break;
        default:
        cout<<"apakah kamu manusia";
        break;
    }
    }
