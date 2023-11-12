#include "okul.h"


int main() {
    /*
    rasyonel sayi1(3, 5), sayi2(7, 8);
    rasyonel sonuc = sayi1.carp(sayi2);
    cout << sayi1.getPay() << "/" << sayi1.getPayda();
    cout << "*" << sayi2.getPay() << "/" << sayi2.getPayda() << endl;
    cout << "=" << sonuc.getPay() << "/" << sonuc.getPayda() << endl;
    */
    /*
    int no;
    string isim;
    kisi bir;
    kisi iki(250, "serhat");
    cout << "no gir" << endl;
    cin >> no;
    cout << "isim gir" << endl;
    cin >> isim;
    bir.setno(no);
    bir.setisim(isim);
    bir.yaz();
    iki.yaz();
    */
    /*
    sekermakina makinam;
    cout << "toplam seker sayisi: " << makinam.mevcutseker() << endl;
    cout << "bir seker ucreti: " << makinam.sekerucret() << " TL" << endl;
    makinam.satis(); 
    cout << "seker sayisi: " << makinam.mevcutseker() << endl;
    */
    /*
    Dizi d(5);
    d.oku();
    d.goster();
    cout << "-------------------------" << endl;
    d.sirala();
    d.goster();
    cout << "-------------------------" << endl;
    d.degistir(3, 42);
    d.goster();
    */

    proje yapayzeka("tanima sistemi");
    tasarimek bir("ahmet",100);
    yazilimek iki("nihal",200);
    yazilimek uc("derya", 300);
    testek dort("veli", 400);
    testek bes("canan", 500);
    yapayzeka.ekle(&bir);
    yapayzeka.ekle(&iki);
    yapayzeka.ekle(&uc);
    yapayzeka.ekle(&dort);
    yapayzeka.ekle(&bes);

}

