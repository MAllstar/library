#ifndef  DATABASE_H
#define  DATABASE_H
#include <vector>
#include <string>
#include "CBook.h"
#include "CReader.h"
using namespace std;
class DataBase
{
private:
	vector <CBook> bkarray;  //�洢ͼ����Ϣ
	vector <CReader> rdarray;// �洢������Ϣ
public:
	DataBase();
	~DataBase();
	void addbook(CBook book);    //���ͼ��
	int findbook(string name);  //����ͼ��
	int findbook(int code);  //����ͼ��
	void editbook(int subscript,CBook book);//�༭ͼ��
	void delbook(int subscript);   //  ɾ��ͼ��
	void listbooks();  //��ʾȫ��ͼ��
	void addreader(CReader reader);          //��Ӷ���
	int findreader(string name); //���Ҷ���
	int findreader(int code); //���Ҷ���
	int findreader(CBook book); //���Ҷ���
	void editreader(int subscript,CReader reader); //�༭������Ϣ
	void delreader(int subscript);          //ɾ�����ߣ������������Ҫ��������ɾ��
	void listreaders();           //��ʾ���ж���
};

#endif // DATABASE_H