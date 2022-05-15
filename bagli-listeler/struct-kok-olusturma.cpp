#include <iostream>
using namespace std;

struct dugum{
    int sayi;
    dugum *sonraki;
};

int main(int argc, char const *argv[])
{
    dugum *kok = new dugum;
    kok->sayi=10;
    kok->sonraki = new dugum;
    kok->sonraki->sayi=15;
    kok->sonraki->sonraki->sayi = 20;
    return 0;
}
