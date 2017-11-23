#include <stdbool.h>
#include <stdio.h>

int main(){
bool digit_seen[10] = {false};
int digit;
long n;

printf("Enter the number :");
scanf("%ld",&n);

while (n>0){
	digit = n % 10;
	digit_seen[digit] = true;
	n /= 10;
	}

for (int i = 0; i < 10; i++){
	if (digit_seen[i] == true) printf("%d ",i);
	}
return 0;
}

