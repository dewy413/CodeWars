#include <vector>
using namespace std;

int find_even_index (const vector <int> numbers) {
  int left, right, index; // Counters for both sides.
  right = 0; // Right side of the vector counter.
  left = 0; // left side of the vector counter.

  for(int i = 0; i < numbers.size(); i++) { right += numbers[i]; } // Add all the numbers up. Implies the entire list.
  
  for(int i = 0; i < numbers.size(); i++) {
    right -= numbers[i]; // Slowly removing values and adding it to the other side.
    if(left == right) { return i; } // Checks to see if it is equal, and if so the condition has been reached code can end.
    left += numbers[i]; // Adds to the other side so it can keep going.
  }
  return -1; // When all other conditions fail.
}
