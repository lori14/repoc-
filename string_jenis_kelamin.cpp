#include <iostream>
using namespace std;
int main(){
    char jenis_kelamin;
    cout<<"jenis kelamin" <<endl;
    cout<<"P, laki-laki"<<endl;
    cout<<"L, perempuan"<<endl;
    cout<<"masukkan kode jenis kelamin(P,L)" <<endl;
    cin>>jenis_kelamin;

    switch (jenis_kelamin){
        case 'P':
        cout<<"laki-laki)"<<endl;
        break;
        case 'L':
        cout<<"perempuan"<<endl;
        break;
        default:
        cout<<"apakah kamu manusia";
        break;
    }
    }
