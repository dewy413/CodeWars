using namespace std;

bool isAscOrder(vector<int> arr) {
  int k;
  for(int i = 0; i < arr.size() - 1; i++) {
    k = i + 1;
    if(arr.at(i) > arr.at(k)) {
      return false;
    }
  }
  return true;
}
