#include <iostream>
#include <string>
#include<cmath>
#include <cstdlib>
#include<ctime>
using namespace std;
/* 1  Tableau multipication 1 to 10 
void headerTable() {

    cout << " Multipication froom 1 to 10 \n";

    cout << "\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }

    cout << endl;
    cout << "___________________________________________________________________________________" << endl;;


}
string separer(int i) {
    if (i < 10)
        return "   |";
    else
        return "  |";
}

void calculMultipication() {
    headerTable();
    for (int i = 1; i <= 10; i++) {
        cout <<"  "<< i << separer (i) << "\t" ;
        for (int j = 1; j <= 10; j++) {
            cout << i * j<<"\t";
     }
        cout << endl;
    }
}

int main() {
    calculMultipication();
}*/



 /* problem 2 Prime Number 
 enum enPrimNotPrime{ Prime , NotPrime};


 enPrimNotPrime CheckPrime(int nb)
 {

     for (int i = 2; i <= nb - 1; i++) {
         if (nb % i == 0) {
             return enPrimNotPrime::NotPrime;
         }
        
     }
     return enPrimNotPrime::Prime;

 }
 void printNumber()
 {
     int x;
     cout << "enter number " << endl;
     cin >> x;
     for (int i = 1; i <= x; i++) {
         if (CheckPrime(i) == Prime) {
             cout << i << endl;
       }
     }
 }
int main() {
    printNumber();

   } */



 /* enum stperfect { Perfect, NotPerfect };

 int SumDiviseurNum(int& num) {
     int sum = 0;
     for (int i = 1; i < num; i++) {
        
         if (num % i == 0) {
             sum += i;
         }
     }
     return sum;
 }
 stperfect CheckPerfectNumber(int &num) {
     if (num== SumDiviseurNum(num)) {
         return stperfect::Perfect;
        }
     else 
      return
         stperfect::NotPerfect;
 }

 void printNumber() {
     int num;
     cout << "enter number " << endl;
     cin >> num;
        
     if (CheckPerfectNumber(num)==Perfect) {
         cout << num << "  is perfect" << endl;
     }
     else cout << num << "is Not Perfect";
 }
 int  main() {
     printNumber();
 }*/
 
/* solution 4  

enum stperfect { Perfect, NotPerfect };

int SumDiviseurNum(int& num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {

        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}
stperfect CheckPerfectNumber(int& num) {
    if (num == SumDiviseurNum(num)) {
        return stperfect::Perfect;
    }
    else
        return
        stperfect::NotPerfect;
}
void printNumber()
{
    int x;
    cout << "enter number " << endl;
    cin >> x;
    for (int i = 1; i <= x; i++) {
        if (CheckPerfectNumber(i) == Perfect) {
            cout << i << endl;
        }
    }
}
int main() {
    printNumber();
}*/

/* Reserved Number

int ReadNumber() {
    int num=0;
    do {
        cout << "entrer number " << endl;
        cin >> num;
    }
        while (num < 0);
    return num;
}
void ReservedOrder(int num) {
     string res=  to_string(num);
    for (int i = res.length() - 1; i >= 0; i--) {
        cout << res[i]<<endl;
    }
    
}
int main() {
    ReservedOrder(ReadNumber());
}
 */

/* sum of digth slution 6 
int ReadNumber() {
    int num = 0;
    do {
        cout << "entrer number " << endl;
        cin >> num;
    } while (num < 0);
    return num;
}
void SumOfDight(int num) {
    int sum = 0;
    int reminder = 0;
    while (num > 0) {
        reminder = num % 10;
        num = num / 10;
        sum += reminder;
    }
    cout << sum << endl;
}
int main() {
    SumOfDight(ReadNumber());
}*/

