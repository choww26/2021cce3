#include <stdio.h>
#include <string.h>
char line[200];
int palinedorme()//
{
	int N = strlen(line);
	for(int i=0; i<N; i++){
		if( line[i] != line[N-i-1])return 0;//bad
	}
	return 1;
}
int main()
{
	while(scanf("%s", line)==1){
		int p=palinedorme();
		if( p==1 )printf("%s -- is a regular palinedorme.\n\n", line);
		if( p==0 )printf("%s -- is not a palinedorme.\n\n", line);
	}
}
