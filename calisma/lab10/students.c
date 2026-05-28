// Let's create a new type called Student , with which we will represent students. Include ID, average, and age. The type of the average should be a double-precision floating-point number, the rest should be an integer. Let's examine the memory requirements of the type, experiment with the order of the data members, and observe its effect.
//For the sake of practicality, let's create an alias type with typedef, so that we can use the type without the struct prefix.
// Let's create a function that receives a `Student' array and returns the ID of the student with the highest average.
// We handle BSc, MSc and PhD students separately, for this we create an enumeration type (enum) called Type and add it to Student as a data member. 

    // Depending on the type of student, store different additional data using a `union' type.
            // BSc: total number of courses attended (int).
            // MSc: the aggregate adjusted credit index (double)
            // PhD: the impact factor of the journal with the highest impact factor in which you published (double) 

#include <stdio.h>
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

int highestGPA(Student arr[], int size){

	int highestID = arr[0].ID;
	double highestGPA = arr[0].GPA;

	for (size_t i = 1; i < size; i++){
		if(highestGPA < arr[i].GPA){
			highestGPA = arr[i].GPA;
			highestID = arr[i].ID;
		}
	}
	return highestID;
}

int main(){
	// Student s1 = {0,20,4.6};
	//struct Student s1 = {.ID=0, .GPA=5, .AGE=21};
	Student studentArray[3] = {
		{.ID = 1, .Age = 19, .GPA = 3.9, .level = 0, .extraInfo.numOfCourses = 20},
		{.ID = 2, .Age = 23, .GPA = 4.8, .level = MSc, .extraInfo.creditIndex = 4.5},
		{.ID = 3, .Age = 32, .GPA = 4.2, .level = PhD, .extraInfo.impactFactor = 4.3}
	};
	
	int highestId = highestGPA(studentArray,3);

	printf("Highest Student has ID: %d\n", highestId);
	// s1.ID = 1; //changing the variable

	// printf("ID: %d, Age: %d, GPA: %.2lf\n", s1.ID, s1.Age, s1.GPA);

	printf("%lu bytes\n", sizeof(struct Student));
}

