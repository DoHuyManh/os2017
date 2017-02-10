#include<stdio.h>
#include<stdlib.h>
#include <string.h>

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

int main(){

	
	item item1;
	item1.type='0';
	item1.amount=5;
	item1.unit='0';

	item item2;
	item2.type='1';
	item2.amount=10;
	item2.unit='1';

	printf("Item1:\nType: %c\nAmount: %d\nUnit: ", item1.type, item1.amount, item1.unit);
	printf("Item2:\nType: %c\nAmount: %d\nUnit: ", item2.type, item2.amount, item2.unit);

	printf("Initial_value:	First: %d	Last: %d\n", first, last);
	produce(&item1);
	printf("Produce_item1:\nFirst value: %d\nLast value: ", first, last);
	produce(&item2);
	printf("Produce_item2:\nFirst value: %d\nLast value: ", first, last);

	
	item* consumedItem = consume();
	printf("Consumed item:\nType: %c\nAmount: %d\nUnit: %c\n", consumedItem->type, consumedItem->amount, consumedItem->unit);
	printf("Consume:\nFirst value: %d\nLast value: %d\n", first, last);

	return 0;

}
