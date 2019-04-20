#include <iostream>
using namespace ::std;
int angka(int nilai, int bagi)
{        int sisa;
          while (bagi > 0) {
          sisa = nilai% bagi;
          nilai = bagi;
          bagi = sisa;           }
    return (nilai);                   }
int main(int pembagi, char** x)
{        int a,b;
          cout<<"Masukkan nilai : ";
          cin>>a;
          cout<<"Masukkan nilai bagi : ";
          cin>>b;
          cout<<"Modulus : "<<angka(a,b)<<endl;
          return 0;      }
