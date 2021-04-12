/*
    g++ dh15_2.cpp -o dh15_2 -w -Wall
*/
#include "std_lib_facilities.h"

const int min_ev = 0;
const int max_ev = 130;

void ev_ellenorzese(int age)
{
    if (age < min_ev || age >= max_ev) error("Nem elfogadható az év kérjük ne legyen kissebb mint 0 és nagyobb mint 130!");
}

void nev_ellenorzese(string name)
{
    for (int i = 0; i < name.length(); ++i)
    {
        if(!isalpha(name[i])) error("Nem elfogadható a név mivel nem csak az abc elemit használja vagy kerülje a hosszú ékezetet!"); 
    }
}

struct Person
{
private:
    string ker_nev;
    string vez_nev;
    int ev;

public:
    Person(string kn = "Goofy", string vn = "Mickey", int kor = 63) : ker_nev(kn), vez_nev(vn), ev(kor) 
    {
        ev_ellenorzese(ev);
        nev_ellenorzese(ker_nev);
        nev_ellenorzese(vez_nev);
    }

    int get_ev() const { return ev; }

    string fullnev() const { return ker_nev + " " + vez_nev; }

    void set_ker_nev(string ker_n) { ker_nev = ker_n; }
    void set_vez_nev(string vez_n) { vez_nev = vez_n; }
    void set_ev(int n ) { ev = n; }
};
    
ostream& operator<<(ostream& os, const Person& p)
{
    return os << p.fullnev() << " " << p.get_ev() << endl;
}

istream& operator>>(istream& is, Person& p)
{
    string szoveg1, szoveg2;
    int szam;

    is >> szoveg1;
    p.set_ker_nev(szoveg1);
    for (int i = 0; i < szoveg1.size(); ++i) if (!isalpha(szoveg1[i])) error("rossz keresztnev!");
    is >> szoveg2;
    p.set_vez_nev(szoveg2);
    for (int i = 0; i < szoveg2.size(); ++i) if (!isalpha(szoveg2[i])) error("rossz vezeteknev!");
    is >> szam;
    p.set_ev(szam);
    if (szam <= min_ev || szam > max_ev) error("Nem elfogadható az év!");
    
}

int main()
try{
    
    vector<Person> emberek;

    cout << "Kérem írja be a neveket egy '|' jellel befejezőleg a legvégén" << endl;
    for (int i = 0; i < 2; ++i)
    {
        Person var;
        cin >> var;
        emberek.push_back(var);
    }
    for (Person& ppl : emberek) cout << ppl;

    return 0;
} catch (exception& e){
    cerr << e.what() << endl;
    return 2;
} catch (...){
    cerr << "Eine problema!" << endl;
    return 3;
}