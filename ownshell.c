#include<stdio.h>

void lsh_loop(void)
{
	char *line;
	char **args;
	int status;

	do {
		printf(">>>");
		line = lsh_readline();
		args = lsh_split_line(line);
		status = lsh_execute(args);
		
		free(line);
		free(args);
		
	} while (status);
}

/* Reading a line */
#define LSH_RL_BUFSIZE 1024

char *lsh_read_line(void)
{
	int bufsize = LSH_RL_BUFSIZE;
	int position = 0;

	char *buffer = malloc(sizeof(char) * bufsize);
	int c;

	if (!buffer) {
		fprintf(stderr, "lsh: allocation error\n");
		exit(-1);
	
	}

	while (1) {
		c = getchar();

		// if we hit EOF, replace it with a null
		if (c == EOF || c == '\n') {
			buffer[position] = '\0';
			
			return buffer;
		} else {
			buffer[position] = c;

		}
		position++;

		if (position >= bufsize) {
		
			bufsize += LSH_RL_BUFSIZE;
			buffer = realloc(buffer, bufsize);
			if (!buffer) {
				fprintf(stderr, "lsh: allocation error\n");
				exit(-1);
			}
		}
	}

}
int main(int argc, char **argv)
{
	lsh_loop();

	return 0;

}


