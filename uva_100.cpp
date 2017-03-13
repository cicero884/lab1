#include<cstdio>
#include<cstdlib>

int main(){
	int n=0;
	scanf("%d",&n);
	printf("%d ",n);
	while(n!=1){
		if(n%2) n=n*3+1;
		else n/=2;
		printf("%d ",n);
	}
	return 0;
}
