#include <iostream>
#include <tchar.h>
#include <windows.h>
using namespace std;

int main()
{
  ShellExecute(NULL, _T("open"), _T("https://www.youtube.com/watch?v=dQw4w9WgXcQ"), nullptr, nullptr, SW_SHOWNORMAL);
}