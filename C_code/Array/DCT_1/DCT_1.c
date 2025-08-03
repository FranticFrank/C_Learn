# include<stdio.h>
# include<math.h>
# include<stdlib.h>
# include<time.h>
# define N 8
# define PI 3.1415926

int i,j;
double *f = NULL;		//初始矩阵 
double *A = NULL;		//转换矩阵 
double *AT = NULL;		//系数矩阵转置 

void dct2(double *,double *);		//dct正变换  
void f_dct2(double *,double *);		//dct反变换 
void printM(double *,int,char *);	//打印矩阵 
void mulMatrix(double *P,double *Q,double *resM,int);	//矩阵乘法 
double *TMatrix(double *, int);		//转置矩阵 

int main(){
	f = (double *)malloc(N*N*sizeof(double));
	A = (double *)malloc(N*N*sizeof(double));
	AT = (double *)malloc(N*N*sizeof(double));
	/*
		time函数来获取系统时间
		1970年1月1日0点到现在时间的秒数
		然后将得到的time_t类型数据转化为(unsigned int)的数
	*/
	srand((unsigned int)time(NULL));
	/*
		rand（）产生随机数时，
		如果用srand（seed）播下种子之后，一旦种子相同,
		产生的随机数将是相同的
	*/
	for(i = 0;i < N;++i)
		for(j = 0;j < N;++j)
			f[j + i*N] = rand()%100;
	

	printM(f,N,"f(原矩阵)=\n");
	
	//1根据公式，生成转换矩阵A
	double x0 = sqrt(1.0/N);
	double x1 = sqrt(2.0/N);
	for(i = 0;i < N;++i){
		for(j = 0;j < N;++j){
			if(i == 0){
				A[i*N+j] = x0*cos((2*j+1)*PI*i/(2*N));
			}else{
				A[i*N+j] = x1*cos((2*j+1)*PI*i/(2*N));
			}
		}
	}
	
	printM(A,N,"A(转换矩阵)=\n");
	AT = TMatrix(A,N);
	printM(AT,N,"AT(A转置矩阵)=\n");
	
	//2利用转换矩阵A，进行转换
	double *dct = (double *)malloc(N*N*sizeof(double));
	dct2(f,dct);
	printM(dct,N,"dct正变换矩阵=\n");
	
	free(A);
	free(f);
	free(dct); 
	free(AT);

	return 0;
} 

/* 二维dct转换函数 
	参数列表:
		in:输入矩阵
		out:输出矩阵 
*/
void dct2(double *in,double *out){
	double *tt = (double *)malloc(N*N*sizeof(double));
	mulMatrix(A,in,tt,N);
	//printM(tt,N,"tt=\n");
	mulMatrix(tt,AT,out,N);
	
	free(tt);
}

/*	矩阵乘法
	参数列表:
		P,Q:待乘矩阵
		resM:返回矩阵 
		N:矩阵阶 
	返回:
		结果矩阵 
*/
void mulMatrix(double *P,double *Q,double *resM,int n){
	int t;
	double res;
	
	for(i = 0;i < n;++i){
		for(t = 0;t < n;++t){
			res = 0;
			for(j = 0;j < n;++j)
				res += P[i*N+j]*Q[j*N+t];
			resM[i*N+t] = res;
		}
	}
} 

/*	打印矩阵
	参数列表:
		M:待打印矩阵
		n:矩阵的阶 
		str:待打印字符串 
*/
void printM(double *M,int n,char *str){
	printf("%s",str);

	for(i = 0;i < n;++i){
		printf("\t");
		for(j = 0;j < n;++j)
			printf("%.2lf\t",M[i*N+j]);
		printf("\n");
	}	
}

/*	矩阵转置函数
	参数列表:
		M:待转置矩阵
		n:矩阵的阶 
	返回:
		转置后的矩阵 
*/
double *TMatrix(double *M, int n){
	double *tmp = (double *)malloc(N*N*sizeof(double));
	for(j = 0;j < N;++j)
		for(i = 0;i < N;++i)
			tmp[i*N+j] = M[j*N+i];
	
	return tmp;
}
