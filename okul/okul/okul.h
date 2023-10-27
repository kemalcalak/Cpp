#include <iostream>
#include <string>
using namespace std;


class rasyonel {
private:
    int pay;
    int payda;

public:
    rasyonel(int p, int pd) : pay(p), payda(pd) {}

    int getPay() const {
        return pay;
    }

    int getPayda() const {
        return payda;
    }

    rasyonel carp(const rasyonel& other) const {
        int yeni_pay = pay * other.pay;
        int yeni_payda = payda * other.payda;
        return rasyonel(yeni_pay, yeni_payda);
    }
};

class kisi {
private:
    int no;
    string isim;

public:
    kisi() {
        no = 0;
        isim = "";
    }

    kisi(int no, const string& isim) {
        this->no = no;
        this->isim = isim;
    }

    void setno(int no) {
        this->no = no;
    }

    void setisim(const string& isim) {
        this->isim = isim;
    }

    void yaz() {
        cout << "No: " << no << " Isim: " << isim << endl;
    }
};

class sekermakina {
public:
    int mevcutseker() {
        return sekersayi;
    }
    int sekerucret() {
        return ucret;
    }
    void satis() {
        if (sekersayi > 0) {
            cout << "bir seker satildi" << endl;
            sekersayi--;
        }
        else {
            cout << "uzgunuz seker kalmadi" << endl;
        }
    }
    sekermakina(int sekersayi = 50, int sekerucret = 50) {
        this->sekersayi = sekersayi;
        this->ucret = sekerucret;
    }
private:
    int sekersayi;
    int ucret;
};