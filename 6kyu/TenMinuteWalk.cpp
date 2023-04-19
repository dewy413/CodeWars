#include<vector>

bool isValidWalk(std::vector<char> walk) {
  
  if(walk.size() != 10) { return false; } // Check the condition at the start. No need for variables if they aren't gonna be used anyways.
  int x, y; // Think of x and y as coordinates. 
  x = 0; // y is for n and s
  y = 0; // y is for w and e

  
  for(int i = 0; i < 10; i++) { // Loops for all 10 points. 
    switch(walk.at(i)) { // Simple switch doing basic math.
        case 'n':
          y++; 
          break;
        case 's':
          y--;
          break;
        case 'e':
          x++;
          break;
        case 'w':
          x--;
          break;
    }
  }
    
  if(!(x) & !(y)) { return true; } // Both condtions have to be 0 for true, else it is false.
  
  else { return false; }
  
}
  
 
