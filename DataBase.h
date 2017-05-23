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
	CBook getbook(int subscript);
	CReader getreader(int subscript);
	void editbook(int subscript,CBook book);//�༭ͼ��
	void editbook(int subscript, int code);//�༭ͼ��
	void editbook(int subscript, string name);//�༭ͼ��
	void editbook(int subscript, bool Is_Stock);//�༭ͼ��
	void delbook(int subscript);   //  ɾ��ͼ��
	void listbooks();  //��ʾȫ��ͼ��
	void addreader(CReader reader);          //��Ӷ���
	int findreader(string name); //���Ҷ���
	int findreader(int code); //���Ҷ���
	int findreader(CBook book); //���Ҷ���
	void editreader(int subscript, CReader reader); //�༭������Ϣ
	void editreader(int subscript, string name); //�༭������Ϣ
	void editreader(int subscript, int code); //�༭������Ϣ
	void editreader(int subscript, CBook book); //�༭������Ϣ
	void editreader(int subscript, bool Is_Borrowing); //�༭������Ϣ
	void delreader(int subscript);          //ɾ�����ߣ������������Ҫ��������ɾ��
	void listreaders();           //��ʾ���ж���
	void save(string filename="data.db");
	void load(string filename = "data.db");
};

#endif // DATABASE_H