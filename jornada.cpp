#include <iostream>

using namespace std;

int main()
{	
	int n;
	cin >> n;
	int vetor[n];
	unsigned long long carn = 0;

	for (int i=0; i<n; i++){
		cin >> vetor[i];
		carn += vetor[i];
	}

	int cont = 0, maxcont=0;

	while(cont >= 0 && cont < n){

		if(maxcont < cont) {
			maxcont = cont;
		}
		
		if(vetor[cont]>0){
			carn--;
			
			if(vetor[cont]%2 == 0){								
				vetor[cont]--;
				cont--;
			}
			else{
				vetor[cont]--;				
				cont++;	
			}
			
		}
		else {
			cont --;
		}

	}	
	cout << maxcont+1 << " " << carn << endl;

	return 0;
}

