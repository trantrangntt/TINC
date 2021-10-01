#include<stdio.h>
struct phanso{
	int mau;
	int tu;
};
int GCD(int a,int b){
	int tg;
	if (a<b){ tg=a;a=b;b=tg;} 
	while(b!=0){
		tg=a%b;
		a=b;
		b=tg;
	}
	return a;
}
void rutgon(int *a,int *b){
	*a=*a/GCD(*a,*b);
	*b=*b/GCD(*a,*b);
}
void quydong(int *t1,int *m1,int *t2,int *m2){
	int mc=GCD(*m1,*m2);
	*t1=*t1 * (*m1/mc);
	*t2=*t2 * (*m2/mc);
	*m1=*m1 * *m2 / mc;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		struct phanso a,b,sum,d;
		scanf("%d %d %d %d",&a.tu,&a.mau,&b.tu,&b.mau);
		rutgon(&a.tu,&a.mau);
		rutgon(&b.tu,&b.mau);
		quydong(&a.tu,&a.mau,&b.tu,&b.mau);
		printf("%d/%d %d/%d\n",a.tu,a.mau,b.tu,b.mau);
		sum.tu=a.tu+b.tu;
		sum.mau=a.mau;
		rutgon(&sum.tu,&sum.mau);
		printf("%d/%d\n",sum.tu,sum.mau);
		d.tu=a.tu*b.mau;
		d.mau=a.mau*b.tu;
		rutgon(&d.tu,&d.mau);
		printf("%d/%d\n",d.tu,d.mau);
	}
}
