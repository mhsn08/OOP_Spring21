#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int score = 0;
    char grade;
    ifstream fin;
    ofstream fout;
    fout.open("q1res.txt");
    fin.open("q1.txt");
    string s,s1;                                    //s string is to store only first line of a file and s1 will store every other line, one at a time
    getline(fin,s);
    for(int i = 0; i < 150 ; i++){
        getline(fin,s1);
        for(int j = 0;;j++){
            fout << s1[j];                          //it will write one character a time in the file, so when the answers come, I'll get to know and then I'll also check the answers
            if (s1[j] == ' '){                      //when the space comes, it means roll number is written and now checking the answers
                for (int k = 0; k < 20; k++){
                    fout << s1[j+k+1];              //First writing as required in the question
                    if (s[k] == s1[j+k+1])          //Now checking if the answer is correct and then counting its score simultenously
                        score += 2;
                    else if(s1[j+k+1] == ' ')
                        score += 0;
                    else
                        score -= 1;
                }
                fout << ' ' << score << ' ';
                if ((score*100)/20.0 >= 90)         //Now checking for grade
                    grade ='A';
                else if((score*100)/20.0 >= 80)
                    grade = 'B';
                else if((score*100)/20.0 >= 70)
                    grade = 'C';
                else if((score*100)/20.0 >= 60)
                    grade = 'D';
                else
                    grade = 'F';
                fout << grade << endl;
                score = 0;
                break;                              //Now the line is written as required so getting out of the loop
            }
        }

   
    }
    fin.close();
    fout.close();
    fin.open("q1res.txt");
    for (int i = 0; i < 150; i++){
        getline(fin,s1);
        cout << s1 << endl;
    }
    return 0;
}
