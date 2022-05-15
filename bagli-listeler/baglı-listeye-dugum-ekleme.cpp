#include<iostream>
using namespace std;

struct dugum{
    int ID;
    dugum *sonraki;
};

dugum *ekle(dugum *kok, dugum *adres, int veri){
    if(adres==NULL){
        kok->ID=veri;
        kok->sonraki = NULL;
        cout<<veri<<" eklendi."<<endl;
        return kok;
    }
    else if(adres->sonraki==NULL){
        dugum *yeni = new dugum;
        adres->sonraki = yeni;
        yeni->ID = veri;
        yeni->sonraki = NULL;
        cout<<veri<<" eklendi."<<endl;
        return adres->sonraki;
    }
    else{
        dugum *yeni = new dugum;
        yeni->sonraki = adres->sonraki;
        adres->sonraki = yeni;
        yeni->ID = veri;
        cout<<veri<<" eklendi."<<endl;
        return adres->sonraki;
    }
}

int main(int argc, char const *argv[])
{
    // Yeni bağlı liste oluştur
  dugum *kok = new dugum;
  kok->sonraki = NULL;
  
  // Gosterici oluştur
  dugum *gosterici = NULL;
  
  // Örnek birkaç düğüm ekle
  gosterici = ekle(kok, gosterici, 10);
  gosterici = ekle(kok, gosterici, 20);
  gosterici = ekle(kok, gosterici, 30);
  gosterici = ekle(kok, gosterici, 40);
    return 0;
}
