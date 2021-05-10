#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>

enum class Time_of_day{
RANO,DZIEN,WIECZOR,NOC
}

struct Czas{
using value_type= unsigned int;
value_type godzina;
value_type minuta;
value_type sekunda;

Czas(value_type,value_type,value_type);
auto to_string() const -> std::string;
auto time_of_day() const -> Time_of_day;

void next_hour();
void next_minute();
void next_second();
};
auto Czas::time_of_day()const-> Time_of_day{
if(godzina<3){
return Time_of_day::NOC;
}
if(godzina<6){
return Time_of_day::RANO;
}
if(godzina<18){
return Time_of_day::DZIEN;
}
if(godzina>22){
return Time_of_day::WIECZOR;
}
}
auto to_string(Time_of_day x)-> std::string{
swich(x){
case Time_of_day:NOC: return "NOC";
case Time_of_day:RANO: return "RANO";
case Time_of_day:DZIEN: return "DZIEN";
case Time_of_day:WIECZOR: return "WIECZOR";
}
}

Czas::Czas(value_type g,value_type m,value_type s)
:godzina{g}
,minuta{m}
,sekunda{s}
{}

auto Czas::to_string() const->std::string{
return std::to_string(godzina)+":"+std::to_string(minuta)+":"+std::to_string(sekunda);
}
auto main() -> int{
auto czas = Czas(23:59:59);
std::count << czas.to_string();

void Czas::next_hour(){
godzina++;
if(godzina == 24)
    {godzina=0;}
}
void Czas::next_minute(){
minuta++;
if(minuta == 60)
    {minuta=0;
     next_hour();}
}
void Czas::next_second(){
sekunda++;
if(sekunda == 60)
    {sekunda=0;
     next_minute();}
}
return 0;
}




