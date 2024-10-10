#include <iostream>
using namespace std;
int main(){
    char ulangi ='y';
    int counter=0;
    do
    {
        cout<< "Apakah kamu ingin mengulang" <<endl;
        cout<< "jawab(y/t):";
        cin>> ulangi;

        counter++;

    } while (ulangi=='y');
    cout << "<------------------>" <<endl;
    cout << "Perulangan Selesai!!" <<endl;
    cout << "Kamu mengulang sebanyak " << counter << " kali."<<endl;
    
}