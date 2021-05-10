#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


struct dane{
string imie="Julia";
string nazwisko="Migiel";
string nrIndeks=18554;
string semestr="czwarty";
string średnia=3,24;

auto toString() const => void;

};

 

auto dane::toString() const => void
{
std::string= imie,nazwisko,nrIindeks,semestr,średnia; 
}