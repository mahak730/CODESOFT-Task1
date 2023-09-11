#include <iostream>
using namespace std;

int main() {
  // Generate a random number between 1 and 100.
  int n = rand() % 100 + 1;

  int guess;
  do {
    // Take the number from user.
    cout << "Guess a number between 1 and 100: ";
    cin >> guess;

    // Check if the guessed number is too high or too low.
    if (guess < n) {
      cout << "Too low.\n";
    } else if (guess > n ) {
      cout << "Too high.\n";
    } else {
      cout << "You guessed the correct number! Wohouuuuuuuuuu!\n";
    }
  } while (guess != n);

  return 0;
}
    
