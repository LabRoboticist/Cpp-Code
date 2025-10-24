
double e1=1,e2;
int n=1, product=1, factorial=1;
bool stop=false;
double diff, term;

float Product(int product1) {
	product1=1;
	//find factorial of n
	for(int i=n;i>=1;i--){
		product1*=i;
	}
	return product1;
}

int main(){
	do{
	n=2;	
	while(n>=1){
			
			//find factorial of n
			product=Product(product);
			factorial=product;
			term=1.0/factorial;
			e2=e1+term;
			diff=e2-e1;
			if (diff < 0.00000001) break;
			else {
				e1=e2;
			}
		}
		
	}while(!stop);
}