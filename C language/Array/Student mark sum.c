https://www.hackerrank.com/challenges/students-marks-sum/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) 
{
  //Write your code here.
  int sum=0;
  for(int student=0;student<number_of_students;student++)
  {
    if(gender=='b' && student%2==0)
    {
          sum+=marks[student];
    }
    if(gender=='g' && student%2!=0)
    {
          sum+=marks[student];
    }
    
  }
  return sum;
}

int main() {
