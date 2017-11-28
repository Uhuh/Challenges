#include <iostream>
#include <string>
#include <cstring>
bool palindrome(const char, const char, const std::string, const int, const int);

int main(int argc, char *argv[])
{
	if (palindrome(argv[1][0], argv[1][strlen(argv[1])-1], argv[1], 0, strlen(argv[1]) - 1)) {
		std::cout << "Your word is a palindrome!" << std::endl;
	}
	else {
		std::cout << "That is not a palindrome!" << std::endl;
	}
	return 0;
}

bool palindrome(const char a, const char b, const std::string word, const int front, const int back) {
	if (back <= front) return true;
	if(a == b) return palindrome(word[front+1], word[back-1], word, front+1, back-1);
	return false;
}