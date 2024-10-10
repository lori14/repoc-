#include <iostream>
using namespace std;

int main(){
    int a=5;
    int b=6;
    bool hasil;
    cout<< "and" <<endl;
    hasil =(a==5) && (b==6);
    cout <<"hasil kondisi1 = "<<hasil <<endl;
    hasil =(a==3) && (b==2);
    cout <<"hasil kondisi2 = "<<hasil <<endl;
    hasil =(a==5) && (b==2);
    cout <<"hasil kondisi3 = "<<hasil <<endl;
    hasil =(a==2) && (b==6);
     cout <<"hasil kondisi4 = "<<hasil <<endl;
  
    cout<<"or" <<endl;
    hasil =(a==5) || (b==6);
    cout   <<hasil <<endl;
    hasil =(a==3) || (b==2);
    cout   <<hasil <<endl;
    hasil =(a==5) || (b==2);
    cout   <<hasil <<endl;
    hasil =(a==2) || (b==6);
    cout <<hasil <<endl;

    cout<< "not" <<endl;
    
    hasil = !(a==2);
    
    cout<< hasil <<endl;

    


    

}