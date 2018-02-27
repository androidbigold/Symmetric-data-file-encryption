#include <stdio.h>
#include "head.h"
void printdat() {
	FILE *fp1;
	int data[DATANUMBER],i;
	fp1=fopen("file10.dat","rb");
	
	if(fp1==NULL)
		printf("数据读取失败\n");
	else {
		fread(data,sizeof(int),DATANUMBER,fp1);//读取数据储存在数组data中 
		for(i=0; i<DATANUMBER; i++)
			printf("%d ",data[i]);
		printf("\n");
	}
	
	fclose(fp1);
}//显示file10.dat数据 
void printftxt() {
	FILE *fp2;
	int d,i;
	fp2=fopen("myfile.txt","r");
	
	if(fp2==NULL)
		printf("数据读取失败\n");
	else {
		for(i=0; i<DATANUMBER; i++) {
			fscanf(fp2,"%d",&d);//依次读取数据储存在变量d中 
			printf("%d ",d);
		}
		printf("\n");
	}
	
	fclose(fp2);
}//显示myfile.txt数据 
void decode() {
	FILE *fp1,*fp2;
	int data[DATANUMBER],ddata[DATANUMBER],i;
	fp1=fopen("file10.dat","rb");
	fp2=fopen("myfile.txt","w");
	
	if(fp1==NULL)
		printf("数据读取失败\n");
	else if(fp2==NULL)
		printf("无法生成解密文件\n");
		
	else {
		fread(data,sizeof(int),DATANUMBER,fp1);
		for(i=0; i<DATANUMBER; i++) {
			ddata[i]=data[i]^KEY;//密文与密钥做或运算得到明文 
			fprintf(fp2,"%d ",ddata[i]);//将明文写入myfile.txt中 
		}
	}
	
	fclose(fp1);
	fclose(fp2);
}//解密 
void swap(int *a,int *b) {
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}//交换数组元素 
void sort() {
	FILE *fp2;
	int d[DATANUMBER],i,j;
	fp2=fopen("myfile.txt","r");
	
	if(fp2==NULL)
		printf("数据读取失败\n");
	else {
		for(i=0; i<DATANUMBER; i++)
			fscanf(fp2,"%d",&d[i]);
			
		for(i=0; i<DATANUMBER-1; i++)
			for(j=i; j<DATANUMBER-1; j++) {
				if(d[j]<d[j+1])
					swap(&d[j],&d[j+1]);
			}//冒泡算法 
			
		for(i=0; i<DATANUMBER; i++)
			printf("%d ",d[i]);
		printf("\n");
	}
	
	fclose(fp2);
}//从大到小排序 
