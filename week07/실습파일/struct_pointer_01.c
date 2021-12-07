# include <stdio.h>

typedef struct student{
	char *name;
	int math;
	int kor;
	int eng;
}student;

float avg(student person);
student getHonorStudent(student me, student you);

int main(){
	student reakwon = {"REAKWON", 40,50,40};
	student seonmi = {"����", 90,95,100};
	
	student honorStudent = getHonorStudent(reakwon, seonmi);
	printf("������ %s�Դϴ�.\n");	
	
	return 0;
}

float avg(student person){
	return (person.math + person.kor + person.eng)/3.0;
}

student getHonorStudent(student me, student you){
	if(avg(me) > avg(you)){
		return me;
	}
	
	if(avg(me) < avg(you)){
		return you;
	}
}
