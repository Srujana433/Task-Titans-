#include "library.h"
#include <stdio.h>

int main() {
    loadBooks();
    int choice;
    
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n2. List Books\n3. Search Book\n4. Delete Book\n5. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: addBook(); break;
            case 2: listBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 5: saveBooks(); printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);
    
    return 0;
}
#include <stdio.h>

int main() {

  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}
