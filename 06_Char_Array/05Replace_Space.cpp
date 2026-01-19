#include <iostream>
#include <string.h>
#include<vector>
using namespace std;

void replaceSpace(char sentence[]){

    int i =0;
    int n = strlen(sentence);
    for(int i =0;i<n;i++){
        if(sentence[i]==' '){
            sentence[i] = '@';
        }
    }

}

int main(){
    char sentence[100];

    cout << "Write the Sentece :" ;
    cin.getline(sentence,100);

    replaceSpace(sentence);

    cout << "Sentence after Space replaces : " << sentence << endl;

    return 0;
}

