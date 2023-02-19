using namespace std;



vector<string> wave(string y){
  vector <string> waves;
  string newy;
  bool space;
  for(int i = 0; i < y.length(); i++) {

    for(int j = 0; j < y.length(); j++) {
      if(y[i] == ' ') {
        space = true;
      }
      if( i == j) {
        newy += toupper(y[j]);
   } else {
      newy += tolower(y[j]);
    }
  }

    waves.push_back(newy);
    if(space) {
      waves.pop_back();
      space = false;
    }
    newy.clear();
  }
  
  return waves;
}
