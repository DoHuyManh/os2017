#include <stdio.h>
#include <unistd.h>

int main() {
	printf("Main function()\n");
	int pid = fork();
	if (pid == 0){
		printf(" lauching ps -ef\n");
		char* args[] = {"/bin/ps", "-ef",};
		execvp("/bin/ps", args);
		printf("Finish lauching ps -ef\n");
	
	if (pid == 0){
		printf(" lauching free -h\n");
		char* args[] = {"free", "-h", NULL};
		execvp("free", args);
		printf("Finish lauching free -h\n");
	}
	else printf("child is %d\n", pid);
	return 0;
}
