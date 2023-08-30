#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int idu;
class user
{
  char password[20], notes[2000];
  int user_id, progress;

public:
  char user_name[20];
  void takenotes(char s[])
  {
    char a[100];
    strcat(notes, s);
    cout << "enter your notes";
    cin >> a;
    strcat(notes, a);
  }
  void incre()
  {
    progress++;
  }
  void progressreport()
  {
    cout << "total topics covered: " << progress << '\n';
  }
  void notelearn()
  {
    puts(notes);
  }
  int verify_password(char s[])
  {
    int i;
    if (strcmp(password, s) == 0)
      i = 1;
    else
      i = 0;
    return i;
  }
  void in()
  {
    progress = 0;
    cout << "\n\n\n        enter user name: ", gets(user_name);
    cout << "\n\n\n\n        enter password: ", gets(password);
    user_id = idu;
    notes[0] = '/0';
  }

  void delete_user()
  {
    password[0] = '\0';
    notes[0] = '\n';
    user_id = -1;
    user_name[0] = '\n';
  }
};
user users[25];

int verify_id(char s[])
{
  clrscr();
  int t = -1, i;
  for (i = 0; i < 25; i++)
  {
    if (strcmp(s, users[i].user_name) == 0)
    {
      t = i + 1;
    }
  }
  return t;
}
void begin()
{
  ifstream x("bfilepro.bak");
  x.read((char *)&users, 25 * sizeof(user));
}
void close()
{
  ofstream x("bfilepro.bak");
  x.write((char *)&users, 25 * sizeof(user));
}

void fun(user user1)
{
  clrscr();
  char c;
  cout << "In programming, function refers to a segment that groups code to perform a specific task.\n Depending on whether a function is predefined or created by programmer; there are two types of function:\n 1.Library Function\n 2.User-defined Function\n \n Library Function:\nLibrary functions are the built-in function in C++ programming.\nProgrammer can use library function by invoking function directly; they don't need to write it themselves.\n \n ";
  cout << "do you want to take notes \n";
  cin >> c;
  if (c == 'y')
    user1.takenotes("introduction: \n");
  user1.incre();
}
void fun11(user user1)
{
  clrscr();
  char c;
  cout << "It is defined in <iostream> header file. \nThe cout object is ensured to be initialized during \n or \n before the first time an object of type ios_base::Init is constructed.\n After the cout object is constructed,\n it is tied to cin which means that any input operation on cin executes cout.flush()\n.";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("cout: \n");
  user1.incre();
}
void fun12(user user1)
{
  clrscr();
  char c;
  cout << "C++ cin: \nThe cin object in C++ is an object of class istream. \n \n It is used to accept the input from the standard input device i.e. keyboard.\n \n It is associated with the standard C input stream stdin.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("cin: \n");
  user1.incre();
}

void fun1(user user1)
{
  clrscr();
  int ch, r = 1;
  while (r)
  {
    cout << "1.cout\n2.cin\n3.exit";
    cin >> ch;
    if (ch == 1)
      fun11(user1);
    if (ch == 2)
      fun12(user1);
    if (ch == 3)
      r = 0;
  }
}
void fun21(user user1)
{
  clrscr();
  char c;
  cout << "The strlen() function calculates the length of a given string.\n The strlen() function takes a string as an argument and returns its length.\n The returned value is of type long int .\n It is defined in the <string>.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("strlen: \n");
  user1.incre();
}
void fun22(user user1)
{
  clrscr();
  char c;
  cout << "\nstrcmp is an in-built function, defined under string. h header file. Its is used for the comparison of 2 strings.\n  strcmp(string 1, string 2) strcmp function returns a negative, zero, or positive integer.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("strcmp: \n");
  user1.incre();
}
void fun23(user user1)
{
  clrscr();
  char c;
  cout << "Where as, strcmp() function treats “A” and “a” as different characters. \nstrcmpi() function is non standard function which may not available in standard library in C. \n Both functions compare two given strings and returns zero if they are same. \n If length of string1 < string2, it returns < 0 value.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("strcmpi: \n");
  user1.incre();
}
void fun24(user user1)
{
  clrscr();
  char c;
  cout << "The strcpy() function is used to copy strings.\n It copies string pointed to by source into the destination .\n This function accepts two arguments of type pointer to char or array of characters and returns a pointer to the first string i.e destination .\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("strcpy: \n");
  user1.incre();
}
void fun25(user user1)
{
  clrscr();
  char c;
  cout << "In computing, the C programming language offers a library function called strcat that allows one memory block to be appended to another memory block.\n Both memory blocks are required to be null-terminated.\n ... The name strcat is an abbreviation of string concatenate\n. strcat is found in the string. h header file.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("strcat: \n");
  user1.incre();
}

