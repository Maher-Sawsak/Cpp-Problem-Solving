//Encrypt_Decrypt Text According To Ask Code


#include <iostream>
#include<string>
using namespace std;

string ReadMessage(string Message) {
    
    string Statement;

    cout << Message << endl;
    
    getline(cin, Statement);

    return Statement;
}

string EncryptMessage(string Statement, short EncryptionKey) {

    for (int i = 0;i <= Statement.length();i++) {

        Statement[i] = char((int)Statement[i] + EncryptionKey);
    }

    return Statement;

}

string DecryptMessage(string EncryptionsText, short DecryptionKey) {

   
    for (int i = 0; i <= EncryptionsText.length();i++) {

        EncryptionsText[i] = char((int)EncryptionsText[i] - DecryptionKey);

    }

    return EncryptionsText;
}


int main()
{
    int EncryptionKey = 2;

    string Message = ReadMessage("Please Enter The Message :");

    string TextEncryption = EncryptMessage(Message, EncryptionKey);

    string TextDecryption = DecryptMessage(TextEncryption, EncryptionKey);



    cout << "Text Befor Encryption : " << Message << endl;

    cout << "Text After Encryption : " << TextEncryption << endl;

    cout << "text After Decryption : " << TextDecryption << endl;

    return 0;

}