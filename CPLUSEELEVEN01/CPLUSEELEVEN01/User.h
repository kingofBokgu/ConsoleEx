#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class User{

private:
	int m_index;
	bool m_bDie;

public:
	void SetIndex(int index){m_index = index;}
	int GetIndex(){return m_index;}

	void SetDie(bool die){ m_bDie = die;}
	bool GetDie(){return m_bDie;}
public:
	User(): m_bDie(false){};
	~User(){};
};