void fun2(user user1)
{
  clrscr();
  int r = 1, ch;
  while (r)
  {
    cout << "1.strlen\n2.strcmp\n3.strcmpi\n4.strcpy\n5.strcat\n6.exit";
    cin >> ch;
    if (ch == 1)
      fun21(user1);
    if (ch == 2)
      fun22(user1);
    if (ch == 3)
      fun23(user1);
    if (ch == 4)
      fun24(user1);
    if (ch == 5)
      fun25(user1);
    if (ch == 6)
      r = 0;
  }
}

void fun31(user user1)
{
  clrscr();
  char c;
  cout << "isupper. int isupper ( int c );\n Check if character is uppercase letter.\n Checks if parameter c is an uppercase alphabetic letter. \nNotice that what is considered a letter may depend on the locale being used; \nIn the default C locale, an uppercase letter is any of:\n A B C D E F G H I J K L M N O P Q R S T U V W X Y Z.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("isupper: \n");
  user1.incre();
}
void fun32(user user1)
{
  clrscr();
  char c;
  cout << "Function islower() takes a single argument in the form of an integer and returns a value of type int .\n Even though islower() takes integer as an argument, character is passed to the function. \nInternally, the character is converted to its ASCII value for the check. \nIt is defined in <ctype\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("islower: \n");
  user1.incre();
}
void fun33(user user1)
{
  clrscr();
  char c;
  cout << "isalpha(c) is a function in C which can be used to check if the passed character is an alphabet or not.\n It returns a non-zero value if it's an alphabet else it returns 0.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("isalpha: \n");
  user1.incre();
}
void fun34(user user1)
{
  clrscr();
  char c;
  cout << "isdigit() The function isdigit() is used to check that character is a numeric character or not.\n This function is declared in ctype. h header file.\n It returns an integer value, if the argument is a digit otherwise, it returns zero\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("isdigit: \n");
  user1.incre();
}

void fun35(user user1)
{
  clrscr();
  char c;
  cout << "isalnum() function in C programming language checks whether the given character is alphanumeric or not.\n ... Alphanumeric: A character that is either a letter or a number.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("isalnum: \n");
  user1.incre();
}
void fun36(user user1)
{
  clrscr();
  char c;
  cout << "The toupper() function is used to convert lowercase alphabet to uppercase.\n i.e. If the character passed is a lowercase alphabet then the toupper() function converts a lowercase alphabet to an uppercase alphabet.\n It is defined in the ctype.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("toupper: \n");
  user1.incre();
}
void fun37(user user1)
{
  clrscr();
  char c;
  cout << "The tolower() function takes an uppercase alphabet and convert it to a lowercase character.\n  If the arguments passed to the tolower() function is other than an uppercase alphabet,\n it returns the same character that is passed to the function. \nIt is defined in ctype.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("tolower: \n");
  user1.incre();
}

void fun3(user user1)
{
  clrscr();
  int r = 1, ch;
  while (r)
  {
    cout << "1.isupper\n2.islower\n3.isalpha\n4.isdigit\n5.isalnum\n6.toupper\n7.tolower\n8.exit";
    cin >> ch;
    if (ch == 1)
      fun31(user1);
    if (ch == 2)
      fun32(user1);
    if (ch == 3)
      fun33(user1);
    if (ch == 4)
      fun34(user1);
    if (ch == 5)
      fun35(user1);
    if (ch == 6)
      fun36(user1);
    if (ch == 7)
      fun37(user1);
    if (ch == 8)
      r = 0;
  }
}
void fun41(user user1)
{
  clrscr();
  char c;
  cout << " it is used to find the square root of a given number, \nit accepts a number and returns the square root. \nNote: If we provide a negative value, sqrt() function returns a domain error.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("sqrt: \n");
  user1.incre();
}
void fun42(user user1)
{
  clrscr();
  char c;
  cout << "C++ pow() The pow() function computes a base number raised to the power of exponent number.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("pow: \n");
  user1.incre();
}
void fun43(user user1)
{
  clrscr();
  char c;
  cout << "The sin() function in C++ returns the sine of an angle (argument) given in radians.\n This function is defined in <math.h> header file. sin x = sin \n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("sin: \n");
  user1.incre();
}
void fun44(user user1)
{
  clrscr();
  char c;
  cout << "The cos() function in C++ returns the cosine of an angle (argument) given in radian.\n This function is defined in <math.h> header file.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("cos: \n");
  user1.incre();
}
void fun45(user user1)
{
  clrscr();
  char c;
  cout << "The tan() function in C++ returns the tangent of an angle (argument) given in radians.\n This function is defined in <math.h> header file.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("tan: \n");
  user1.incre();
}

