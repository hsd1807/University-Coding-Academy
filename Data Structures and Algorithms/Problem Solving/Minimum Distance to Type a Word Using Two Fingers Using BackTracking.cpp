class Solution {
public:
    int getDistance(char finger, char current) {
        if (finger == '\0') {
            return 0;
        }
        finger -= 'A', current -= 'A';
        int x1 = finger / 6, y1 = finger % 6;
        int x2 = current / 6, y2 = current % 6;
        return abs(x1 - x2) + abs(y1 - y2);
    }
    int minimumDistance(string& word, int index = 0, char f1 = '\0', char f2 = '\0') {
        if (index == word.size()) {
            return 0;
        }
        char current = word[index];
        int choice1 = getDistance(f1, current) + minimumDistance(word, index + 1, current, f2);
        int choice2 = getDistance(f2, current) + minimumDistance(word, index + 1, f1, current);
        return min(choice1, choice2);
    }
};
