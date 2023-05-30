#include <stdio.h>

struct Student {
	int id ;
	int marks;
	char fav_char;
};

void main(){
	struct Student Rohan= {2,95,'W'} ,ravi,ram;
	/*
	Rohan.id = 1;
	Rohan.marks=55;
	Rohan.fav_char='p';
	*/
	ravi.id = 2;
	ravi.marks = 80;
	ravi.fav_char = 'r';
	
	ram.id = 3;
	ram.marks = 66;
	ram.fav_char ='q';
	 
	
	
	printf("Id: %d \n",Rohan.id);
	printf("Marks: %d \n",Rohan.marks);
	printf("Fav Char: %c \n ",Rohan.fav_char);
	printf("\n");
	printf("Id: %d \n",ravi.id);
	printf("Marks: %d \n",ravi.marks);
	printf("Fav Char: %c \n",ravi.fav_char);
	printf("\n");
	printf("Id: %d \n",ram.id);
	printf("Marks: %d \n",ram.marks);
	printf("Fav Char: %c \n ",ram.fav_char);

	
	
	
}
