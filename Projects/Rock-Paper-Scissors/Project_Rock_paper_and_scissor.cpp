//Rock_Paper and Scissor Game By C++
//Course 5 Data Struture And Algorithms (5) 

#include<iostream>
using namespace std;

enum enGameChoice { Stone = 1, Paper = 2, Scissor = 3 };

enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

struct stRoundInfo
{
    short RoundNumber = 0;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner RoundWinner;
    string WinnerName = "";
};

string GetChoiceName(enGameChoice Choice)
{
    switch (Choice)
    {
    case enGameChoice::Stone: return "Stone";
    case enGameChoice::Paper: return "Paper";
    case enGameChoice::Scissor: return "Scissor";
    default: return "Error Choice";
    }
}

string GetWinnerName(enWinner Name)
{
    switch (Name)
    {
    case enWinner::Player1: return "You";
    case enWinner::Computer: return "Computer";
    case enWinner::Draw : return "No Winner (Draw)";
    default: return "Error Choice";
    }
}


struct stGameResults
{
    short GameRounds = 0;
    short Player1WinTimes = 0;
    short ComputerWinTimes = 0;
    short DrawTimes = 0;
    enWinner GameWinner;
    string WinnerName = "";
};

int ReadPositiveNumber(string Message) {

    int Number = 0;
    do {
    
        cout << Message << endl;
        cin >> Number;
    

    } while (Number < 0);

    return Number;

}

short RandomNumber(short From, short To)
{
    short RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void ResetScreen()
{
    system("cls");
    system("color 0F");
}


void SetWinnerScreenColor(string Winner)
{
    if (Winner == "You") {
        system("color 2F");
    }
    else if (Winner == "Computer") {
        system("color 4F");
        cout << "\a";
    }
    else { 
        system("color 6F");
    }
}

enWinner WhoWinTheRound(int PlayerChoise, int ComputerChoise) {


    if (PlayerChoise == ComputerChoise)
    {
        return enWinner::Draw;
    }
    else if (PlayerChoise == enGameChoice::Stone && ComputerChoise == enGameChoice::Scissor) {

        return enWinner::Player1;
    }
    else if (PlayerChoise == enGameChoice::Scissor && ComputerChoise == enGameChoice::Paper) {


        return enWinner::Player1;
    }
    else if (PlayerChoise == enGameChoice::Paper && ComputerChoise == enGameChoice::Stone) {

        return enWinner::Player1;
    }

    else {

        return enWinner::Computer;
    }

}


int AskHowManyRound() {


    int NumberOfRound = ReadPositiveNumber("How Many Round You Want To Play :");

    return NumberOfRound;

}

void Tab(int Number) {

    for (int i = 0;i <= Number;i++) {
    
        cout << "\t";
    }

}


void PrintRoundInfo(int RoundNumber, string PlayerChoose, string ComputerChoose, string RoundWinner) {


    cout << "---------------------------Round [" << RoundNumber << "]" << " ------------------------\n";

    cout << "Player Choice : " << PlayerChoose << endl;

    cout << "Computer Choice : " << ComputerChoose << "\n";

    cout << "Round Winner : " << RoundWinner << "\n";

    cout << "--------------------------------------------------------------\n";


    SetWinnerScreenColor(RoundWinner);
    

}

stRoundInfo RoundStructure(int RoundNumber) {
    stRoundInfo  stRoundInfoo;
    stRoundInfoo.Player1Choice = (enGameChoice)ReadPositiveNumber("Your Choice :  [1]Stone , [2]:Paper , [3]:Scissors ? ");
    stRoundInfoo.ComputerChoice = (enGameChoice)RandomNumber(1, 3);
    stRoundInfoo.RoundNumber = RoundNumber;
    stRoundInfoo.RoundWinner = WhoWinTheRound((int)stRoundInfoo.Player1Choice, (int)stRoundInfoo.ComputerChoice);
    
    if (stRoundInfoo.RoundWinner == enWinner::Player1) {
    
        stRoundInfoo.WinnerName = "[You]";
    }
    else if (stRoundInfoo.RoundWinner == enWinner::Computer) {
    
        stRoundInfoo.WinnerName = "[Computer]";
    
    }
    else {
    
    
        stRoundInfoo.WinnerName = "No Winner (Draw)";
    }
    
    PrintRoundInfo(stRoundInfoo.RoundNumber, GetChoiceName(stRoundInfoo.Player1Choice), GetChoiceName(stRoundInfoo.ComputerChoice), GetWinnerName(stRoundInfoo.RoundWinner));
    
    return stRoundInfoo;
}


void PrintGameStruture(int TotalNumberOfRound,int TotalPlayerWon , int TotalComputerWon,int TotalDraw , string FinalWinner) {

    Tab(3);cout << "---------------------------------------------------------------\n";

    Tab(5);cout << "+++ G a m e   O v e r +++" << endl;

    Tab(3);cout << "---------------------------------------------------------------\n";

    Tab(3);cout << "______________________[ Game Result ]___________________________" << endl;

    cout << "Game Rounds   : " << TotalNumberOfRound <<"\n";
    cout << "Player Won times   : " <<TotalPlayerWon <<"\n";
    cout << "Computer Won times  : " <<TotalComputerWon <<"\n";
    cout << "Draw times   : " <<TotalDraw << "\n";
    cout << "Final Winner   : " <<FinalWinner <<"\n";
    
    

}




stGameResults GameStructure() {

    stGameResults stGameResultss;
    stRoundInfo CurrentRoundInfo;

    stGameResultss.GameRounds = AskHowManyRound();
    stGameResultss.Player1WinTimes = 0;
    stGameResultss.ComputerWinTimes = 0;
    stGameResultss.DrawTimes = 0;

    for (int i = 1; i <= stGameResultss.GameRounds; i++) {

       

        CurrentRoundInfo = RoundStructure(i);

        if (CurrentRoundInfo.RoundWinner == enWinner::Player1) {
            stGameResultss.Player1WinTimes++;
        }
        else if (CurrentRoundInfo.RoundWinner == enWinner::Computer) {
            stGameResultss.ComputerWinTimes++;
        }
        else {
            stGameResultss.DrawTimes++;
        }
    }

    if (stGameResultss.Player1WinTimes > stGameResultss.ComputerWinTimes) {
        stGameResultss.GameWinner = enWinner::Player1;
    }
    else if (stGameResultss.ComputerWinTimes > stGameResultss.Player1WinTimes) {
        stGameResultss.GameWinner = enWinner::Computer;
    }
    else {
        stGameResultss.GameWinner = enWinner::Draw;
    }

    stGameResultss.WinnerName = GetWinnerName(stGameResultss.GameWinner);

    PrintGameStruture( stGameResultss.GameRounds, stGameResultss.Player1WinTimes, stGameResultss.ComputerWinTimes,stGameResultss.DrawTimes, stGameResultss.WinnerName);

    return stGameResultss;
}


int main()
{
    srand((unsigned)time(NULL));


    char Choise;
    do {
        ResetScreen();
        GameStructure();


        cout << "Do You Want To Play Again Y/N?\n";
        cin >> Choise;
       


    } while (Choise == 'Y' || Choise == 'y');
    return 0;
}