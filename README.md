#include <stdio.h>

int main() {

  double n1, n2, n3;

  printf("Enter three different numbers: ");
  scanf("%lf %lf %lf", &n1, &n2, &n3);

  // if n1 is greater than both n2 and n3, n1 is the largest
  if (n1 >= n2 && n1 >= n3)
    printf("%.2f is the largest number.", n1);

  // if n2 is greater than both n1 and n3, n2 is the largest
  if (n2 >= n1 && n2 >= n3)
    printf("%.2f is the largest number.", n2);

  // if n3 is greater than both n1 and n2, n3 is the largest
  if (n3 >= n1 && n3 >= n2)
    printf("%.2f is the largest number.", n3);

  return 0;
}// This function returns a letter grade based on the average
char gradeFunction(double avg) {
  if (avg >= 90) return 'A';
  else if (avg >= 80) return 'B';
  else if (avg >= 70) return 'C';
  else if (avg >= 60) return 'D';
  else return 'F';
}

int main(void) {
  int count;
  double sum = 0, grade;

  // Ask the user to enter total grades between 1 to 5
  printf("How many grades (1 to 5)? ");
  scanf("%d", &count);

  // Validate that count is between 1 and 5
  if (count < 1 || count > 5) {
    printf("Invalid number. You must enter between 1 and 5 grades.\n");
    return 1;  // Exit
  }

  // Loop to collect each grade
  for (int i = 1; i <= count; i++) {
    printf("Enter grade %d: ", i);
    scanf("%lf", &grade);
    sum += grade;
  }

  // Calculate the average score
  double avg = sum / count;

  // Display numeric average
  printf("Average: %.2f\n", avg);

  // Display letter grade
  printf("Letter grade: %c\n", gradeFunction(avg));

  return 0;
}
Example output:

How many grades (1 to 5)? 3
Enter grade 1: 85
Enter grade 2: 91
Enter grade 3: 78
Average: 84.6667
Letter grade: B
#include <stdio.h>

int main() {
    int num, i = 1;
    printf("
    Enter any Number:");
    scanf("%d", &num);
    printf("Multiplication table of %d: ", num);
    
    while (i <= 10) {
        printf("
        %d x %d = %d", num, i, num * i);
        i++;
    }
    return 0;
}#include<stdio.h>
int getnumber();    

int main() {

    int input = 0;
    //call a function to input number from key board
    input = getnumber();
    
    //when input is not in the range of 1 to 9,print error message
    while (!((input <= 9) && (input >= 1))) {
        printf("[ERROR] The number you entered is out of range");
        //input another number
        input = getnumber();
    }
    //this function is repeated until a valid input is given by user.
    printf("
    The number you entered is %d", input);
    return 0;
}      

//this function returns the number given by user
int getnumber() {    
    int number;
    //asks user for a input in given range printf(" Enter a number between 1 to 9 ");
    scanf("%d", &number);
    return (number);
}
#include <stdio.h>

int main() {
    int num, i = 1;
    printf("
    Enter any Number:");
    scanf("%d", &num);
    printf("Multiplication table of %d: ", num);
    
    while (i <= 10) {
        printf("
        %d x %d = %d", num, i, num * i);
        i++;
    }
    return 0;
}#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, n;
    printf("Ten random numbers in [1,100]\n");
    
    for (c = 1; c <= 10; c++)
    {    
        n = rand()%100 + 1;
        printf("%d\n", n);    
    }
    
    return 0;
}#include <stdio.h>
  int main() {
    int a[10];
    int i;
    int greatest;
    printf("Enter ten values:");
    //Store 10 numbers in an array
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    //Assume that a[0] is greatest
    greatest = a[0];
    for (i = 0; i < 10; i++) {
        if (a[i] > greatest) {
        greatest = a[i];
    }
    }
    printf("
    Greatest of ten numbers is %d", greatest);
    return 0;
  }

