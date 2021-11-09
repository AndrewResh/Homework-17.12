#include "Vending.h"
#include <iostream>

using namespace std;

Snack::Snack(const char* title, short number, short cost)
{
	snackname=title;
	snacknumber=number;
	snackcost=cost;
}
Snack::~Snack()
{

}

const char* Snack::getsnackname()
{
	return snackname;
}
short Snack::getsnacknumber()
{
	return snacknumber;
}
short Snack::getsnackcost()
{
	return snackcost;
}
void Snack::setsnackslot1(short slot1)
{
	snackslot1=slot1;
}
short Snack::getsnackslot1()
{
	return snackslot1;
}
void Snack::setsnackslot2(short slot2)
{
	snackslot2=slot2;
}
short Snack::getsnackslot2()
{
	return snackslot2;
}
void Snack::setsnackslot3(short slot3)
{
	snackslot3=slot3;
}
short Snack::getsnackslot3()
{
	return snackslot3;
}


