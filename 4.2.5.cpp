#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;
int main()
{
 FILE* file = fopen("File.txt", "at");
 int a;
 char surname[10];
 while (true)
 {
  cout << "Continue(1or0)?:";
  cin >> a;
  if (a == 0)
   break;
  cin >> surname;
  fprintf(file, "%s ", surname);
 }
 fclose(file);
}