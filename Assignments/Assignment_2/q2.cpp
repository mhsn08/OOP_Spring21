#include<iostream>

using namespace std;

void EnterData(string *,int *, int, int);
void calculate(int *, char* ,float *, int, int);
void OutputData(string *,int *, char*, float*, int, int);

int main()
{
    int students,courses;
    cout << "Number of Students: ";
    cin >> students;
    cout << "Number of Courses: ";
    cin >> courses;
    string st[students];
    int score[students][courses];
    char grade[students];
    float avg[courses];
    EnterData(st,&score[0][0],students,courses);
    calculate(&score[0][0],grade,avg,students,courses);
    OutputData(st,&score[0][0],grade,avg,students,courses);
    return 0;
}

void EnterData(string *s,int *score, int student, int course)
{
    cout << "Enter The Names of Students: \n";
    for (int i =0; i < student; i++){
        cout << "Student No. " << i + 1 << ' ';
        cin >> *(s + i);
    }
    cout << "\nEnter the Marks now: " << endl;
    for (int i = 0; i < student; i++){
        cout << "\nStudent Name: " << *(s + i) << endl;
        for (int j = 0; j < course; j++){
            cout << "course No. " << j + 1 << ' ';
            cin >> *(score + (i*course) + j);
        }
    }
}

void calculate(int *score, char* grade, float* avg, int student, int course)
{
    // Grading critera was Not Given, So I am giving my own Grading
    // 90 >= :A,        80-89.99 :B,        70-79.99  :C,            60-69.99 :D,        60< :F
    // Now I am giving every student Grade
    int total = 0;
    float percentage;
    float average;
    for (int i = 0; i<student; i++){
        for (int j = 0; j< course; j++){
            total += *(score + (i*course) + j);
        }
        percentage = (total * 100.0)/(course*100);      //(course * 100) means every course has 100 marks total
        if (percentage >= 90)
            *(grade + i) = 'A';
        else if(percentage >= 80)
            *(grade + i) = 'B';
        else if (percentage >= 70)
            *(grade + i) = 'C';
        else if(percentage >= 60)
            *(grade + i) = 'D';
        else
            *(grade + i) = 'F';
        total = 0;
    }
    // Now Calculating The Average Score in every Test
    for (int i = 0; i < course; i++){
        for (int j = 0; j < student; j++){
            total += *(score + (course*j) + i);
        }
        average = total/(float)student;
        *(avg + i) = average;
        total = 0;
    }
}

void OutputData(string *s,int *score, char *grade , float *avg, int student, int course)
{
    // cout << "Students\t\t" << "Score\t\t\t" << "Grade\t\t";
    for (int i = 0; i < student; i++){
        cout << *(s + i) << "  ";
        for (int j = 0; j < course; j++){
            cout << *(score + (i * course) + j) << "  ";
        }
        cout << "\t\tGrade: " << *(grade + i) << endl;
    }
    cout << "\n\nTest Average: " << endl;
    for (int i = 0; i < course; i++){
        cout << "Test No. " << i << ": " << *(avg + i) << endl;
    }
}