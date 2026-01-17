#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   
using namespace std;


int ReadPositiveNumber(string Message) {
    int Number;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void ResetScreen() {
    system("cls");
    system("color 0F");
}

short RandomNumber(short From, short To) {
    short RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}


enum enLevel { Eazy = 1, Med, hard, mix };
enum enOpType { Add = 1, Sub, Multi, Div, Mix };

struct stQuestionInfo {
    int Number1;
    int Number2;
    char Operation;
    int Result; 
};

struct stGameInfo {
    int NumberOfQestion;
    int NumberOfRightAnswer;
    int NumberOfWrongAnswer;
    enOpType OperationType;
    enLevel QuestionLevel;
};


int AskHowManyRound() {
    int NumberOfRound = ReadPositiveNumber("Please Enter How Many Question You Want ?");
    return NumberOfRound;
}

int CalculateCorrectAnswer(stQuestionInfo QuestionInfo) {
    int ActualResult = 0;

    switch (QuestionInfo.Operation) {
    case '+':
        ActualResult = QuestionInfo.Number1 + QuestionInfo.Number2;
        break;
    case '-':
        ActualResult = QuestionInfo.Number1 - QuestionInfo.Number2;
        break;
    case '*':
        ActualResult = QuestionInfo.Number1 * QuestionInfo.Number2;
        break;
    case '/':
        if (QuestionInfo.Number2 == 0) return 0; 
        ActualResult = QuestionInfo.Number1 / QuestionInfo.Number2;
        break;
    }
    return ActualResult;
}

bool IsEquationCorrect(stQuestionInfo QuestionInfo) {
    return (QuestionInfo.Result == CalculateCorrectAnswer(QuestionInfo));
}

enOpType RandomlyOperationForMix() {
    return (enOpType)RandomNumber(1, 4);
}


stQuestionInfo EazyQuiz(enOpType enType) {
    stQuestionInfo stEazyQuestion;
    stEazyQuestion.Number1 = RandomNumber(1, 10);
    stEazyQuestion.Number2 = RandomNumber(1, 10);

    switch (enType) {
    case Add:
        stEazyQuestion.Operation = '+';
        cout << stEazyQuestion.Number1 << endl;
        cout << stEazyQuestion.Number2 << "  " << "+" << endl;
        break;
    case Sub:
        stEazyQuestion.Operation = '-';
        cout << stEazyQuestion.Number1 << endl;
        cout << stEazyQuestion.Number2 << "  " << "-" << endl;
        break;
    case Multi:
        stEazyQuestion.Operation = '*';
        cout << stEazyQuestion.Number1 << endl;
        cout << stEazyQuestion.Number2 << "  " << "*" << endl;
        break;
    case Div:
        stEazyQuestion.Operation = '/';
        cout << stEazyQuestion.Number1 << endl;
        cout << stEazyQuestion.Number2 << "  " << "/" << endl;
        break;
    case Mix:
        return EazyQuiz(RandomlyOperationForMix());
    }

    cout << "-------------\n";
    cin >> stEazyQuestion.Result;
    return stEazyQuestion;
}

stQuestionInfo MidQuiz(enOpType enType) {
    stQuestionInfo stMidQuestion;
    stMidQuestion.Number1 = RandomNumber(10, 50);
    stMidQuestion.Number2 = RandomNumber(10, 50);

    switch (enType) {
    case Add:
        stMidQuestion.Operation = '+';
        cout << stMidQuestion.Number1 << endl;
        cout << stMidQuestion.Number2 << "  " << "+" << endl;
        break;
    case Sub:
        stMidQuestion.Operation = '-';
        cout << stMidQuestion.Number1 << endl;
        cout << stMidQuestion.Number2 << "  " << "-" << endl;
        break;
    case Multi:
        stMidQuestion.Operation = '*';
        cout << stMidQuestion.Number1 << endl;
        cout << stMidQuestion.Number2 << "  " << "*" << endl;
        break;
    case Div:
        stMidQuestion.Operation = '/';
        cout << stMidQuestion.Number1 << endl;
        cout << stMidQuestion.Number2 << "  " << "/" << endl;
        break;
    case Mix:
        return MidQuiz(RandomlyOperationForMix());
    }

    cout << "-------------\n";
    cin >> stMidQuestion.Result;
    return stMidQuestion;
}

stQuestionInfo HardQuiz(enOpType enType) {
    stQuestionInfo stHardQuestion;
    stHardQuestion.Number1 = RandomNumber(50, 100);
    stHardQuestion.Number2 = RandomNumber(50, 100);

    switch (enType) {
    case Add:
        stHardQuestion.Operation = '+';
        cout << stHardQuestion.Number1 << endl;
        cout << stHardQuestion.Number2 << "  " << "+" << endl;
        break;
    case Sub:
        stHardQuestion.Operation = '-';
        cout << stHardQuestion.Number1 << endl;
        cout << stHardQuestion.Number2 << "  " << "-" << endl;
        break;
    case Multi:
        stHardQuestion.Operation = '*';
        cout << stHardQuestion.Number1 << endl;
        cout << stHardQuestion.Number2 << "  " << "*" << endl;
        break;
    case Div:
        stHardQuestion.Operation = '/';
        cout << stHardQuestion.Number1 << endl;
        cout << stHardQuestion.Number2 << "  " << "/" << endl;
        break;
    case Mix:
        return HardQuiz(RandomlyOperationForMix());
    }

    cout << "-------------\n";
    cin >> stHardQuestion.Result;
    return stHardQuestion;
}

stQuestionInfo GenerateMixedQuiz(enOpType enType) {
    int Level = RandomNumber(1, 3);

    enOpType CurrentOpType = enType;
    if (CurrentOpType == Mix) {
        CurrentOpType = RandomlyOperationForMix();
    }

    switch (Level) {
    case Eazy:
        return EazyQuiz(CurrentOpType);
    case Med:
        return MidQuiz(CurrentOpType);
    case hard:
        return HardQuiz(CurrentOpType);
    default:
        return EazyQuiz(CurrentOpType);
    }
}


stGameInfo GameStart() {
    stGameInfo stGameInfoo;
    stGameInfoo.NumberOfQestion = AskHowManyRound();
    stGameInfoo.QuestionLevel = (enLevel)ReadPositiveNumber("[1]Eazy , [2]Med , [3]hard , [4]mix");
    stGameInfoo.OperationType = (enOpType)ReadPositiveNumber("[1]Add , [2]Sub, [3]Multi, [4]Div, [5]Mix");

    stGameInfoo.NumberOfRightAnswer = 0;
    stGameInfoo.NumberOfWrongAnswer = 0;

    for (int i = 1; i <= stGameInfoo.NumberOfQestion; i++) {

        system("color 0F");

        cout << "\nQuestion [" << i << "/" << stGameInfoo.NumberOfQestion << "]\n";

        stQuestionInfo CurrentQuestion;

        enOpType CurrentOpType = stGameInfoo.OperationType;
        if (stGameInfoo.OperationType == Mix) {
            CurrentOpType = RandomlyOperationForMix();
        }

        switch (stGameInfoo.QuestionLevel) {
        case Eazy:
            CurrentQuestion = EazyQuiz(CurrentOpType);
            break;
        case Med:
            CurrentQuestion = MidQuiz(CurrentOpType);
            break;
        case hard:
            CurrentQuestion = HardQuiz(CurrentOpType);
            break;
        case mix:
            CurrentQuestion = GenerateMixedQuiz(CurrentOpType);
            break;
        }


        if (IsEquationCorrect(CurrentQuestion)) {
            system("color 2F"); 

            cout << "Correct!\n";
            stGameInfoo.NumberOfRightAnswer++;
        }
        else {
            system("color 4F");
            cout << "Wrong!\n";
            cout << "\a";
            int CorrectAnswer = CalculateCorrectAnswer(CurrentQuestion);
            cout << "The correct answer was: " << CorrectAnswer << "\n";
            stGameInfoo.NumberOfWrongAnswer++;
        }
        system("pause");
    }

    return stGameInfoo;
}


void PrintGameStruture(stGameInfo stGameInfoo) {
    system("color 6F"); 

    cout << "\n\n--- [Game Over] ---\n";
    cout << "-----------------------------------\n";
    cout << "Number Of Qestions: " << stGameInfoo.NumberOfQestion << "\n";
    cout << "Question Level   : " << stGameInfoo.QuestionLevel << endl;;
    cout << "Operation Type : " << stGameInfoo.OperationType << endl;
    cout << "Right Answers     : " << stGameInfoo.NumberOfRightAnswer << "\n";
    cout << "Wrong Answers     : " << stGameInfoo.NumberOfWrongAnswer << "\n";
    

    cout << "-----------------------------------\n";
}


int main() {
    srand((unsigned)time(NULL));

    char PlayAgain = 'Y';
    do {
        ResetScreen(); 

        stGameInfo GameResults = GameStart();
        PrintGameStruture(GameResults);

        cout << "\nDo you want to play again? [Y/N]: ";
        cin >> PlayAgain;

    } while (PlayAgain == 'Y' || PlayAgain == 'y');

    return 0;
}