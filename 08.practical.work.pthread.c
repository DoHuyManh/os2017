#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<pthread.h>

#define BUFFER_SIZE 10

typedef struct {

	int amount; 

	char type; 
	
	char unit; 
} item;

item buffer[BUFFER_SIZE];
int first=0;
int last=0;

void produce(item *i) {
	while ((first + 1) % BUFFER SIZE == last) {
		
	}
	memcpy(&buffer[first], i, sizeof(item));
	first = (first + 1) % BUFFER_SIZE;


item *consume() {
	item *i = malloc(sizeof(item));
	while (first == last) {
		
	}
	memcpy(i, &buffer[last], sizeof(item));
	last = (last + 1) % BUFFER_SIZE;
	return i;
}

void *threadFunctionPro(void *param) {
	item 1, 2, 3;
	printf("A thread of producer:\n\n");
	1.type = '0';
	1.amount = 3;
	1.unit = '0';

	2.type = '1';
	2.amount = 30;
	2.unit = '1';

	3.type = '0';
	3.amount = 2;
	3.unit = '0';

	printf("item   type   amount    unit  \n");

	printf("1      %c    %d    %c    %d     %d\n", 1.type, 1.amount, 1.unit, first, last);


	printf("2      %c    %d    %c    %d     %d\n", 2.type, 2.amount, 2.unit, first, last);


	printf("3      %c    %d    %c    %d     %d\n", 3.type, 3.amount, 3.unit, first, last);


printf("Produce 3 items\n");
	produce(&1);
	printf("produce 1: first = %d   last = %d\n", first, last);

	produce(&2);
	printf("produce 2: first = %d   last = %d\n", first, last);

	produce(&3);
	printf("produce 3: first = %d   last = %d\n\n", first, last);

	return 0;


	
	void *threadFunctionCon(void *param) {
	printf("A thread for consumer:\n\n");
	printf("Consume 2 item ");
	consume();

	printf("consume an item:   first = %d   last = %d\n", first, last);
	consume();

	printf("consume another item:  first = %d   last = %d\n", first, last);
	return 0;
}

int main(){

	pthread_t pro, con;
	
	pthread_create(&pro, NULL, threadFunctionPro, NULL);
	pthread_join(pro,);

	pthread_create(&con, NULL, threadFunctionCon, NULL);
	pthread_join(con,);

	return 0;
}
}
