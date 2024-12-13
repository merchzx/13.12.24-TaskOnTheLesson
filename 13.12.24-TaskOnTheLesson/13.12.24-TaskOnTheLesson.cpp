// 13.12.24-TaskOnTheLesson.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Member
{
    virtual int Run() = 0;
    virtual int Jump() = 0;
};


class Cat:public Member {
public:
    virtual int Run(){
        cout << "Cat can run forever" << endl;
        return 500;
    }
    virtual int Jump() {
        cout << "Cat can jump very high" << endl;
        return 500;
    }
};

class Human :public Member {
public:
    virtual int Run() {
        cout << "human can run 200m"<<endl;
        return 200;
    }
    virtual int Jump() {
        cout << "human can jump 100cm" << endl;
        return 0.1;
    }
};

class Robot :public Member {
public:
    virtual int Run() {
        cout << "Robot can run 500m" << endl;
        return 500;
    }
    virtual int Jump() {
        cout << "Robot can`t even jump" << endl;
        return 0;
    }
};

struct Obstacle {
    virtual int canBeCompleteByRunning() = 0;
    virtual int canBeCompleteByJumping() = 0;
};

class Wall:public Obstacle {
public:
    virtual int canBeCompleteByRunning() {
        return 0;
    }
    virtual int canBeCompleteByJumping() {
        cout << "Height of Wall - 4m" << endl;
        return 500;
    }

};

class runningRace :public Obstacle {
public:
    virtual int canBeCompleteByRunning() {
        cout << "Lenght of Running Race - 500m"<<endl;
        return 500;
    }
    virtual int canBeCompleteByJumping() {
        return 0;
    }
};


int main()
{
    Obstacle *a[2];
    a[0] = new Wall;
    a[1] = new runningRace;

    Member* b[3];
    b[0] = new Human;
    b[1] = new Cat;
    b[2] = new Robot;
    


    int ch;
    do 
    {
        cout << "What u want to know 1.Human: 2.Cat: 3.Robot - >";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            if (a[0]->canBeCompleteByJumping() != b[0]->Jump()) {
                system("cls");
                cout << "Human cant JUMP over the wall" << endl;
                if (a[1]->canBeCompleteByRunning() != b[0]->Run()) {
                    cout << "Human cant RUN over the Running Race" << endl;
                }
            }
            else if (a[0]->canBeCompleteByJumping() == b[0]->Jump()) {
                system("cls");
                cout << "Human can JUMP over the wall" << endl;
                if (a[1]->canBeCompleteByRunning() != b[0]->Run()) {
                    cout << "Human cant RUN over the Running Race" << endl;
                }
            }
            else if (a[0]->canBeCompleteByJumping() != b[0]->Jump()) {
                system("cls");
                cout << "Human cant JUMP over the wall" << endl;
                if (a[1]->canBeCompleteByRunning() == b[0]->Run()) {
                    cout << "Human can RUN over the Running Race" << endl;
                }
            }
            else if (a[0]->canBeCompleteByJumping() == b[0]->Jump()) {
                system("cls");
                cout << "Human can JUMP over the wall" << endl;
                if (a[1]->canBeCompleteByRunning() == b[0]->Run()) {
                    cout << "Human can RUN over the Running Race" << endl;
                }
            }
            break;
        }
        case 2:
        {
            if (a[0]->canBeCompleteByJumping() != b[1]->Jump()) {
                system("cls");
                cout << "Cat cant JUMP over the wall" << endl;
                if (a[1]->canBeCompleteByRunning() != b[1]->Run()) {
                    cout << "Cat cant RUN over the Running Race" << endl;
                }
            }
            else if (a[0]->canBeCompleteByJumping() == b[1]->Jump()) {
                system("cls");
                cout << "Cat can JUMP over the wall" << endl;
                if (a[1]->canBeCompleteByRunning() != b[1]->Run()) {
                    cout << "Cat cant RUN over the Running Race" << endl;
                }
            }
            else if (a[0]->canBeCompleteByJumping() != b[1]->Jump()) {
                system("cls");
                cout << "Cat cant JUMP over the wall" << endl;
                if (a[1]->canBeCompleteByRunning() == b[1]->Run()) {
                    cout << "Cat can RUN over the Running Race" << endl;
                }
            }
            else if (a[0]->canBeCompleteByJumping() == b[1]->Jump()) {
                system("cls");
                cout << "Cat can JUMP over the wall" << endl;
                if (a[1]->canBeCompleteByRunning() == b[1]->Run()) {
                    cout << "Cat can RUN over the Running Race" << endl;
                }
            }
            break;
        }
        case 3:
        {
            if (a[0]->canBeCompleteByJumping() != b[2]->Jump()) {
                system("cls");
                cout << "Robot cant JUMP over the wall" << endl;
                if (a[1]->canBeCompleteByRunning() != b[2]->Run()) {
                    cout << "Robot cant RUN over the Running Race" << endl;
                }
            }
            else if (a[0]->canBeCompleteByJumping() == b[2]->Jump()) {
                system("cls");
                cout << "Robot can JUMP over the wall" << endl;
                if (a[1]->canBeCompleteByRunning() != b[2]->Run()) {
                    cout << "Robot cant RUN over the Running Race" << endl;
                }
            }
            else if (a[0]->canBeCompleteByJumping() != b[2]->Jump()) {
                system("cls");
                cout << "Robot cant JUMP over the wall" << endl;
                if (a[1]->canBeCompleteByRunning() == b[2]->Run()) {
                    cout << "Robot can RUN over the Running Race" << endl;
                }
            }
            else if (a[0]->canBeCompleteByJumping() == b[2]->Jump()) {
                system("cls");
                cout << "Robot can JUMP over the wall" << endl;
                if (a[1]->canBeCompleteByRunning() == b[2]->Run()) {
                    cout << "Robot can RUN over the Running Race" << endl;
                }
            }
        }
        break;
        }
    } while (ch != 4);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
