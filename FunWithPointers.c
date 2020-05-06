#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **load_array(char *input_string){
	char **array_mem = malloc(3*(sizeof(char *)));
	for(int x=0;x<3;x++){
		array_mem[x] = malloc(sizeof(char *));
		printf("Allocation at %p\n",array_mem[x]);
		strcpy(array_mem[x],input_string);
	};

	return array_mem;
};

int main(int argc, char *argv[]){
	char *my_string = "Hello world, this is me";
	char **returned_array = load_array(my_string);

	for(int x=0;x<3;x++){
		printf("%s\n",returned_array[x]);
		free(returned_array[x]);
	}

	return 0;

};
