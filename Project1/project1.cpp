//Samantha Lien
/*CSCI 135
Gennady Maryash
Project 1
*/

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

const int g_MAX_WORDS = 1000;
int g_word_count = 0;

string g_words[g_MAX_WORDS];
string g_definitions[g_MAX_WORDS];
string g_pos[g_MAX_WORDS];

/*
    @param            :   The string with the `filename`
    @post             :   Reads the words, definitions
                          pos into the global-arrays 
                          and set the value of `g_word_count`
                          to the number of words read
*/

void readWords(string filename){
   ifstream fin(filename);
   if(fin.fail()){
      cerr<< "File cannot be read\n";
      exit(1);
   }

   while(fin>> g_words[g_word_count]>>g_pos[g_word_count]>>g_definitions[g_word_count]){     //reads through word,pos, and then the colon in the given txt file
      fin.ignore(1,' ');                                                                     //ignores 1 space after the colon
      getline(fin,g_definitions[g_word_count]);                                              //overwrites g_def with string following the space and colon

      g_word_count++;
   }
   
  
   fin.close();

}


/*
    @param            :   The string with a query word
    @return           :   Integer index of the word in
                          `g_words` global-array. Returns
                          -1 if the word is not found
    @post             :   Find the index of given `word`
                          in the `g_words` array. Return -1
                          if word is not in the array
*/

int getIndex(string word){
   for(int i=0; i<g_word_count; i++){     //loops through the array
      if(g_words[i]==word){
         return i;                        //returns the index value of a specific word
      }
   }
   
   return -1;
}


/*
    @param            :   The string with a query word
    @return           :   Return the string definition of
                          the word from  `g_definitions`
                          global-array. Return "NOT_FOUND" if
                          word doesn't exist in the dictionary
    @post             :   Find the definition of the given `word`
                          Return "NOT_FOUND" otherwise
*/

string getDefinition(string word){
   for(int i=0; i<g_word_count; i++){         //loops through array
      if(g_words[i]==word){
         string def=g_definitions[i];  
         return def;                         //returns definition of users inputted word
      }
   }
   string err= "NOT_FOUND";                  //returns error message if word is not found
   return err;
}
  

/*
    @param            :   The string with a query word
    @return           :   Return the string part-of-speech(pos) 
                          from the `g_pos` global-array. Return
                          "NOT_FOUND" if the word doesn't exist
                          in the dictionary.
    @post             :   Find the pos of the given `word`
                          Return "NOT_FOUND" otherwise
*/

string getPOS(string word){
   for(int i=0; i<g_word_count; i++){        //loops through array
      if(g_words[i]==word){
         string pos= g_pos[i]; 
         return pos;                         //returns pos of users inputted word
      }
   }
   string err= "NOT_FOUND";                 //returns error message if word is not found
   return err;
}


/*
    @param            :   The string prefix of a word (the prefix
                          can be of any length)
    @return           :   Integer number of words found that starts
                          with the given `prefix`
    @post             :   Count the words that start with the given
                          `prefix`
*/

int countPrefix(string prefix){
   int count= 0;                                            //initiates a counter that starts at 0
   for(int i=0; i< g_word_count; i++){ 
      if(g_words[i].substr(0, prefix.length())==prefix){   //substrings all the words in the array based on the length of inputted prefix
         count++;                                          //conditional checks if the substring and given prefix are equal
      }                                                    // if equal, increment counter
   }
   return count;
}


/*
    @param word       :   The string with a new word
    @param definition :   The string with the definition of the
                          new `word`
    @param pos        :   The string with the pos of the new `word`
    @return           :   return `true` if the word is
                          successfully added to the dictionary
                          return `false` if failed (word already
                          exists or dictionary is full)
    @post             :   Add the given `word`, `definition`, `pos`
                          to the end of the respective
                          global-arrays.
                          The word should not be added to the
                          global-arrays if it already exists 
                          or if the array reached maximum 
                          capacity(`g_MAX_WORDS`).
                          Update `g_word_count` if the word is
                          successfully added
*/

