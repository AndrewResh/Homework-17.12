#include <iostream>
#include "Vending.h"

using namespace std;

int main () 
{
 
 Snack* snikers=new Snack("Snikers",1, 100);
 Snack* mars=new Snack("Mars",2, 80);
 Snack* bounty=new Snack("Bounty ",3, 90);
 Snack* noname=new Snack("Noname",0, 0);
 cout<< "Hello! Check out the range of the device: "<<endl;
 cout<<"Title "<<snikers->getsnackname()<<"\t\t\t";cout<<"Title "<<mars->getsnackname()<<"\t\t\t";cout<<"Title "<<bounty->getsnackname()<<endl;
 cout<<"Cell number "<<snikers->getsnacknumber()<<"\t\t\t";cout<<"Cell number "<<mars->getsnacknumber()<<"\t\t\t";cout<<"Cell number "<<bounty->getsnacknumber()<<endl;
 cout<<"Price "<<snikers->getsnackcost()<<"\t\t\t";cout<<"Price "<<mars->getsnackcost()<<"\t\t\t";cout<<"Price "<<bounty->getsnackcost()<<endl;

 noname->setsnackslot1(10);
 noname->setsnackslot2(10);
 noname->setsnackslot3(10);
 
 cout<<"Balance Snikers "<<noname->getsnackslot1()<< " piece"<<"\t";cout<<"Balance Mars "<<noname->getsnackslot2()<< " piece"<<"\t\t";cout<<"Balance Bounty "<<noname->getsnackslot3()<< " piece"<<endl;
 
 
 delete snikers;
 delete mars;
 delete bounty;
 

 return 0; 
}