/*  solution 7
int ReadNumber() {
    int num = 0;
    do {
        cout << "entrer number " << endl;
        cin >> num;
    } while (num < 0);
    return num;
}
void ReservedOrder(int num) {
    int sum = 0;
    int reminder = 0;
    while (num > 0) {
        reminder = num % 10;
        num = num / 10;
        cout << reminder;
    }

}

int main() {
    ReservedOrder(ReadNumber());
}*/
/* solution 8
int ReadNumber( string message) {
    int number;
    do{
    cout << message  << endl;
    cin >> number;
    }while (number<0 );

    return number;
}
 
int CalculFrecquency(int number,int Digit ) {
    int reminder = 0; 
     int Frecquency=0;
    while (number > 0) {
        reminder = number % 10;
        number = number / 10;
      if(reminder== Digit){
          Frecquency += 1;
      }
    }
    return Frecquency;
}

int main() {
    int num = ReadNumber("entrer number");
    int digit = ReadNumber("entrer digit");
    cout << "digit of   " << num << " is  " << CalculFrecquency(num, digit) << endl;
}*/


/* solution 9
int ReadNumber(string message) {
    int number;
    do {
        cout << message << endl;
        cin >> number;
    } while (number < 0);

    return number;
}

int CalculFrecquency(int number, int Digit) {
    int reminder = 0;
    int Frecquency = 0;
    while (number > 0) {
        reminder = number % 10;
        number = number / 10;
        if (reminder == Digit) {
            Frecquency += 1;
        }
    }
    return Frecquency;
}
void PrintFrecquency(int num) {

    for (int i = 0; i < 10; i++) {
        int Digitfreq=0;
        Digitfreq = CalculFrecquency(num, i);
        if (Digitfreq > 0) {
            cout << "Digiit" << i << "frecquency" << Digitfreq << "time" <<endl;
        }


    }


}

int main() {
    int num = ReadNumber("entrer number");
    PrintFrecquency(num);
    
}

*/
/* Solution 10
int ReadNumber(string message) {
    int number;
    do {
        cout << message << endl;
        cin >> number;
    } while (number < 0);

    return number;
}


int ReservedOrder(int num) {
    int reminder = 0;
    int Number2 = 0;
    while (num > 0) {
        reminder = num % 10;
        num = num / 10;
        Number2 = Number2 * 10 + reminder;
    }
    return Number2;
}
void printDigit(int num) {
    int reminder = 0;
    while (num > 0) {
        reminder = num % 10;
        num = num / 10;
        cout << reminder <<endl;
    }
}



int main() {
    printDigit(ReservedOrder(ReadNumber("entrer number")));
}

 */


/* solution 11

int ReadNumber(string Message) {
    int num;
    cout << Message << endl;
    cin >> num;
    return num;
}

int ReservedOrder(int num) {
    int reminder = 0;
    int Number2 = 0;
    while (num > 0) {
        reminder = num % 10;
        num = num / 10;
        Number2 = Number2 * 10 + reminder;
   
    }
    return Number2;
}

void CheckPalidromNUMBER(int num) {
    if (ReservedOrder(num) == num) {
        cout << "yes, it is a Palidrome number";}
    else
        cout << "No, ii is Not a Palidrome number";
    


}

int main() {

    CheckPalidromNUMBER(ReservedOrder(ReadNumber("entrer number")));
}
*/


/* solution 12

int ReadNumber(string Message) {
    int num;
    cout << Message << endl;
    cin >> num;
    return num;
}

void InvertedPatern(int num) {
    
    for (int i = num; i >= 1; i--)
    {
     for(int j=1;j<=i;j++)
        { 
        cout << i;
    }
     cout << endl;
    }

}
int main() {
    InvertedPatern(ReadNumber("entrer number"));
}
*/
/* solution 13 
int ReadNumber(string Message) {
    int num;
    cout << Message << endl;
    cin >> num;
    return num;
}

void Patern(int num) {

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

    int main() {
        Patern(ReadNumber("entrer number"));
    }

*/

/* solution 14

int ReadNumber(string Message) {
    int num;
    cout << Message << endl;
    cin >> num;
    return num;
}


void invertdLettrePateern(int num) {
    for (int i = 65 + num - 1; i >= 65; i--)
    {
        for (int j = 1; j <= num-(65 + num - 1 - i); j++)
        {
            cout << char(i);
        }
        cout << endl;
    }
    
}
        

int main() {
    invertdLettrePateern(ReadNumber("Entrer number"));
} */