bool addWord(string word, string definition, string pos){
   int found=0;
   for(int i=0; i<g_word_count; i++){                       //loops through all words
      if(g_words[i]==word || g_word_count>=g_MAX_WORDS){   //checks if the word is repeated and if it exceeds array size
         found=1;
         return false;
      }else{
         found=0;
      }
   }
   if(found==0){                                         //conditional updates and adds word,def, and pos
         g_word_count++;                                 
         g_words[g_word_count-1]=word;                   // -1 because array begins at 0
         g_pos[g_word_count-1]=pos;
         g_definitions[g_word_count-1]= definition;

         return true;
   }
}


/*
    @param word       :   The string with the word that is to
                          be edited
    @param definition :   The string with the new definition of 
                          the `word`
    @param pos        :   The string with the new pos of the `word`
    @return           :   return `true` if the word is successfully
                          edited, return `false` if the `word`
                          doesn't exist in the dictionary
    @post             :   Replace the given `word`'s  definition
                          and pos with the given `definition` and
                          `pos` (by modifying global-arrays
                          `g_definitions` and `g_pos`).
                          The modification will fail if the word
                          doesn't exist in the dictionary
*/

bool editWord(string word, string definition, string pos){
   int found=0;                                     //found checks if the inputted word exists
   for(int i=0; i<g_word_count; i++){              //loops through array
      if(g_words[i]==word){                        //finds the word that is to be edited
         g_pos[i]=pos;
         g_definitions[i]=definition;              //updates def and pos
         found=1;             
         return true;
      }else{
         found=0;
      }
   }
   if(found==0){
         return false;
   }
}


/*
    @param            :   The string with the word that is to
                          be removed
    @return           :   return `true` if the word is successfully
                          removed from the dictionary return `false`
                          if the word doesn't exist in the dictionary
    @post             :   Remove the given `word`, `word`'s
                          definition and `word`'s pos from the
                          respective global-arrays if the word
                          exists.  
                          Update `g_word_count` if the word is
                          successfully removed
*/

bool removeWord(string word){
   int found=0;
      for(int i=0; i<g_word_count; i++){                    //loops through array to find inputted word
         if(g_words[i]==word){                                
               for(int x=i; x<g_word_count; x++){           //x=i because i is the index of the word that is to be removed
                  g_words[x]= g_words[x+1];                 //all the word x following i are updated to the word that followed it (hence x+1)
                  g_pos[x]=g_pos[x+1];
                  g_definitions[x]=g_definitions[x+1];
               } 
               g_word_count--;                              //decrement the array by one after the values are updated
               found=1;
               return true;
         }
      }
      if(found==0){
         return false;
      }
      
}


string getRandomWord() {
    srand((unsigned) time(NULL));
    int index = rand() % g_word_count;
    return g_words[index];
}

/*
    @param            :   The string with a word from the dictionary 
    @return           :   string of "_" based on the number of
                          characters in the given `word` 
    @post             :   Return string of "_" based on the length
                          of the given `word`.
                          For example, if the word is "game", then
                          the function would return "____". In other
                          words, a string of four "_"s.
*/

string maskWord(string word){
   string space;
   for(int i=0; i< word.length(); i++){
      space+= "_";                           //amount of spaces will equal the words length
   }
   return space;
}

/*
    @param            :   The integer for the difficulty of the game
                          (0 for easy, 1 for normal, and 2 for hard) 
    @return           :   The number of tries given the `difficulty`
                          (9 for easy, 7 for normal, and 5 for hard)
    @post             :   Return the number of tries based on given
                          difficulty (0-easy: 9 tries, 1-normal: 7
                          tries, 2-Hard: 5 tries) 
*/

int getTries(int difficulty){
   int tries;
   if(difficulty==0){
      tries=9;
      return tries;
   }else if(difficulty==1){
      tries=7;
      return tries;
   }else if(difficulty==2){
      tries=5;
      return tries;
   }
   
}

/*
    @param tries      :   The integer for remaining tries 
    @param difficulty :   The integer for the difficulty of the game 
                          (0 for easy, 1 for normal, and 2 for hard) 
    @post             :   prints the number of lives left and number
                          of lives used using "O" and "X". DO NOT
                          PRINT AN ENDLINE

    For example : calling `printAttemps(2, 1)` would print "OOXXXXX". 
                  Based on given `difficulty`, we know the total tries
                  is 7 (from `getTries(1)`). Also, the player has 2
                  `tries` remaining based on the given parameter.
                  Therefore, the function prints two "O"s to indicate
                  the remaining tries and 5 "X"s to indicate the tries
                  that have been used (7-2=5)          
*/

