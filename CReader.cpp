#include "CReader.h"
#include <iostream>
#include <string>
using namespace std;
CReader::CReader()
{
	Is_Borrowing = false;
	Is_Existing = false;
}

CReader::CReader(int id, string na)
{
	code = id;
	name = na;
	Is_Borrowing = false;
	Is_Existing = false;
}

bool CReader::get_Existing()
{
	return Is_Existing;
}

void CReader::set_Existing(bool is)
{
	Is_Existing = is;
}

bool CReader::get_Borrowing()
{
	return Is_Borrowing;
}

void CReader::set_Borrowing(bool is)
{
	Is_Borrowing = is;
}

void CReader::setbrbook(CBook bt)
{
	brbook = bt;
}

CBook CReader::getbrbook()
{
	return brbook;
}

void CReader::show()
{
	CUser::show();
	cout << "���ͼ��������" << brbook.getname() <<"ͼ������"<<brbook.getcode()<< endl;
//	cout << Is_Existing << endl;
}
