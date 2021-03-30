#include "std_lib_facilities.h"

int min_ev = 0;
int max_ev = 140;

void ev_ellenorzese(int age)
{
    if (age < min_ev || age >= 150) error("Nem elfogadható az életkor!");
}

void nev_ellenorzese(string name)
{
    for (int i = 0; i < name.length(); ++i)
    {
        if(!isalpha(name[i])) error("Nem elfogadható a név!");//tartalmaz ékezetes betűt 
    }
}










int main()
try{
struct Person
{
private:
    string ker_nev;
    string vez_nev;
    int ev;

public:
	Person(string kn = "Goofy", string vn = "Mickey", int eves = 63) : ker_nev(kn), vez_nev(vn), ev(eves) 
    {
        ev_ellenorzese(ev);
        nev_ellenorzese(ker_nev);
        nev_ellenorzese(vez_nev);
    }






























































/*
	string  tej ="almafaáááá";
	cout << tej<< endl;

	for (int i = 0; i < tej.length(); ++i)
    {
        if(isalpha(tej[i])) error("Nem elfogadható a név!"); 
*/

//}





    

	return 0;
} catch (exception& e){
    cerr << e.what() << endl;
    return 2;
} catch (...){
    cerr << "Something went wrong!" << endl;
    return 3;
}