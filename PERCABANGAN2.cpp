#include <iostream>
using namespace std;
int main()
{
    string lampu;
    cout << "==KAMPUS STMIK==" << endl;
    cout << "masukkan warna lampu anda :"; 
    cin >> lampu;
    if (lampu == "merah")
    {
    cout << "anda harus berhenti " << endl;
}
else if (lampu == "kuning")
{
    cout << "anda harus hati hati " <<endl;
}
else if (lampu == "hijau")
{
    cout << "anda bisa jalan " <<endl;
}
else
{
    cout << "anda bukan berada di trafik light" << endl;
    }
    cout << "terimaksih" << endl;
}   


