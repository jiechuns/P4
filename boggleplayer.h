#include "BaseBogglePlayer.h"

class BogglePlayer: public BaseBogglePlayer{

public:

//std::string **boboard;
void buildLexicon(const set<string>& word_list);
void setBoard(unsigned int rows, unsigned int cols, string** diceArray);
bool getAllValidWords(unsigned int minimum_word_length, set<string>* words);
bool isInLexicon(const string& word_to_check);
vector<int> isOnBoard(const string& word_to_check);
void getCustomBoard(string** &new_board, unsigned int *rows, unsigned int *cols);
~BogglePlayer() {}
}
