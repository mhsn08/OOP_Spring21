#include<iostream>
#include<fstream>

using namespace std;

void read_d(string filename, string *, int * , char *,int row, int columns);
void calculate_r(int *, char *, int row, int columns);
void show_r(string *, int * , char *, int row, int column);

int main()
{
    string names[10];
    int row = 10;
    int column = 5;
    int marks[10][5];
    char grade[10];
    read_d("q.txt", &names[0], &marks[0][0], &grade[0],row,column);
    calculate_r(&marks[0][0], &grade[0],row,column);
    show_r(&names[0], &marks[0][0], &grade[0], row, column);
    return 0;
}

void read_d(string filename, string * name, int * marks, char * grade, int row, int columns)
{
    string rec;
    string s = "";
    ifstream fin;
    fin.open(filename);
    for(int i = 0;i < row;i++){
        getline(fin,rec);
        for(int j = 0;; j++){
            if(rec[j] != ' '){
                s += rec[j];
            }
            else{
                name[i] = s;
                s = "";
                for(int k = 0;k < columns;k++){
                    for(int l = j+1;;l++){
                        if(rec[l] != ' ' && l < rec.length()){
                            s += rec[l];
                        }
                        else{
                            j = l;
                            *(marks + (i * k) + k) = stoi(s);
                            s = "";
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
    fin.close();
}

void calculate_r(int * marks, char * grade, int row, int columns)
{
    int total = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0 ; j < columns ; j ++){
            total += *(marks + (i * j) + j);
        }
        if((total / 5.0) * 100 > 90)
            grade[i] = 'P';
        else
            grade[i] = 'F';
    }
}

void show_r(string * name, int * marks, char * grade, int row, int column)
{
    for(int i = 0; i < row; i++){
        cout << "Name = " << name[i] << "Marks" << endl;
        for(int j = 0; j < column ;j++){
            cout << *(marks + (i * j) + j) << ' ';
        }
        cout << "Grade = " << grade[i] << endl << endl;
    }
}