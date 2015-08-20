#include <iostream.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char input[22];
  int x, y, z;
  cout << "Enter a word: ";
  cin.get(input, 22);
  y = strlen(input);
  bool d = 0;
  for(z=0; z<y-1; z++) {
    if(input[z] == input[z+1]) {
      cout << input << " is NOT a dromedary word." << endl;
      return 0;
    } if(input[z] < input[z+1]) {
      if(d != 0) {
        cout << input << " is NOT a dromedary word." << endl;
        return 0;
      }
    } if(input[z] > input[z+1]) {
      d = 1;
    }
  }
  cout << input << " is a dromedary word." << endl;
  return 0;
}