// C++ program to sizes of data types 
#include<iostream> 
#include<limits>
using namespace std; 

int main() 
{ 
	cout << "Size of char : " << sizeof(char) 
	<< " byte with min : " << numeric_limits<char>::min() << " and max: " << numeric_limits<char>::max() << endl; 
    cout << "Size of char16_t : " << sizeof(char16_t) 
	<< " byte with min : " << numeric_limits<char16_t>::min() << " and max: " << numeric_limits<char16_t>::max() << endl; 
    cout << "Size of char32_t : " << sizeof(char32_t) 
	<< " byte with min : " << numeric_limits<char32_t>::min() << " and max: " << numeric_limits<char32_t>::max() << endl; 
    cout << "Size of wchar_t : " << sizeof(wchar_t) 
	<< " byte with min : " << numeric_limits<wchar_t>::min() << " and max: " << numeric_limits<wchar_t>::max() << endl; 
    cout << "Size of signed char : " << sizeof(signed char) 
	<< " byte with min : " << numeric_limits<signed char>::min() << " and max: " << numeric_limits<signed char>::max() << endl; 
    cout << "Size of signed short : " << sizeof(signed short) 
	<< " byte with min : " << numeric_limits<signed short>::min() << " and max: " << numeric_limits<signed short>::max() << endl; 
    cout << "Size of signed int : " << sizeof(signed int) 
	<< " byte with min : " << numeric_limits<signed int>::min() << " and max: " << numeric_limits<signed int>::max() << endl; 
    cout << "Size of signed long : " << sizeof(signed long) 
	<< " byte with min : " << numeric_limits<signed long>::min() << " and max: " << numeric_limits<signed long>::max() << endl; 
    cout << "Size of signed long long : " << sizeof(signed long long)
	<< " byte with min : " << numeric_limits<signed long long>::min() << " and max: " << numeric_limits<signed long long>::max() << endl; 
    cout << "Size of unsigned char : " << sizeof(unsigned char) 
	<< " byte with min : " << numeric_limits<unsigned char>::min() << " and max: " << numeric_limits<unsigned char>::max() << endl; 
    cout << "Size of unsigned short : " << sizeof(unsigned short) 
	<< " byte with min : " << numeric_limits<unsigned short>::min() << " and max: " << numeric_limits<unsigned short>::max() << endl; 
    cout << "Size of unsigned int : " << sizeof(unsigned int) 
	<< " byte with min : " << numeric_limits<unsigned int>::min() << " and max: " << numeric_limits<unsigned int>::max() << endl; 
    cout << "Size of unsigned long : " << sizeof(unsigned long) 
	<< " byte with min : " << numeric_limits<unsigned long>::min() << " and max: " << numeric_limits<unsigned long>::max() << endl; 
    cout << "Size of unsigned long long : " << sizeof(unsigned long long) 
	<< " byte with min : " << numeric_limits<unsigned long long>::min() << " and max: " << numeric_limits<unsigned long long>::max() << endl; 
	cout << "Size of float : " << sizeof(float) 
	<< " byte with min : " << numeric_limits<float>::min() << " and max: " << numeric_limits<float>::max() << endl; 
	cout << "Size of double : " << sizeof(double) 
	<< " byte with min : " << numeric_limits<double>::min() << " and max: " << numeric_limits<double>::max() << endl; 
	cout << "Size of long double : " << sizeof(long double) 
	<< " byte with min : " << numeric_limits<long double>::min() << " and max: " << numeric_limits<long double>::max() << endl; 
    cout << "Size of bool : " << sizeof(bool) 
	<< " byte with min : " << numeric_limits<bool>::min() << " and max: " << numeric_limits<bool>::max() << endl; 
    // cout << "Size of void : " << sizeof(void) 
	// << " byte with min : " << numeric_limits<void>::min() << " and max: " << numeric_limits<void>::max() << endl; // 1 byte
    cout << "Size of null : " << sizeof(nullptr) 
	<< " byte"; 
	
	return 0; 
} 
