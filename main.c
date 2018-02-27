#include <stdio.h>
#include "head.h"
int main() {
	char n;//功能编号 
	printf("key=%d\n",KEY);
	printf("1.显示file10.dat数据\n");
	printf("2.生成myfile.txt文件\n");
	printf("3.显示myfile.txt数据\n");
	printf("4.显示myfile.txt数据(从大到小)\n");
	printf("5.退出\n");
	scanf("%c",&n);//读取指令 
	
	while(n!='5') {
		if(n<'1'||n>'5')
			printf("无效指令,请重新选择\n");
		else if(n=='1')
			printdat();
		else if(n=='2')
			decode();
		else if(n=='3')
			printftxt();
		else if(n=='4')
			sort();
			
		printf("key=%d\n",KEY);
		printf("1.显示file10.dat数据\n");
		printf("2.生成myfile.txt文件\n");
		printf("3.显示myfile.txt数据\n");
		printf("4.显示myfile.txt数据(从大到小)\n");
		printf("5.退出\n");
		scanf("%c",&n);//过滤换行符 
		scanf("%c",&n);
	}
	return 0;
}
