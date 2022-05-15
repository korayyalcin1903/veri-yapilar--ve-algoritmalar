#include <iostream>
using namespace std;

struct dugum
{
    int okulNo;
    char harf;
};



int main(int argc, char const *argv[])
{
    dugum ogrenci;
    ogrenci.okulNo=10;
    ogrenci.harf='a';
    cout<<ogrenci.okulNo<<"\t"<<ogrenci.harf;
    return 0;
}
