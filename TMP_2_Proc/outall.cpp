// ����� ����������� ���������� � ��������� �����
#include "outall.h"
void Out(List &c, std::ofstream &ofst) {
	ofst << "Container contains " << c.data
		<< " elements." << std::endl;
	node* nod = c.head;
	key k;
	//transport* b = new transport;

	while (0 < c.data)
	{
		outtransport(nod->data, ofst);
		nod = nod->next;
		c.data--;
	}
}