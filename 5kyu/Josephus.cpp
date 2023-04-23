std::vector <int> josephus(std::vector < int > items, int k) {
    std::vector <int> eliminated; // Create new vector for eliminated numbers to be held. Will be returned.
    int counter = 1; //Creates our counter so we know what is going to be removed.
    while(!items.empty()) { // Goes until our list is over.
        for(int i = 0; i < items.size(); i++) { // I prefered to do it this way over a while loop.
            if(counter % k == 0) { // Check to see if the k has been reached.
                eliminated.push_back(items[i]); // Adds i to eliminated.
                items.erase(items.begin() + i); // Removes i from list.
                i--;
            }
            counter++;
        }
    }
    return eliminated;
}
