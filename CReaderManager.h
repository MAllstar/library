#ifndef CREADERMANAGER_H
#define CREADERMANAGER_H
#include <vector>
#include <string>
#include "CReader.h"
using namespace std;
class CReaderManager
{
private:
	vector <CReader> rdarray;// �洢������Ϣ
public:
	CReaderManager();
	~CReaderManager();
	CReader getreader(int subscript);
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
	void save(string filename = "readers.db"); // ���浽�ļ�
	void load(string filename = "readers.db"); // ���ļ���ȡ
};

#endif //CREADERMANAGER_H