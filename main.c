#include <stdio.h>

int main(void) {
  int nStudents;
  printf("enter the number of students: ");
  scanf("%d", &nStudents);

  int grades[nStudents];
  for (int i=0; i<nStudents; i++){
    printf("enter the exam grade for %d student: ", i+1);
    scanf("%d", &grades[i]);
  }

  int studentsPassed=0;
  int studentsFailed=0;

  for (int i=0; i<nStudents; i++){
    if (grades[i] > 2.5){
      studentsPassed++;
    }
    else{
      studentsFailed++;
    }
  }
  printf("number of students that have passed an exam: %d \n", studentsPassed);
  printf("number of students that have failed an exam: %d \n", studentsFailed);

  int averageTest=0;
  for (int i=0; i<nStudents; i++){
    averageTest+=grades[i];
  }

  float average = (float)averageTest/nStudents;
  printf("the average grade is: %.1f \n", average);

  int betterThenAverage = 0;
  for (int i=0; i<nStudents; i++){
    if ((float)grades[i] > average){
      betterThenAverage++;
    }
  }
  printf("number of better students than average is: %d", betterThenAverage);

return 0;
}
