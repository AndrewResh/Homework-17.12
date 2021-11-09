
class Snack
{
private:
	const char* snackname;
	short snacknumber;
	short snackcost;
	short snackslot1;
	short snackslot2;
	short snackslot3;
public:
	Snack(const char* snackname, short snacknumber, short snackcost);
	void setsnackslot1(short);
	short getsnackslot1();
	void setsnackslot2(short);
	short getsnackslot2();
	void setsnackslot3(short);
	short getsnackslot3();
	const char* getsnackname();
	short getsnacknumber();
	short getsnackcost();
	~Snack();

};
