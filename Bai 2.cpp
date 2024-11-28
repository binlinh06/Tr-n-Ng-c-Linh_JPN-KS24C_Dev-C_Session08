#include<stdio.h>
int main(){
	int array[5]={12,4,5,7,8};
	int n,found;
	do{
		printf("Vui long nhap so bat ki:");
	    scanf("%d",&n);
		found=0;
		for(int i=0;i<5;i++){
		if(array[i]==n){
			printf("Vi tri phan tu trong mang la: %d\n",i+1);
			found=1;
			break;
		}
	}
		if(found==0){
			printf("Phan tu khong ton tai trong mang\n");
		}	
	}while(found==0);
	return 0;
}
