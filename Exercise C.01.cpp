//Elgin Gjyzeli AI25
#include <stdio.h>

int main() {
    int N;
	int i;
    unsigned long long factorial = 1;//perdora unsigned long long per vlera te medhaja pasi int nuk mjafton per vlera te medha

    printf("Enter a positive number: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) { //kodi funksionon deri tek nr 20!, 21! e siper shfaq vlera te gabuara pasi unsigned long long     
        factorial *= i; //esht per vlera deri 64 bit, cdo vlere mbrapa del jo e sakte dhe mbas 65 (testova deri 65 limiti siperm) del 0
    }

    printf("%d! = %llu\n", N, factorial);//%llu eshte formati per te shfaqur vleren unsigned long long pasi %d do shfaqte vleren e gabuar

    return 0;
}

