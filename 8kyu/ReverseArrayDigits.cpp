std::vector<int> digitize(unsigned long n) {
    std::vector <int> numvec;
    std::string nums = std::to_string(n);
    for(int i = nums.size() - 1; i >= 0; i--) {
      std::cout << nums[i] << std::endl;
      numvec.push_back(nums[i] - '0');
    }
  return numvec;
}
