#include <stdio.h>
#include "head.h"
int main() {
	char n;//���ܱ�� 
	printf("key=%d\n",KEY);
	printf("1.��ʾfile10.dat����\n");
	printf("2.����myfile.txt�ļ�\n");
	printf("3.��ʾmyfile.txt����\n");
	printf("4.��ʾmyfile.txt����(�Ӵ�С)\n");
	printf("5.�˳�\n");
	scanf("%c",&n);//��ȡָ�� 
	
	while(n!='5') {
		if(n<'1'||n>'5')
			printf("��Чָ��,������ѡ��\n");
		else if(n=='1')
			printdat();
		else if(n=='2')
			decode();
		else if(n=='3')
			printftxt();
		else if(n=='4')
			sort();
			
		printf("key=%d\n",KEY);
		printf("1.��ʾfile10.dat����\n");
		printf("2.����myfile.txt�ļ�\n");
		printf("3.��ʾmyfile.txt����\n");
		printf("4.��ʾmyfile.txt����(�Ӵ�С)\n");
		printf("5.�˳�\n");
		scanf("%c",&n);//���˻��з� 
		scanf("%c",&n);
	}
	return 0;
}
