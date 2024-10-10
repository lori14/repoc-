#include <iostream>
using namespace std;
int main()
{
    char ulangi =+ 'y';
    int counter = 0;

    while (ulangi == 'y')
    {
        cout << "Apakah kamu mau mengulang?" <<endl;
        cout << "jawab (y/t)";
        cin >> ulangi;

        counter++;
              
        }
        
cout << "<------------------>" <<endl;
cout << "Perulangan Selesai!!" <<endl;
cout << "Kamu mengulang sebanyak " << counter << " kali."<<endl;
}