#include <stdio.h>

/*int main() {
	char string[4]="test";
	int k;
	k=5;
	printf("%s\n", string);
    printf("%d\n", string[2]+k);
	
	return 0;
}*/
int main(){

char string[]="test";
    int n, i;
    n = (sizeof(string)) / (sizeof(string[0]));
	int k;
	k=0;
	printf("%s\n", string);
	for(i=0;i<=n; i++){
	    i = string[i];
    printf("%d\n", string[i]+k);
}

	return 0;
}