void fun4(user user1)
{
  clrscr();
  int r = 1, ch;
  while (r)
  {
    cout << "1.sqrt\n2.pow\n3.sin\n4.cos\n5.tan\n6.exit";
    cin >> ch;
    if (ch == 1)
      fun41(user1);
    if (ch == 2)
      fun42(user1);
    if (ch == 3)
      fun43(user1);
    if (ch == 4)
      fun44(user1);
    if (ch == 5)
      fun45(user1);
    if (ch == 6)
      r = 0;
  }
}
void fun51(user user1)
{
  clrscr();
  char c;
  cout << "The gets() function in C++ reads characters from stdin and stores them until a newline character is found or end of file occurs.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("gets: \n");
  user1.incre();
}
void fun52(user user1)
{
  clrscr();
  char c;
  cout << "The puts() function takes a null terminated string str as its argument and writes it to stdout .\n The terminating null character is not written but it adds a newline character after writing the string.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("puts: \n");
  user1.incre();
}

void fun5(user user1)
{
  clrscr();
  int r = 1, ch;
  while (r)
  {
    cout << "1.gets\n2.puts\n3.exit";
    cin >> ch;
    if (ch == 1)
      fun51(user1);
    if (ch == 2)
      fun52(user1);
    if (ch == 3)
      r = 0;
  }
}
void fun61(user user1)
{
  clrscr();
  char c;
  cout << "Returns a pseudo-random integral number in the range between 0 and RAND_MAX . \nThis number is generated by an algorithm that returns a sequence of apparently non-related numbers each time it is called.\n ... C++ supports a wide range of powerful tools to generate random and pseudo-random numbers.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("random: \n");
  user1.incre();
}
void fun62(user user1)
{
  clrscr();
  char c;
  cout << "Returns a pseudo-random integral number in the range between 0 and RAND_MAX . \nThis number is generated by an algorithm that returns a sequence of apparently non-related numbers each time it is called.\n ... C++ supports a wide range of powerful tools to generate random and pseudo-random numbers.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("randomize: \n");
  user1.incre();
}
void fun6(user user1)
{
  clrscr();
  int r = 1, ch;
  while (r)
  {
    cout << "1.random\n2.randomize\n3.exit";
    cin >> ch;
    if (ch == 1)
      fun61(user1);
    if (ch == 2)
      fun62(user1);
    if (ch == 3)
      r = 0;
  }
}

void fun71(user user1)
{
  clrscr();
  char c;
  cout << "Clrscr() It is a predefined function in <conio. h> used to clear the console screen. \n It is a predefined function, by using this function we can clear the data from console \n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("clrscr: \n");
  user1.incre();
}
void fun72(user user1)
{
  clrscr();
  char c;
  cout << "Getch() It is a predefined function in <conio. h> will tell to the console wait for some time until a key is hit given after running of program.\n By using this function we can read a character directly from the keyboard.\n \n";
  cout << "do you want to take notes";
  cin >> c;
  if (c == 'y')
    user1.takenotes("getch(): \n");
  user1.incre();
}

void fun7(user user1)
{
  clrscr();
  int r = 1, ch;
  while (r)
  {
    cout << "1.clrscr\n2.getch\n3.exit";
    cin >> ch;
    if (ch == 1)
      fun71(user1);
    if (ch == 2)
      fun72(user1);
    if (ch == 3)
      r = 0;
  }
}