/* soltion 15
int ReadNumber(string Message) {
    int num;
    cout << Message << endl;
    cin >> num;
    return num;
}


void LettrePateern(int num) {
    for (int i = 65 + num - 1; i >= 65; i--)
    {
        for (int j = 1; j <= num - (65 + num - 1 - i); j++)
        {
            cout << char(i);
        }
        cout << endl;
    }

}




int main() {
    LettrePateern(ReadNumber("Entrer number"));
}*/

/*soluton 16

int ReadNumber(string Message) {
    int num;
    cout << Message << endl;
    cin >> num;
    return num;
}


void printALLAAAtoZZZZ() {
    cout << "\n";
    string word = "";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++) {

            for (int K = 65; K <= 90; K++) {
                word = word + char(i);
                word = word + char(j);
                word = word + char(K);
                cout << word << endl;
                word = "";
            }
        }
    }
    cout << "\n";
}
  






int main() {
    printALLAAAtoZZZZ();
}*/




/*solution 17
string ReadPassword()
{
    string Password;  

    cout << "Please enter a 3-Letter Password (all capital)?\n"; 
    cin >> Password;  

    return Password; 
}


bool GuessPassword(string OriginalPassword)
{
    string word = "";  
    int Counter = 0;   

    cout << "\n";  

  
    for (int i = 65; i <= 90; i++)      
    {
        for (int j = 65; j <= 90; j++)     
        {
            for (int k = 65; k <= 90; k++) 
            {
                
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                Counter++;  

                
                cout << "Trial [" << Counter << "] : " << word << endl;

                if (word == OriginalPassword)
                {
                    cout << "\nPassword is " << word << "\n";
                    cout << "Found after " << Counter << " Trial(s)\n";

                    return true;
                }

                word = "";
            }
        }
    }

    return false; 
}

int main()
{
    GuessPassword(ReadPassword());

    return 0;  
} */


/*solution 19

string ReadText()
{
    string Text;  

    cout << "Please enter Text?\n"; 
    getline(cin, Text);             

    return Text; 
}

string EncryptText(string Text, short EncryptionKey)
{

    for (int i = 0; i <= Text.length(); i++)
    {
       
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    return Text; 
}


string DecryptText(string Text, short EncryptionKey)
{
   
    for (int i = 0; i <= Text.length(); i++)
    {
    
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    return Text; 
}

int main()
{
    const short EncryptionKey = 2;

    string TextAfterEncryption, TextAfterDecryption;  

    string Text = ReadText();

    TextAfterEncryption = EncryptText(Text, EncryptionKey);

    TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : " << Text << endl;
    cout << "Text After Encryption  : " << TextAfterEncryption << endl;
    cout << "Text After Decryption  : " << TextAfterDecryption << endl;

    return 0; 
}*/



/* solution 19 



int RandomNumber(int From, int To)
{
   
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  
}

int main() {
   
    srand((unsigned)time(NULL));

    
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;

    return 0; 
}*/

/*solution 20 
int RandomNumber(int From, int To)
{
   
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  
}

enum enCharType {
    SamallLetter = 1,    
    CapitalLetter = 2,   
    SpecialCharacter = 3,
    Digit = 4            
};

char GetRandomCharacter(enCharType CharType)
{
 
    switch (CharType)
    {
    case enCharType::SamallLetter:
    {
       
        return char(RandomNumber(97, 122));
        break;  
    }
    case enCharType::CapitalLetter:
    {
   
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialCharacter:
    {
  
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit:
    {
       
        return char(RandomNumber(48, 57));
        break;
    }
    }

    return '\0';
}

int main()
{
   
    srand((unsigned)time(NULL));

   
    cout << GetRandomCharacter(enCharType::SamallLetter) << endl;      
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;    
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;  
    cout << GetRandomCharacter(enCharType::Digit) << endl;             

    return 0;  
}*/