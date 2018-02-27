#include <stdio.h>
#include "head.h"
void printdat() {
	FILE *fp1;
	int data[DATANUMBER],i;
	fp1=fopen("file10.dat","rb");
	
	if(fp1==NULL)
		printf("���ݶ�ȡʧ��\n");
	else {
		fread(data,sizeof(int),DATANUMBER,fp1);//��ȡ���ݴ���������data�� 
		for(i=0; i<DATANUMBER; i++)
			printf("%d ",data[i]);
		printf("\n");
	}
	
	fclose(fp1);
}//��ʾfile10.dat���� 
void printftxt() {
	FILE *fp2;
	int d,i;
	fp2=fopen("myfile.txt","r");
	
	if(fp2==NULL)
		printf("���ݶ�ȡʧ��\n");
	else {
		for(i=0; i<DATANUMBER; i++) {
			fscanf(fp2,"%d",&d);//���ζ�ȡ���ݴ����ڱ���d�� 
			printf("%d ",d);
		}
		printf("\n");
	}
	
	fclose(fp2);
}//��ʾmyfile.txt���� 
void decode() {
	FILE *fp1,*fp2;
	int data[DATANUMBER],ddata[DATANUMBER],i;
	fp1=fopen("file10.dat","rb");
	fp2=fopen("myfile.txt","w");
	
	if(fp1==NULL)
		printf("���ݶ�ȡʧ��\n");
	else if(fp2==NULL)
		printf("�޷����ɽ����ļ�\n");
		
	else {
		fread(data,sizeof(int),DATANUMBER,fp1);
		for(i=0; i<DATANUMBER; i++) {
			ddata[i]=data[i]^KEY;//��������Կ��������õ����� 
			fprintf(fp2,"%d ",ddata[i]);//������д��myfile.txt�� 
		}
	}
	
	fclose(fp1);
	fclose(fp2);
}//���� 
void swap(int *a,int *b) {
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}//��������Ԫ�� 
void sort() {
	FILE *fp2;
	int d[DATANUMBER],i,j;
	fp2=fopen("myfile.txt","r");
	
	if(fp2==NULL)
		printf("���ݶ�ȡʧ��\n");
	else {
		for(i=0; i<DATANUMBER; i++)
			fscanf(fp2,"%d",&d[i]);
			
		for(i=0; i<DATANUMBER-1; i++)
			for(j=i; j<DATANUMBER-1; j++) {
				if(d[j]<d[j+1])
					swap(&d[j],&d[j+1]);
			}//ð���㷨 
			
		for(i=0; i<DATANUMBER; i++)
			printf("%d ",d[i]);
		printf("\n");
	}
	
	fclose(fp2);
}//�Ӵ�С���� 
