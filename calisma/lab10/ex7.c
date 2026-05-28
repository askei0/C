// Write a function (student_init) which, receiving aType parameter, creates a Student instance on the heap with the appropriate Type, fills the corresponding data members with random data, and then returns a pointer to the instance. Fill an array with pointers to such `Student' instances, then modify the function written in task 3 to return a pointer to the instance instead of an identifier. Be careful to avoid memory leaks.

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #pragma pack(1)

typedef struct Student Student;
typedef enum Level Level;
typedef union ExtraInfo ExtraInfo;


enum Level {
	BSc,
	MSc,
	PhD
};

union ExtraInfo { //size will be 8 bytes. because the largest type here is double (8 bytes)
	int numOfCourses;
	double creditIndex;
	double impactFactor;
};

struct Student {
	int ID;
	int Age;
	double GPA;
	Level level;
	ExtraInfo extraInfo;
};

Student* init_student(Level l){
	Student* s = (Student*)malloc(sizeof(Student));

	static int ID = 0;

	s->ID = ID++;
	s->level = l;

	s->Age = (rand() % 22 - 18) + 18; // (rand() % max - min) + min;
	s->GPA = ((rand() % 100 - 500 ) + 100) / 100;
	
	switch (s -> level)
	{
	case BSc:
		s->extraInfo.numOfCourses = rand() % 101;
		break;
	case MSc:
		s-> extraInfo.creditIndex = ((rand() % 100 - 500 ) + 100) / 100;
		break;

	case PhD:
		s->extraInfo.impactFactor = ((rand() % 100 - 500 ) + 100) / 100;

		break;

	default:
		break;
	}

	return s;

}

Student *highestStudent(Student* arr[], int size){

	Student* highestStudent = arr[0];
	double highestGPA = arr[0]->GPA;

	for (size_t i = 1; i < size; i++)
	{
		if(highestGPA < arr[i]->GPA)
		{
			highestGPA = arr[i]->GPA;
			highestStudent = arr[i];
		}
	}
	return highestStudent;
}

void printStudent(Student* s){
	printf("ID: %d\n", s->ID);
	printf("Age: %d\n", s->Age);
	printf("GPA: %.2lf\n", s->GPA);

	switch (s->level) {

		case BSc:
			printf("Level: BSc\n");
			printf("Number of courses: %d", s-> extraInfo.numOfCourses);
		break;
	case MSc:
			printf("Level: MSc\n");
			printf("Credit Ind: %d", s-> extraInfo.numOfCourses);
		break;

	case PhD:
			printf("Level: PhD\n");
			printf("impact Factor: %d", s-> extraInfo.numOfCourses);

		break;

	default:
		break;
	
	}
}

int main(){

	srand(time(0));
	Student* studentArray[5];
	
	for (size_t i = 0; i < 5; i++)
	{
		studentArray[i] = init_student(i % 3);
		printStudent(studentArray[i]);
		printf("============================\n");
	}

	Student* highestS = highestStudent(studentArray, 5);
		printf("============= HIGEST STUDENT ===============\n");
		printStudent(highestS);

	for (size_t i = 0; i < 5; i++)
	{
		free(studentArray[i]);
	}


}