void second_menu(user user1)
{
  clrscr();
  int r = 1, r1 = 1, r2 = 1, ch, ch1, ch2;
  while (r)
  {
    clrscr();
    cout << "\n\n\n		1.learn c++ functions\n\n\n		2.learn from notes\n\n\n		3.see progress report\n\n\n		4.exit";
    cin >> ch;
    if (ch == 1)
    {
      r1 = 1;
      while (r1)
      {
        clrscr();
        cout << "\n\n\n		1.function introduction\n\n\n		2.functions\n\n\n		3.exit";
        cin >> ch1;
        if (ch1 == 1)
        {
          fun(user1);
        }
        if (ch1 == 2)
        {
          while (r2)
          {
            clrscr();
            cout << "all the functions are divided on the basis of their header file select the header file to proceed\n";
            cout << "\n\n\n		1.IOSTREAM.H\n\n		2.STRING.H\n\n		3.CTYPE.H\n\n		4.MATH.H\n\n		5.STDIO.H\n\n		6.STDLIB.H\n\n		7.CONIO.H\n\n		8.exit";
            cin >> ch2;
            if (ch2 == 1)
              fun2(user1);
            if (ch2 == 3)
              fun3(user1);
            if (ch2 == 4)
              fun4(user1);
            if (ch2 == 5)
              fun5(user1);
            if (ch2 == 6)
              fun6(user1);
            if (ch2 == 7)
              fun7(user1);
            if (ch2 == 8)
              r2 = 0;
          }
        }
        r1 = 0;
      }
    }
    if (ch == 2)
      user1.notelearn();
    if (ch == 3)
      user1.progressreport();
    if (ch == 4)
      r = 0;
  }
}
int first_menu()
{
  clrscr();
  char pw1[20], un1[20];
  int option1, wpo = 1, uno = 1, login = 1, id = -1, un = 1, pw = 1, dp = 1;
  user user1;
  cout << "\n\n\n\n\n                1.login\n\n\n		2.create a new profile\n\n\n		3.delete a profile\n\n\n		4.exit\n\n\n		";
  cin >> option1;
  clrscr();
  if (option1 == 1)
  {
    clrscr();
    while (login)
    {
      while (un)
      {
        cout << "\n\n\n		enter user name: ";
        cin >> un1;
        id = verify_id(un1);
        if (id != -1)
        {
          un = 0;
          user1 = users[id - 1];
          while (pw)
          {
            clrscr();
            cout << "enter password: ";
            gets(pw1);
            if (user1.verify_password(pw1))
            {
              pw = 0;
              login = 0;
              second_menu(user1);
            }
            else
            {
              cout << "\n\n\n\n		wrong password\n\n\n		1.type passwrod again\n\n\n		2.exit";
              cin >> wpo;
              clrscr();
              if (wpo == 2)
                login = 0;
            }
          }
        }
        else
        {
          clrscr();
          cout << "\n\n\n		invalid user name, you will be taken back to main menu";
          un = 0;
          login = 0;
          getch();
        }
      }
    }
  }
  if (option1 == 2)
  {
    if (idu < 25)
    {
      users[idu].in();
      second_menu(users[idu]);
    }
    else
      cout << "house full";
  }
  if (option1 == 3)
  {
    while (dp)
    {
      clrscr();
      cout << "\n\n\n		enter user name";
      gets(un1);
      id = verify_id(un1);
      if (id != -1)
      {
        while (pw)
        {
          clrscr();
          gets(pw1);
          if (users[id - 1].verify_password(pw1))
          {
            users[id - 1].delete_user();
            dp = 0;
            pw = 0;
          }
          else
          {
            cout << "\n\n\n\n		password is wrong\n\n\n		1.enter again\n\n\n		2.exit";
            cin >> wpo;
            if (wpo == 2)
            {
              pw = 0;
              dp = 0;
            }
          }
        }
      }
      else
      {
        cout << "\n\n\n\n		invalid user name\n\n\n		1.enter user name again\n\n\n		2.exit";
        cin >> uno;
        if (uno == 2)
          dp = 0;
      }
    }
  }
  int end;
  if (option1 != 4)
    end = 1;
  else
    end = 0;
  return end;
}
void main()
{
  clrscr();
  int repeater = 1;

  begin();
  while (repeater)
  {
    repeater = first_menu();
    close();
  }
}
