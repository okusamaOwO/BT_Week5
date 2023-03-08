#include<bits/stdc++.h>
using namespace std ;
string ChooseWord (vector <string> v, int n){
    int i = rand()%n ;
    return v[i];

}
bool gameOver(int badGuessCount){
    return (badGuessCount == 0);
}
bool winGame(string secretWord, string guessedWord){
    return(secretWord == guessedWord);
}
bool contained(string secretWord, char guess, string &guessedWord){
    int temp = 0 ;
    for(int i = 0; i < secretWord.length(); i++){
        if(guess == secretWord[i]){
            guessedWord[i] = guess ;
            temp = 1;
        }
    }
    if(temp == 1) return true ;
    return false ;

}
int main(){
    string s, guessedWord ;
    char guess ;
    vector <string> v ;
    do{
        getline(cin, s);
        v.push_back(s);
    }
    while(s != ".");
    int n = v.size();
    string secretWord = ChooseWord(v,n);
    guessedWord = string(secretWord.length(), '-');
    int badGuessCount = 10 ;
    while(!gameOver(badGuessCount)){
        if(winGame(secretWord, guessedWord)){
            cout <<"You win!";
            return 0 ;
        }
        /// chua gameOver thi choi tiep
        cout <<"enter your Guess: "<<endl ;
        cin >> guess ;
        if(!contained(secretWord,guess,guessedWord)){
           badGuessCount-- ;
        }
        cout << guessedWord << endl ;


    }



}
