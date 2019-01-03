#include <iostream>

using namespace std;

int main()
{
    float Upah,jam,gaji;
    cout<<"------Upah Pegawai-------\n \n";
    cout<<"Masukkan Upah per jam    = ";
    cin>>Upah;
    cout<<"\n";
    cout<<"Masukkan jumlah jam      = ";
    cin>>jam;
    cout<<"\n";
    gaji=Upah*jam;
    cout<<"Upah Yang harus dibayarkan = ";
    cout<<(Upah*jam);
    cout<<"\n";
    return 0;
}