void printAttempts(int tries, int difficulty){
      for(int x=0; x<tries; x++){
         cout<< "O";
      }
      for(int p=0; p<(getTries(difficulty)-tries);p++){
         cout<< "X";
      }
}

/*
    @param word       :   The string word from the dictionary
    @param letter     :   The char letter that that will be revealed
    @param(&) current :   The string representing a masked word
    @return           :   `true` if the `letter` exists in `word`,
                          otherwise return `false`  
    @post             :   If the given `letter` exists in `word`
                          reveal the `letter` in `current` masked word
                          and return `true`. Otherwise, return `false`

    For example : Let's say we have the following main function:
                  int main(){
                      string w = "g___";
                      cout << revealLetter("good", 'o', "g___") << endl;
                      cout <<  w << endl;
                  }
                  The first `cout` will print 1 because the letter 'o'
                  exists in "good". Thus, the function returned `true`.
                  The second `cout` will print "goo_". The variable `w`
                  has been modified by the function to reveal all the
                  `o`s in "good" resulting in "goo_"           
*/

bool revealLetter(string word, char letter, string &current){
   int found=0;
   for(int i=0; i<word.length(); i++){     //loops throught number of letters the word has
      if(word[i]==letter){                 //conditional checks if the any of the letters in the word matches with inputted letter
         current[i]=letter;               //current word which is already masked reveals the letter at index i
         found=1;
      }
   }
   if(found==1){
      return true;
   }else{
      return false;
   }
}



// game-loop for Hangman
void gameLoop() {
    int difficulty, tries;
    string word, current;
    char letter;
    while (true) {
        cout << "Welcome to Hangman!" << endl;
        cout <<  "0. easy\n1. normal\n2. hard\n3. exit\nChoose a difficulty: ";
        cin >> difficulty;
        while (difficulty < 0 || difficulty > 3) {
            cout <<  "Enough horseplay >_< !\n0. easy\n1. normal\n2. hard\n3. exit\nChoose a difficulty: ";
            cin >> difficulty;
        }
        if (difficulty == 3) {
            cout << "If you're hangry, go grab a bite! See what I did there?" << endl;
            break;
        }
        word = getRandomWord();
        current = maskWord(word);
        tries = getTries(difficulty);
        while (tries != 0) {
            cout << "Life: ";
            printAttempts(tries, difficulty);
            cout << endl << "Word: "<< current << endl;
            cout << "Enter a letter: ";
            cin >> letter;
            
            if (!revealLetter(word, letter, current)) {
                tries--;
            }
            if (current == word) {
                break;
            }
            if (tries == 2) {
                cout << "The part of speech of the word is "<< getPOS(word) << endl;
            }
            if (tries == 1) {
                cout << "Definition of the word: " << getDefinition(word) << endl;
            }
        }
        if (tries == 0) {
            cout << "The word is \"" << word << "\". Better luck next time! You're getting the ..ahem.. hang of it." << endl;
        }
        else {
            cout << "Congrats!!!" << endl;
        }
    }
}


/*int main(){
   string filename, word, prefix, definition, pos;
   cout<< "Enter file name: ";
   cin>> filename;
   readWords(filename);*/


   /*cout<< "Enter word: ";
   cin>> word;
   getIndex(word); 
   cout<< getDefinition(word);
   getPOS(word);*/

   /*cout<< "Enter a prefix: ";
   cin>> prefix;
   countPrefix(prefix);*/

  /*cout<< "Enter a word: ";
   cin>> word;
   cout<< "Enter a part of speech: ";
   cin>> pos;
   cout<< "Enter a defintion: ";
   cin>>definition;
   cout<< addWord(word,definition,pos);*/

   /*cout<< "Enter a word: ";
   cin>> word;
   maskWord(word);
   /*cout<< "Enter a part of speech: ";
   cin>> pos;
   cout<< "Enter a defintion: ";
   cin>>definition;
   cout<< editWord(word, definition, pos);

   cout<<removeWord(word);

   for(int i=0; i<g_word_count; i++){
      cout<< g_words[i]<< endl;
   }

   printAttempts(5,1);

   return 0;
}
//*/
